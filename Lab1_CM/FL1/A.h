#define _USE_MATH_DEFINES
#include <iostream>
#include <functional>
#define MAT 1
#define SP (MAT+1)%2


//Трехдиагональная матрица 
class TridiagMatrix {
public:

	int n;
	double* A;

	//Конструкторы
	TridiagMatrix(int n1 = 2) {
		n = n1 * 3;
		A = new double[n];
		for (int i = 0; i < n; i++) {
			A[i] = 0;
		}
	}
	TridiagMatrix(double* A1, int n1) {
		n = n1 + 2;
		A = new double[n];
		A[0] = A1[0]; A[1] = A1[1]; A[2] = 0;
		for (int i = 2; i < n - 2; i++) {
			A[i + 1] = A1[i];
		}
		A[n - 3] = A1[n - 2 - 2]; A[n - 2] = A1[n - 1 - 2]; A[n - 1] = 0;

	}
	TridiagMatrix(double** A1, int n1) {
		n = n1 * 3;
		A = new double[n];
		int j = 3;
		A[0] = A1[0][0]; A[1] = A1[0][1]; A[2] = 0;
		for (int i = 1; i < n1 - 1; i++) {
			A[j] = A1[i][i - 1]; j++;
			A[j] = A1[i][i]; j++;
			A[j] = A1[i][i + 1]; j++;
		}
		A[n - 3] = A1[n1 - 1][n1 - 2]; A[n - 2] = A1[n1 - 1][n1 - 1]; A[n - 1] = 0;

	}

	double** ret() {
		int n1 = n / 3;
		double** mA = new double* [n1];
		for (int i = 0; i < n1; i++) {
			mA[i] = new double[n1];
			for (int j = 0; j < n1; j++)
				mA[i][j] = 0;
		}
		mA[0][0] = A[0]; mA[0][1] = A[1];
		mA[n1 - 1][n1 - 2] = A[n - 3]; mA[n1 - 1][n1 - 1] = A[n - 2];
		int j = 3;
		for (int i = 1; i < n1 - 1; i++)
		{
			mA[i][i - 1] = A[j]; j++;
			mA[i][i] = A[j]; j++;
			mA[i][i + 1] = A[j]; j++;
		}
		return mA;
	}

	double* operator[] (int index)
	{
		return &A[index * 3];
	}

};
std::ostream& operator<< (std::ostream& out, TridiagMatrix& T)
{
#if MAT
	double** mA = T.ret();
	int n1 = T.n / 3;

	for (int i = 0; i < n1; i++) {
		for (int j = 0; j < n1; j++)
			out << mA[i][j] << "\t";
		out << std::endl;
	}
#endif

#if SP
	out << T.A[0] << " " << T.A[1] << " ";
	out << endl;
	for (int i = 3; i < T.n - 3; i++) {
		out << T.A[i] << " ";
		if ((i + 1) % 3 == 0) out << endl;
	}
	out << T.A[T.n - 3] << " " << T.A[T.n - 2] << endl;
#endif

	return out;
}

//Метод прогонки
double* runth(double** A, double* B, int n)
{
	double* a = new double[n];
	double* b = new double[n];
	double* res = new double[n];

	double y = A[0][0];
	a[0] = -A[0][1] / y;
	b[0] = B[0] / y;

	for (int i = 1; i < n - 1; i++) {
		y = A[i][i] + A[i][i - 1] * a[i - 1];
		a[i] = -A[i][i + 1] / y;
		b[i] = (B[i] - A[i][i - 1] * b[i - 1]) / y;

	}

	res[n - 1] = (B[n - 1] - A[n - 1][n - 1 - 1] * b[n - 1 - 1]) / (A[n - 1][n - 1] + A[n - 1][n - 1 - 1] * a[n - 1 - 1]);

	for (int i = n - 1 - 1; i >= 0; i--) {
		res[i] = a[i] * res[i + 1] + b[i];
	}

	return res;
}
double* runth(TridiagMatrix A, double* B, int n)
{
	double* a = new double[n];
	double* b = new double[n];
	double* res = new double[n];

	double y = A[0][0];
	a[0] = -A[0][1] / y;
	b[0] = B[0] / y;

	for (int i = 1; i < n - 1; i++) {
		y = A[i][1] + A[i][0] * a[i - 1];
		a[i] = -A[i][2] / y;
		b[i] = (B[i] - A[i][0] * b[i - 1]) / y;
	}

	res[n - 1] = (B[n - 1] - A[n - 1][0] * b[n - 1 - 1]) / (A[n - 1][1] + A[n - 1][0] * a[n - 1 - 1]);

	for (int i = n - 1 - 1; i >= 0; i--) {
		res[i] = a[i] * res[i + 1] + b[i];
	}

	return res;
}

