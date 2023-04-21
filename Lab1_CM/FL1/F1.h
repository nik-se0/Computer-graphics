//Функции
#include <iostream>
#include <cmath>
#include <functional>
using namespace std;
#define MAT 1
#define SP (MAT+1)%2

//Трехдиагональная матрица 
class TridiagMatrix {
public:

	int n;
	double* A;

	//Конструкторы
	TridiagMatrix(int n1=2) {
		n = n1 * 3;
		A = new double [n];
		for (int i = 0; i < n; i++) {
			A[i] = 0;
		}
	}
	TridiagMatrix(double* A1, int n1) {
		n=n1+2;
		A = new double [n];
		A[0] = A1[0]; A[1] = A1[1]; A[2] = 0;
		for (int i = 2; i < n-2; i++) {
			A[i+1] = A1[i];
		}
		A[n-3] = A1[n-2-2]; A[n-2] = A1[n-1-2]; A[n-1] = 0;

	}
	TridiagMatrix(double** A1, int n1) {
		n = n1*3;
		A = new double[n];
		int j = 3;
		A[0] = A1[0][0]; A[1] = A1[0][1]; A[2] = 0;
		for (int i = 1; i < n1-1; i++) {
			A[j] = A1[i][i-1]; j++;
			A[j] = A1[i][i]; j++;
			A[j] = A1[i][i+1]; j++;
		}
		A[n-3] = A1[n1-1][n1-2]; A[n-2] = A1[n1-1][n1-1]; A[n-1] = 0;

	}

	double** ret(){
		int n1 = n / 3;
		double** mA = new double* [n1];
		for (int i = 0; i < n1; i++) {
			mA[i] = new double[n1];
			for (int j = 0; j < n1; j++)
				mA[i][j] = 0;
		}
		mA[0][0] = A[0]; mA[0][1] = A[1];
		mA[n1-1][n1-2] = A[n-3]; mA[n1-1][n1-1] = A[n-2];
		int j = 3;
		for (int i = 1; i < n1-1; i++)
		{
			mA[i][i - 1] = A[j]; j++;
			mA[i][i] = A[j]; j++;
			mA[i][i+1] = A[j]; j++;
		}
		return mA;
	}

	double* operator[] (int index)
	{
		return &A[index*3];
	}

};
ostream& operator<< (ostream& out, TridiagMatrix& T)
{
#if MAT
	double** mA = T.ret();
	int n1 = T.n / 3;

	for (int i = 0; i < n1; i++) {
		for (int j = 0; j < n1; j++)
			out << mA[i][j] << "\t";
		out << endl;
	}
#endif

#if SP
	out << T.A[0] << " " << T.A[1]<<" ";
	out<< endl;
	for(int i=3; i<T.n-3;i++)	{
		out << T.A[i] << " ";
		if ((i+1) % 3 == 0) out << endl;
	}
	out << T.A[T.n - 3] << " " << T.A[T.n - 2]<<endl;
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
		y = A[i][1] + A[i][0] * a[i-1];
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

//Основой код лабы
std::function<double(double)> f;
double ch(double x) {
	return cosh(x);
}
double x(double i) {
	return a + h * i;
}

double** F()
{
	switch (q)
	case 1: f = f1_test;
		break;
	case 2: f = f1_os;
		break;
	case 3: f = f2_os;
		break;
	f = ch;
	// Инициализация
	a = 0.2, b = 0.8;						//границы отрезка
	int n = 4;							//кол-во шагов
	h = (double)(b - a) / n;			//шаг
	double S1 = 0, S2 = 0;				//граничные условия

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
		B[i] = 6 * (f(x(i + 1)) + f(x(i - 1)) - 2 * f(x(i))) / h;
	}
	cout << MM;

	double* C1 = new double[N];
	C1 = runth(MM, B, N);

	double* C = new double[N + 2];
	for (int i = 0; i < N; i++)
		C[i + 1] = C1[i];
	C[0] = S1; C[N + 2 - 1] = S2;

	for (int i = 0; i < N + 2; i++)
		cout << C[i] << " ";

	N = N + 1;
	double** Q = new double* [N];
	for (int i = 0; i < N; i++) {
		Q[i] = new double[N];
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
