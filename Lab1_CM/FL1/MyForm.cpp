#include "MyForm.h"
//#include "F1.h"
#include "P1.h"
#include <cmath>

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(array<String^>^ arg) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	FL1::MyForm form;
	Application::Run(% form);
}





System::Void FL1::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	//Считываем данные
	double* A = new double[13];
	int flag = 0;
	String ^ fun2;
	try {
		//A[0] = System::Convert::ToDouble(q->Text);//
		fun2 = System::Convert::ToString(fun->Text);
		A[0] = 0;
		if (fun2 == "sgn(-x)*(x^3+3*x^2)")
			A[0] = 1;
		if (fun2 == "cos(e^x)")
			A[0] = 2;
		if (fun2 == "cos(e^x)+cos(10x)")
			A[0] = 3;
		if (fun2 == "sqrt(1+x^4)")
			A[0] = 4;
		if (fun2 == "sqrt(1+x^4)+cos(10x)")
			A[0] = 5;
		if (fun2 == "cos(x^2/4)")
			A[0] = 6;
		if (fun2 == "cos(x^2/4)+cos(10x)")
			A[0] = 7;
		A[1] = System::Convert::ToDouble(n->Text);//
		A[2] = System::Convert::ToDouble(S1->Text);//
		A[3] = System::Convert::ToDouble(S2->Text);//
		A[4] = 2;//
	}
	catch (...)
	{
		flag = 1;
		MessageBox::Show("Не удалось получить число", "Ошибка", MessageBoxButtons::OK);
	}

	int k = A[4];
	if (flag == 0)
	{  	int N = A[1]+1;//n
		double** B2;
		B2 = FF(A);
		double max1=0.0,max2 = 0.0,max3 = 0.0,x_1 = a,x_2 = a,x_3 = a;
		{Tab2->RowCount = N-1;
		Tab2->ColumnCount = 6;
		Tab2->Columns[0]->HeaderCell->Value = "x(i-1)";
		Tab2->Columns[1]->HeaderCell->Value = "x(i)";
		Tab2->Columns[2]->HeaderCell->Value = "a(i)";
		Tab2->Columns[3]->HeaderCell->Value = "b(i)";
		Tab2->Columns[4]->HeaderCell->Value = "c(i)";
		Tab2->Columns[5]->HeaderCell->Value = "d(i)";
		Tab2->Rows[0]->HeaderCell->Value = "0";
		for (int i = 1; i < N; i++)
		{
			Tab2->Rows[i-1]->HeaderCell->Value = Convert::ToString(i);
			Tab2->Rows[i - 1]->Cells[0]->Value = x(i-1);
			Tab2->Rows[i - 1]->Cells[1]->Value = x(i);
			for (int j = 2; j < 6; j++)
			{
				Tab2->Rows[i-1]->Cells[j]->Value = B2[i][j-2];
			}
		}
		Tab2->AutoResizeRows(DataGridViewAutoSizeRowsMode::AllCellsExceptHeaders);
		Tab2->AutoResizeColumns();

		
		int N2 = (N-1) * k;
		int h2 = h / k;
		Tab->RowCount = N2+1;
		Tab->ColumnCount = 7;
		Tab->Columns[0]->HeaderCell->Value = "x(j)";
		Tab->Columns[1]->HeaderCell->Value = "F(x(j))";
		Tab->Columns[2]->HeaderCell->Value = "S(x(j))";
		Tab->Columns[3]->HeaderCell->Value = "F(x(j))-S(x(j))";
		Tab->Columns[4]->HeaderCell->Value = "F(x(j))'";
		Tab->Columns[5]->HeaderCell->Value = "S(x(j))'";
		Tab->Columns[6]->HeaderCell->Value = "F(x(j))'-S(x(j))'";
		Tab->Rows[0]->HeaderCell->Value = "0";
		
		int i = 0;
		Tab->Rows[0]->HeaderCell->Value = Convert::ToString(0);
		Tab->Rows[0]->Cells[0]->Value = x2(0, k);
		Tab->Rows[0]->Cells[1]->Value = f(x2(0.0, k));
		for (int j = 1; j < N2+1; j++)
		{
			if (i * k < j)
				i++;
			Tab->Rows[j]->HeaderCell->Value = Convert::ToString(j);
			Tab->Rows[j]->Cells[0]->Value = x2(j,k);
			Tab->Rows[j]->Cells[1]->Value = f(x2(j,k));
			Tab->Rows[j]->Cells[2]->Value = Si(x2(j, k), x(i), B2[i][0], B2[i][1], B2[i][2], B2[i][3]);
			Tab->Rows[j]->Cells[3]->Value = f(x2(j, k))-Si(x2(j, k), x(i), B2[i][0], B2[i][1], B2[i][2], B2[i][3]);
			Tab->Rows[j]->Cells[4]->Value = f2(x2(j, k));
			Tab->Rows[j]->Cells[5]->Value = Si2(x2(j, k), x(i), B2[i][0], B2[i][1], B2[i][2], B2[i][3]);
			Tab->Rows[j]->Cells[6]->Value = f2(x2(j, k)) - Si2(x2(j, k), x(i), B2[i][0], B2[i][1], B2[i][2], B2[i][3]);
			
			//j = j + i/2;
		}
			//for (int j = 2; j < 6; j++)
			//{
			//	Tab2->Rows[i - 1]->Cells[j]->Value = B2[i][j - 2];
			//}
		
		Tab2->AutoResizeRows(DataGridViewAutoSizeRowsMode::AllCellsExceptHeaders);
		Tab2->AutoResizeColumns();






		}
		//Построение графика 
		{Gr->Series[0]->Points->Clear();
		Gr->Series[1]->Points->Clear();

		Gr2->Series[0]->Points->Clear();
		Gr2->Series[1]->Points->Clear();
		Gr3->Series[0]->Points->Clear();
		Gr4->Series[0]->Points->Clear();
		Gr5->Series[0]->Points->Clear();
		Gr5->Series[1]->Points->Clear();
		Gr6->Series[0]->Points->Clear();
		{
			int i = 1;
			double xnow=a;
			double k2 = 0.01;
			int q = 1;

			if (N > 30) q = 30;
			while ((xnow < b)&&(i<N))
			{
				while (xnow > x(i))
					i++;
				double a = Si(xnow, x(i), B2[i][0], B2[i][1], B2[i][2], B2[i][3]);
				double b = f(xnow);
				double a2 = Si2(xnow, x(i), B2[i][0], B2[i][1], B2[i][2], B2[i][3]);
				double b2 = f2(xnow);
				double a3 = Si3(xnow, x(i), B2[i][0], B2[i][1], B2[i][2], B2[i][3]);
				double b3 = f3(xnow);
				Gr->Series[0]->Points->AddXY(xnow, a);//v1,v2
				Gr->Series[1]->Points->AddXY(xnow, b);
				Gr2->Series[0]->Points->AddXY(xnow, a2); //Gr->Series[1]->Points->AddXY(xnow, f(xnow));//v1,v2
				Gr2->Series[1]->Points->AddXY(xnow, b2);
				Gr3->Series[0]->Points->AddXY(x(i), abs(a-b));
				Gr4->Series[0]->Points->AddXY(x(i), abs(a2 - b2));
				Gr5->Series[0]->Points->AddXY(xnow, a3);//v1,v2
				Gr5->Series[1]->Points->AddXY(xnow, b3); 
				Gr6->Series[0]->Points->AddXY(x(i), abs(a3 - b3));
				xnow = xnow + k2*h*N/q;
				if (max1 < abs(a - b))
				{
					max1 = abs(a - b);
					x_1 = xnow;
				}
				if (max2 < abs(a2 - b2))
				{
					max2 = abs(a2 - b2);
					x_2 = xnow;
				}
				if (max3 < abs(a3 - b3))
				{
					max3 = abs(a3 - b3);
					x_3 = xnow;
				}
			}/**/
		}
		
		//Вывод справки
		{	Spr->Text = Convert::ToString(A[1]);
			Spr2->Text = Convert::ToString(A[1]*A[4]);

			Spr3->Text = Convert::ToString(max1);
			Spr4->Text = Convert::ToString(max2);
			Spr5->Text = Convert::ToString(max3);

			xi1->Text = Convert::ToString(x_1);
			xi2->Text = Convert::ToString(x_2);
			xi3->Text = Convert::ToString(x_3);
			/*Spr->Text = Convert::ToString(A[0]) + "\n"+ 
			Convert::ToString(A[1]) + "\n"+
			Convert::ToString(A[2]) + "\n" +
			Convert::ToString(A[3]) + "\n" +
			Convert::ToString(A[4]) + "\n" +
			Convert::ToString(A[5]) + "\n" +
			Convert::ToString(A[6]) + "\n" +
			Convert::ToString(A[7]) + "\n" +
			Convert::ToString(A[8]) + "\n" +
			Convert::ToString(A[9]) + "\n" +
			Convert::ToString(A[10]) + "\n" +
			Convert::ToString(A[11]) + "\n" +
			Convert::ToString(A[12]) + "\n";
			/**/
		}
		

		}
		//x0 = A[0], u(x0) = A[2], e = A[3], h0 = A[5], e гр = A[6], u'/l =A[7], Nmax = A[4], L = A[8] Convert::ToString(A[4]) + "\n" + Convert::ToString(A[8])
	}
	return System::Void();
}