double a, b, h;
double x(double i) {
	return a + h * i;
}
double x2(double i, double k) {
	return a + h * i / k;
}

std::function<double(double)> f, f2, f3;
double f1_test(double x) {
	if ((x >= -1) && (x <= 0))
		return pow(x, 3) + 3 * x * x;
	if ((x <= 1) && (x > 0))
		return -1 * pow(x, 3) + 3 * x * x;
}
double f1_test2(double x) {
	if ((x >= -1) && (x <= 0))
		return 3 * pow(x, 2) + 6 * x;
	if ((x <= 1) && (x > 0))
		return -3 * pow(x, 2) + 6 * x;
}
double f1_test3(double x) {
	if ((x >= -1) && (x <= 0))
		return 6 * x + 6;
	if ((x <= 1) && (x > 0))
		return -6 * x + 6;
}
double f1_lena(double x) {
	//return cos(pow(M_E, x));
	return cos(pow(M_E, x));
}
double f1_lena2(double x) {
	//return cos(pow(M_E, x));
	return -1 * pow(M_E, x) * sin(pow(M_E, x));
}
double f1_lena3(double x) {
	//return cos(pow(M_E, x));
	return -1 * pow(M_E, x) * cos(pow(M_E, x)) - 1 * pow(M_E, x) * sin(pow(M_E, x));
}
double f2_lena(double x) {
	return cos(pow(M_E, x)) + cos(10 * x);
}
double f2_lena2(double x) {
	return -1 * pow(M_E, x) * sin(pow(M_E, x)) - 10 * sin(10 * x);
}
double f2_lena3(double x) {
	return -1 * pow(M_E, x) * cos(pow(M_E, x)) - 1 * pow(M_E, x) * sin(pow(M_E, x)) - 10 * 10 * cos(10 * x);
}
double f1_ver(double x) {
	//return cos(pow(M_E, x));
	return pow(1 + pow(x, 4), 1 / 2);
}
double f1_ver2(double x) {
	//return cos(pow(M_E, x));
	return 2 * pow(x, 3) * pow(1 + pow(x, 4), -1 / 2);
}
double f1_ver3(double x) {
	//return cos(pow(M_E, x));
	return (6 * x + 6 * pow(x, 5) - pow(x, 3)) * pow(1 + pow(x, 4), -3 / 2);
}
double f2_ver(double x) {
	return pow(1 + pow(x, 4), 1 / 2) + cos(10 * x);
}
double f2_ver2(double x) {
	return 2 * pow(x, 3) * pow(1 + pow(x, 4), -1 / 2) - 10 * sin(10 * x);
}
double f2_ver3(double x) {
	return (6 * x + 6 * pow(x, 5) - pow(x, 3)) * pow(1 + pow(x, 4), -3 / 2) - 10 * 10 * cos(10 * x);
}
double f1_ma(double x) {
	//return cos(pow(M_E, x));
	return cos(x * x / 4);
}
double f1_ma2(double x) {
	//return cos(pow(M_E, x));
	return -sin(x * x / 4) * x / 2;
}
double f1_ma3(double x) {
	//return cos(pow(M_E, x));
	return -cos(x * x / 4) * x / 2 * x / 2 - sin(x * x / 4) / 2;
}
double f2_ma(double x) {
	return cos(x * x / 4) + cos(10 * x);
}
double f2_ma2(double x) {
	return -sin(x * x / 4) * x / 2 - 10 * sin(10 * x);
}
double f2_ma3(double x) {
	return -cos(x * x / 4) * x / 2 * x / 2 - sin(x * x / 4) / 2 - 10 * 10 * cos(10 * x);
}



