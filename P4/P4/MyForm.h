#pragma once

#include <iostream>
#include <ctime>
#include <vector>
#include <algorithm>
#include <map>
#include <math.h>
#include <map>

typedef std::map<int, int> Map;
int n;
double p1, p2;
int K=2; //количество интервалов
double alfa=0.5; //уровень значимости

double P(int a)
{
	return  pow(1 - p1, a) * pow(1 - p2, a) * p1 + pow(1 - p1, a) * pow(1 - p2, a - 1) * p2;
}
double F(double x, double y)
	{
		double f = 0;
		if (x == 0) {
			f = p1; x++;
		}
		for (int i = x; i < y; i++)
		{
			f += P(i);
		}
		return f;
	}

namespace P4 {


	using namespace std;

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	//vector <int> set(10000);
	//Map randV;
	/*vector <int> set;*/
	Map randV;
	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{



			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::DataGridView^ Tab;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::DataGridView^ Tab2;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column12;


	private: System::Windows::Forms::Label^ label14;









	private: System::Windows::Forms::Label^ maxT;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ Gr;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ eT;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::GroupBox^ groupBox1;


	private: System::Windows::Forms::Label^ label17;

	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::DataGridView^ Tab3;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column13;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column14;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column15;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column16;
	private: System::Windows::Forms::Label^ label8;

















	protected:

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->Tab = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Tab2 = (gcnew System::Windows::Forms::DataGridView());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->maxT = (gcnew System::Windows::Forms::Label());
			this->Gr = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->eT = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->Tab3 = (gcnew System::Windows::Forms::DataGridView());
			this->Column14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column16 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Tab))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Tab2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Gr))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Tab3))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(20, 14);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(105, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Задача B-10";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(18, 35);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(818, 60);
			this->label2->TabIndex = 1;
			this->label2->Text = resources->GetString(L"label2.Text");
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(483, 103);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(195, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Число экспериментов n ";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(157, 100);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(66, 26);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"0,5";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(18, 106);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(131, 20);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Вероятность р1";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(686, 99);
			this->textBox2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(88, 26);
			this->textBox2->TabIndex = 3;
			this->textBox2->Text = L"10000";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(824, 88);
			this->button1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(127, 38);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Рассчет";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(253, 107);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(131, 20);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Вероятность р2";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(394, 103);
			this->textBox5->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(66, 26);
			this->textBox5->TabIndex = 2;
			this->textBox5->Text = L"0,2";
			// 
			// Tab
			// 
			this->Tab->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Tab->BackgroundColor = System::Drawing::SystemColors::Control;
			this->Tab->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Tab->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1, this->Column2,
					this->Column3, this->Column4
			});
			this->Tab->GridColor = System::Drawing::SystemColors::Control;
			this->Tab->Location = System::Drawing::Point(580, 319);
			this->Tab->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Tab->Name = L"Tab";
			this->Tab->RowHeadersWidth = 62;
			this->Tab->Size = System::Drawing::Size(665, 257);
			this->Tab->TabIndex = 7;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Значение случайной величины";
			this->Column1->MinimumWidth = 8;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 150;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Число повторений";
			this->Column2->MinimumWidth = 8;
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 150;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Частота";
			this->Column3->MinimumWidth = 8;
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 150;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Теоретическое распределение";
			this->Column4->MinimumWidth = 8;
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			this->Column4->Width = 150;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(578, 290);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(416, 20);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Максимальное отклонение частоты от вероятности: ";
			// 
			// Tab2
			// 
			this->Tab2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Tab2->BackgroundColor = System::Drawing::SystemColors::Control;
			this->Tab2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Tab2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->Column5, this->Column6,
					this->Column7, this->Column8, this->Column9, this->Column10, this->Column11, this->Column12
			});
			this->Tab2->Location = System::Drawing::Point(580, 145);
			this->Tab2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Tab2->Name = L"Tab2";
			this->Tab2->RowHeadersWidth = 62;
			this->Tab2->Size = System::Drawing::Size(665, 98);
			this->Tab2->TabIndex = 12;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Eη";
			this->Column5->MinimumWidth = 8;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 150;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L" x̅";
			this->Column6->MinimumWidth = 8;
			this->Column6->Name = L"Column6";
			this->Column6->Width = 150;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"|Eη- x̅|";
			this->Column7->MinimumWidth = 8;
			this->Column7->Name = L"Column7";
			this->Column7->Width = 150;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Dη";
			this->Column8->MinimumWidth = 8;
			this->Column8->Name = L"Column8";
			this->Column8->Width = 150;
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"S^2";
			this->Column9->MinimumWidth = 8;
			this->Column9->Name = L"Column9";
			this->Column9->Width = 150;
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"|Dη-S2|";
			this->Column10->MinimumWidth = 8;
			this->Column10->Name = L"Column10";
			this->Column10->Width = 150;
			// 
			// Column11
			// 
			this->Column11->HeaderText = L"Me^";
			this->Column11->MinimumWidth = 8;
			this->Column11->Name = L"Column11";
			this->Column11->Width = 150;
			// 
			// Column12
			// 
			this->Column12->HeaderText = L"R^";
			this->Column12->MinimumWidth = 8;
			this->Column12->Name = L"Column12";
			this->Column12->Width = 150;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(578, 259);
			this->label14->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(157, 20);
			this->label14->TabIndex = 14;
			this->label14->Text = L"Мера расхождения:";
			// 
			// maxT
			// 
			this->maxT->AutoSize = true;
			this->maxT->Location = System::Drawing::Point(1001, 290);
			this->maxT->Name = L"maxT";
			this->maxT->Size = System::Drawing::Size(13, 20);
			this->maxT->TabIndex = 16;
			this->maxT->Text = L" ";
			// 
			// Gr
			// 
			chartArea1->Name = L"ChartArea1";
			this->Gr->ChartAreas->Add(chartArea1);
			this->Gr->Location = System::Drawing::Point(43, 165);
			this->Gr->Name = L"Gr";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series1->Name = L"Series1";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series2->Name = L"Series2";
			this->Gr->Series->Add(series1);
			this->Gr->Series->Add(series2);
			this->Gr->Size = System::Drawing::Size(508, 411);
			this->Gr->TabIndex = 17;
			this->Gr->Text = L"chart1";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(637, 447);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(13, 20);
			this->label7->TabIndex = 18;
			this->label7->Text = L" ";
			// 
			// eT
			// 
			this->eT->AutoSize = true;
			this->eT->Location = System::Drawing::Point(737, 259);
			this->eT->Name = L"eT";
			this->eT->Size = System::Drawing::Size(13, 20);
			this->eT->TabIndex = 19;
			this->eT->Text = L" ";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(458, 8);
			this->textBox7->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(74, 26);
			this->textBox7->TabIndex = 24;
			this->textBox7->Text = L"0,5";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(264, 8);
			this->label18->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(186, 20);
			this->label18->TabIndex = 23;
			this->label18->Text = L"Уровень значимости(α)";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(570, 6);
			this->button2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(98, 31);
			this->button2->TabIndex = 22;
			this->button2->Text = L"задать";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(189, 6);
			this->textBox3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(68, 26);
			this->textBox3->TabIndex = 21;
			this->textBox3->Text = L"2";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(30, 9);
			this->label15->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(152, 20);
			this->label15->TabIndex = 20;
			this->label15->Text = L"Число интервалов";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label17);
			this->groupBox1->Controls->Add(this->label16);
			this->groupBox1->Controls->Add(this->Tab3);
			this->groupBox1->Controls->Add(this->textBox7);
			this->groupBox1->Controls->Add(this->label18);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->label15);
			this->groupBox1->Location = System::Drawing::Point(12, 584);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1234, 322);
			this->groupBox1->TabIndex = 25;
			this->groupBox1->TabStop = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(711, 116);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(0, 20);
			this->label8->TabIndex = 29;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(709, 80);
			this->label17->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(50, 20);
			this->label17->TabIndex = 28;
			this->label17->Text = L"F(R0)";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(709, 48);
			this->label16->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(38, 20);
			this->label16->TabIndex = 26;
			this->label16->Text = L"R0: ";
			// 
			// Tab3
			// 
			this->Tab3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Tab3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column14, this->Column15,
					this->Column16
			});
			this->Tab3->Location = System::Drawing::Point(23, 47);
			this->Tab3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Tab3->Name = L"Tab3";
			this->Tab3->RowHeadersWidth = 62;
			this->Tab3->Size = System::Drawing::Size(668, 270);
			this->Tab3->TabIndex = 25;
			// 
			// Column14
			// 
			this->Column14->HeaderText = L"Значение";
			this->Column14->MinimumWidth = 8;
			this->Column14->Name = L"Column14";
			this->Column14->Width = 150;
			// 
			// Column15
			// 
			this->Column15->HeaderText = L"Количество попаданий";
			this->Column15->MinimumWidth = 8;
			this->Column15->Name = L"Column15";
			this->Column15->Width = 150;
			// 
			// Column16
			// 
			this->Column16->HeaderText = L"Теоритические вероятности(q)";
			this->Column16->MinimumWidth = 8;
			this->Column16->Name = L"Column16";
			this->Column16->Width = 150;
			// 
			// Column13
			// 
			this->Column13->MinimumWidth = 8;
			this->Column13->Name = L"Column13";
			this->Column13->Width = 150;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1286, 915);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->eT);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->Gr);
			this->Controls->Add(this->maxT);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->Tab);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->Tab2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"MyForm";
			this->Text = L"ТВ";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Tab))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Tab2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Gr))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Tab3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: int random2()
	{
		double a, b, u = 1, p;
		a = 0;
		b = p1;
		while (u == 1)
			u = floor(double(rand()) / RAND_MAX * 1000) / 1000;
		int i = 0;
		while (true) {

			if (u < b) { break; }
			i++;
			a = pow(1 - p1, i) * pow(1 - p2, i) * p1 + pow(1 - p1, i) * pow(1 - p2, i - 1) * p2;
			b = b + a;
		}
		return i;
	}
	private:  int random()
	{
		double u1, u2, p;
		int i = 0;
		while (true) {
			u1 = floor(double(rand()) / RAND_MAX * 1000) / 1000;
			if (u1 < p1) { return i; }
			u2 = floor(double(rand()) / RAND_MAX * 1000) / 1000; i++;
			if (u2 < p2) { return i; }
		}
	}

	private: double G(double a)
	{
		if (a == 0.5) return sqrt(3.1416);
		if (a == 1)
			return 1;
		else
			return (a - 1) * G(a - 1);
	
	}
	private: double g(double x)
	{
		if (x <= 0)return 0;
		double e = 2.7182818285;
		double r = (K - 1) ;
		double w = pow(2, -r / 2.0) / G(r / 2.0) * pow(x, r / 2.0)/x * pow(e, -x/2.0);
		return w;
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		srand((unsigned int)time(0));


		int U= 0, J = 0, E=0;
		while (U< 100)
		{


			//Инициализация
			Map randV;
			n = Convert::ToInt16(textBox2->Text);
			p1 = Convert::ToDouble(textBox1->Text);
			p2 = Convert::ToDouble(textBox5->Text);

			Tab->RowCount = 1;
			Tab2->RowCount = 1;
			Tab3->RowCount = K;

			Tab->AutoResizeRows(DataGridViewAutoSizeRowsMode::AllCellsExceptHeaders);
			Tab->AutoResizeColumns();
			Tab2->AutoResizeRows(DataGridViewAutoSizeRowsMode::AllCellsExceptHeaders);
			Tab2->AutoResizeColumns();
			Tab3->AutoResizeRows(DataGridViewAutoSizeRowsMode::AllCellsExceptHeaders);
			Tab3->AutoResizeColumns();

			// Статистические характеристики	
			double M1 = 0;							//мат. ожидание
			double X_M2 = 0;						//выборочное среднее
			double D1 = 0;							//дисперсия
			double S_D2 = 0;						//выборочная дисперсия
			double Me = 0;							//выборочная медиана
			double R = 0;							//размах выборки
			double max = 0;							//максимальное отклонение частоты от вероятности 

			vector <int> set(n);

			//Генерация случайных величин
			for (int i = 0; i <= n - 1; i++) {
				int rv = random();
				randV[rv] += 1;
				set[i] = rv;
			}
			sort(set.begin(), set.end());

			//Заполнение таблицы 1
			double e1 = 0;
			int i = 0; Map::iterator itr = randV.begin();
			while (itr != randV.end()) {
				Tab->Rows->Add();
				Tab->Rows[i]->Cells[0]->Value = (*itr).first;
				Tab->Rows[i]->Cells[1]->Value = (*itr).second;
				double w = (double)(*itr).second / n;
				X_M2 += (*itr).first * (*itr).second;
				Tab->Rows[i]->Cells[2]->Value = w;
				double t;
				t = pow(1 - p1, (*itr).first) * pow(1 - p2, (*itr).first) * p1 + pow(1 - p1, (*itr).first) * pow(1 - p2, (*itr).first - 1) * p2;
				if (i == 0) { t = p1; }
				M1 += t * (*itr).first;
				Tab->Rows[i]->Cells[3]->Value = t;
				e1 += abs(t - w);

				if (abs(t - w) > max) { max = abs(t - w); }
				itr++;
				i++;
			}
			maxT->Text = max.ToString();

			double q1 = 1 - p1;
			double q2 = 1 - p2;

			X_M2 = X_M2 / n;
			M1 = q1 * (p1 * q2 + p2) / ((q1 * q2 - 1) * (q1 * q2 - 1));
			double m2 = -(p1 * q1 * q2 * (1 + q1 * q2) + p2 * q1 * (1 + q1 * q2)) / ((q1 * q2 - 1) * (q1 * q2 - 1) * (q1 * q2 - 1));
			D1 = m2 - M1 * M1;

			//Заполнение таблицы 2
			Tab2->Rows[0]->Cells[0]->Value = M1;
			Tab2->Rows[0]->Cells[1]->Value = X_M2;
			Tab2->Rows[0]->Cells[2]->Value = abs(M1 - X_M2);

			itr = randV.begin();
			while (itr != randV.end()) {
				double pt;
				pt = p1 * (pow((1 - p1), (*itr).first - 1));
				S_D2 += pow((*itr).first - X_M2, 2) * (*itr).second;
				itr++;
			}
			S_D2 = S_D2 / n;
			Tab2->Rows[0]->Cells[3]->Value = D1;
			Tab2->Rows[0]->Cells[4]->Value = S_D2;
			Tab2->Rows[0]->Cells[5]->Value = abs(D1 - S_D2);

			if (n % 2)
				Me = set[n / 2];
			else
			{
				Me = (double)(set[n / 2 - 1] + set[n / 2]) / 2.0;
			}
			Tab2->Rows[0]->Cells[6]->Value = Me;
			R = set[n - 1] - set[0];
			Tab2->Rows[0]->Cells[7]->Value = R;

			itr = randV.begin(); int j;
			i = (*itr).first;
			itr = randV.end(); itr--;
			j = (*itr).first;
			double k = (j - i) * 0.01;

			//Отрисовка график
			Gr->Series[0]->Points->Clear();
			Gr->Series[1]->Points->Clear();
			double sum1 = 0, x = 0;
			itr = randV.begin();
			sum1 += (double)(*itr).second / n;
			itr++;
			while (itr != randV.end()) {
				double y = (*itr).first;
				double i = (y - x) / 10.0;
				for (x; x < y; x = x + k)
				{
					Gr->Series[0]->Points->AddXY(x, sum1);
				}
				x = y;
				sum1 += (double)(*itr).second / n;

				itr++;
			}

			itr = randV.begin();
			i = (*itr).first;
			itr = randV.end(); itr--;
			j = (*itr).first;
			double sum2 = p1;
			while (sum2 < 0.95)
			{
				for (double b = i; b < i + 1; b = b + k)
				{
					Gr->Series[1]->Points->AddXY(b, sum2);
				}
				sum2 += P(i + 1);
				i++;

			}
			eT->Text = e1.ToString();

			//Заполнение таблицы 3
			double R0 = 0;				//мера расхождения 
			vector <double> qj(n);		//теоритическая вероятность попадания в интервал 
			vector <double> z(n);		//интервалы
			vector <int> nj(n);			//число наблюдений, в j интервале
			for (int i = 0; i < n; i++) {
				nj[i] = 0;
			}
			for (int i = 0; i < K; i++)
			{

				Tab3->Rows[i]->HeaderCell->Value = "z" + (i + 1).ToString();

			}

			//Разбиение на интервалы
			int i1 = 1; double k2 = 1.0 / K; int j1 = 1; z[0] = 0;
			double s1 = p1;
			while (i1 < R)
			{

				if (s1 >= k2) {

					z[j1] = i1;
					Tab3->Rows[j1 - 1]->Cells[0]->Value = z[j1]; j1++;
					k2 = k2 + 1.0 / K;
				}
				s1 += P(i1);
				i1++;
				

			}					
			z[K] = R + 1; Tab3->Rows[K - 1]->Cells[0]->Value = z[K];
			
			//Подсчет nj
			for (int i = 0; i < n; i++)
			{
				int j = 1;
				while (j < K + 1)
				{
					if (set[i] < z[j]) {
						//if ((set[i] < z[j])||(j==k)&&((set[i] < z[j]{
						nj[j]++;
						break;
					}
					else {
						j++;
					}
				}
			}
			for (int i = 1; i < K + 1; i++)
			{
				Tab3->Rows[i - 1]->Cells[1]->Value = (nj[i]);
			}

			//Подсчет qj
			double SS = 0;
			for (int i = 1; i < K; i++)
			{
				qj[i] = F(z[i - 1], z[i]);
				SS += qj[i];
				Tab3->Rows[i - 1]->Cells[2]->Value = (qj[i]);
			}
			Tab3->Rows[K-1]->Cells[2]->Value = 1-SS;
			qj[K] = 1 - SS;

			//Рассчет R0 (статистика критерия)
			for (int i = 1; i < K+1; i++)
			{
				R0 += pow(nj[i] - n * qj[i], 2) / (n * qj[i]);
			}
			label16->Text = "R0: " + R0.ToString();

			//Рассчет F(R0)=1-sum
			double a = 0; double b = R0; double summ = 0; double N = 10000;
			for (double i = 1; i < N+1; i++)
			{
				//используем метод трапеций				
				summ += (g(a + (b - a) * (i - 1) / N) + g(a + (b - a) * (i) / N));
			}
			summ = summ * (b - a) / (2.0 * N);
			label17->Text = "F(R0): " + (1 - summ).ToString();

			//Проверка гипотезы
			//if(R0>2.366)
			if ((1 - summ) < alfa)
				J++;// label8->Text = "отклоняем";
			else
				E++;//label8->Text = "принимаем";

			U++;
		}
		label8->Text = "отклонили " + (J).ToString() + " раз"; J = 0; U = 0;
	}
		

	

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	
	K = Convert::ToInt16(textBox3->Text);
	alfa = Convert::ToDouble(textBox7->Text);
	
}

};
}