double** FF(double* A)
{
	int q = int(A[0]);
	int n = int(A[1]) + 1;//кол-во шагов
	int k = A[4];
	double S1 = A[2], S2 = A[3];				//граничные условия

	switch (q)
	{
	case 1: {
		f = f1_test;
		f2 = f1_test2;
		f3 = f1_test3;
	}
		  break;
	case 2: {
		f = f1_lena;
		f2 = f1_lena2;
		f3 = f1_lena3;
	}
		  break;
	case 3: {
		f = f2_lena;
		f2 = f2_lena2;
		f3 = f2_lena3;
	}
		  break;
	case 4: {
		f = f1_ver;
		f2 = f1_ver2;
		f3 = f1_ver3;
	}
		  break;
	case 5: {
		f = f2_ver;
		f2 = f2_ver2;
		f3 = f2_ver3;
	}
		  break;
	case 6: {
		f = f1_ma;
		f2 = f1_ma2;
		f3 = f1_ma3;
	}
		  break;
	case 7: {
		f = f2_ma;
		f2 = f2_ma2;
		f3 = f2_ma3;
	}
		  break;

	}
	// Инициализация
	a = -1, b = 1;						//границы отрезка						
	h = (double)(b - a) / (n - 1);			//шаг

	int N = n - 2;
	TridiagMatrix MM(N);
	double* B = new double[N];

	MM[0][0] = 4 * h; MM[0][1] = h;
	B[0] = 6 * (f(x(2)) + f(x(0)) - 2 * f(x(1))) / h - h * S1;
	MM[N - 1][1] = 4 * h; MM[N - 1][0] = h;
	B[N - 1] = 6 * (f(x(n - 1)) + f(x(n - 3)) - 2 * f(x(n - 2))) / h - h * S2;
	for (int i = 1; i < N - 1; i++) {
		MM[i][0] = h;
		MM[i][1] = 4 * h;
		MM[i][2] = h;
		B[i] = 6.0 / h;
		double a2 = f(x(i+2));
		double b2= f(x(i));
		double c2 = -2 * f(x(i+1));
		B[i] = B[i]*(a2+b2+c2);
	}

	//B[0] = 9;
	//B[1] = 15;
	//B[2] = 9;

	double* C1 = new double[N];
	C1 = runth(MM, B, N);

	double* C = new double[N + 2];
	for (int i = 0; i < N; i++)
		C[i + 1] = C1[i];
	C[0] = S1; C[N + 2 - 1] = S2;

	for (int i = 0; i < N + 2; i++)
		std::cout << "C[" << i << "]= " << C[i] << " ";

	N = N + 2;
	double** Q = new double* [N];
	for (int i = 0; i < N; i++) {
		Q[i] = new double[4];
	}

	for (int i = 1; i < N; i++) //0 - для рабочих записей
	{
		Q[i][0] = f(x(i));										//a(i)
		Q[i][1] = (f(x(i)) - f(x(i - 1))) / h + C[i] * h / 3 + C[i - 1] * h / 6;	//b(i)
		Q[i][2] = C[i];											//c(i)
		Q[i][3] = (C[i] - C[i - 1]) / h;								//d(i)
	}
	return Q;
}

double Si(double x, double xi, double a, double b, double c, double d)
{
	return a + b * (x - xi) + c / 2 * pow(x - xi, 2) + d / 6 * pow(x - xi, 3);
}
double Si2(double x, double xi, double a, double b, double c, double d)
{
	return b + c * (x - xi) + d / 2 * pow(x - xi, 2);
}
double Si3(double x, double xi, double a, double b, double c, double d)
{
	return c + d * (x - xi);
}