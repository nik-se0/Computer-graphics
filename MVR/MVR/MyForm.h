#define _USE_MATH_DEFINES
#pragma once
#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
#include <cmath>
#include <functional>


std::function<double(double, double)> F;
double mT(double x, double y) // GU
{
	return pow(M_E, sin(M_PI * x * y)* sin(M_PI * x * y));
}
double fT(double x, double y) // test
{
	return 2*M_PI* M_PI* pow(M_E, sin(M_PI * x * y) * sin(M_PI * x * y))*(x*x+y*y)*(sin(2*x)*sin(2*x)/2+cos(2*x));
}
double fO(double x, double y) // main
{
	return sin(M_PI * x * y) * sin(M_PI * x * y);
}
double mu1(double y)
{
	return sin(M_PI * y);
}
double mu2(double y)
{
	return sin(M_PI * y);
}
double mu3(double x)
{
	return x - x * x;
}
double mu4(double x)
{
	return x - x * x;
}

namespace MVR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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


	protected:























	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label10;








	private: System::Windows::Forms::Label^ label13;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::DataGridView^ Tab1;






































private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
private: System::Windows::Forms::GroupBox^ groupBox7;
private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::RadioButton^ radioButton4;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::RadioButton^ radioButton5;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::TabControl^ tabControl1;
private: System::Windows::Forms::TabPage^ tabPage1;
private: System::Windows::Forms::TabPage^ tabPage2;
private: System::Windows::Forms::DataGridView^ Tab2;

private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
private: System::Windows::Forms::TabPage^ tabPage3;
private: System::Windows::Forms::DataGridView^ Tab3;

private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;


		   /// <summary>
		   /// Обязательная переменная конструктора.
		   /// </summary>
		   System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Требуемый метод для поддержки конструктора — не изменяйте 
		   /// содержимое этого метода с помощью редактора кода.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			   this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			   this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			   this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			   this->label10 = (gcnew System::Windows::Forms::Label());
			   this->label9 = (gcnew System::Windows::Forms::Label());
			   this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			   this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			   this->label8 = (gcnew System::Windows::Forms::Label());
			   this->label7 = (gcnew System::Windows::Forms::Label());
			   this->Tab1 = (gcnew System::Windows::Forms::DataGridView());
			   this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			   this->label17 = (gcnew System::Windows::Forms::Label());
			   this->label16 = (gcnew System::Windows::Forms::Label());
			   this->label15 = (gcnew System::Windows::Forms::Label());
			   this->label13 = (gcnew System::Windows::Forms::Label());
			   this->label11 = (gcnew System::Windows::Forms::Label());
			   this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			   this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			   this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			   this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			   this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			   this->Tab2 = (gcnew System::Windows::Forms::DataGridView());
			   this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			   this->Tab3 = (gcnew System::Windows::Forms::DataGridView());
			   this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->groupBox5->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Tab1))->BeginInit();
			   this->groupBox4->SuspendLayout();
			   this->groupBox7->SuspendLayout();
			   this->tabControl1->SuspendLayout();
			   this->tabPage1->SuspendLayout();
			   this->tabPage2->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Tab2))->BeginInit();
			   this->tabPage3->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Tab3))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // groupBox5
			   // 
			   this->groupBox5->Controls->Add(this->textBox8);
			   this->groupBox5->Controls->Add(this->textBox7);
			   this->groupBox5->Controls->Add(this->label10);
			   this->groupBox5->Controls->Add(this->label9);
			   this->groupBox5->Controls->Add(this->textBox6);
			   this->groupBox5->Controls->Add(this->textBox5);
			   this->groupBox5->Controls->Add(this->label8);
			   this->groupBox5->Controls->Add(this->label7);
			   this->groupBox5->Location = System::Drawing::Point(17, 292);
			   this->groupBox5->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->groupBox5->Name = L"groupBox5";
			   this->groupBox5->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->groupBox5->Size = System::Drawing::Size(380, 176);
			   this->groupBox5->TabIndex = 2;
			   this->groupBox5->TabStop = false;
			   this->groupBox5->Text = L"Параметры";
			   // 
			   // textBox8
			   // 
			   this->textBox8->Location = System::Drawing::Point(88, 122);
			   this->textBox8->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->textBox8->Name = L"textBox8";
			   this->textBox8->Size = System::Drawing::Size(94, 26);
			   this->textBox8->TabIndex = 11;
			   this->textBox8->Text = L"0,0000005";
			   // 
			   // textBox7
			   // 
			   this->textBox7->Location = System::Drawing::Point(88, 89);
			   this->textBox7->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->textBox7->Name = L"textBox7";
			   this->textBox7->Size = System::Drawing::Size(94, 26);
			   this->textBox7->TabIndex = 10;
			   this->textBox7->Text = L"5500";
			   // 
			   // label10
			   // 
			   this->label10->AutoSize = true;
			   this->label10->Location = System::Drawing::Point(9, 124);
			   this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->label10->Name = L"label10";
			   this->label10->Size = System::Drawing::Size(54, 20);
			   this->label10->TabIndex = 9;
			   this->label10->Text = L"Eps = ";
			   // 
			   // label9
			   // 
			   this->label9->AutoSize = true;
			   this->label9->Location = System::Drawing::Point(9, 93);
			   this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->label9->Name = L"label9";
			   this->label9->Size = System::Drawing::Size(75, 20);
			   this->label9->TabIndex = 8;
			   this->label9->Text = L"N_max = ";
			   // 
			   // textBox6
			   // 
			   this->textBox6->Location = System::Drawing::Point(50, 57);
			   this->textBox6->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->textBox6->Name = L"textBox6";
			   this->textBox6->Size = System::Drawing::Size(132, 26);
			   this->textBox6->TabIndex = 7;
			   this->textBox6->Text = L"10";
			   // 
			   // textBox5
			   // 
			   this->textBox5->Location = System::Drawing::Point(49, 25);
			   this->textBox5->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->textBox5->Name = L"textBox5";
			   this->textBox5->Size = System::Drawing::Size(136, 26);
			   this->textBox5->TabIndex = 6;
			   this->textBox5->Text = L"10";
			   // 
			   // label8
			   // 
			   this->label8->AutoSize = true;
			   this->label8->Location = System::Drawing::Point(7, 59);
			   this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->label8->Name = L"label8";
			   this->label8->Size = System::Drawing::Size(39, 20);
			   this->label8->TabIndex = 5;
			   this->label8->Text = L"m = ";
			   // 
			   // label7
			   // 
			   this->label7->AutoSize = true;
			   this->label7->Location = System::Drawing::Point(8, 26);
			   this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->label7->Name = L"label7";
			   this->label7->Size = System::Drawing::Size(35, 20);
			   this->label7->TabIndex = 4;
			   this->label7->Text = L"n = ";
			   // 
			   // Tab1
			   // 
			   this->Tab1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->Tab1->BackgroundColor = System::Drawing::SystemColors::GradientActiveCaption;
			   this->Tab1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			   this->Tab1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) { this->Column4, this->Column3 });
			   this->Tab1->Location = System::Drawing::Point(7, 8);
			   this->Tab1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->Tab1->Name = L"Tab1";
			   this->Tab1->RowHeadersWidth = 62;
			   this->Tab1->Size = System::Drawing::Size(824, 280);
			   this->Tab1->TabIndex = 14;
			   // 
			   // Column4
			   // 
			   this->Column4->HeaderText = L"";
			   this->Column4->MinimumWidth = 8;
			   this->Column4->Name = L"Column4";
			   this->Column4->ReadOnly = true;
			   this->Column4->Width = 150;
			   // 
			   // Column3
			   // 
			   this->Column3->HeaderText = L"i";
			   this->Column3->MinimumWidth = 8;
			   this->Column3->Name = L"Column3";
			   this->Column3->ReadOnly = true;
			   this->Column3->Width = 150;
			   // 
			   // groupBox4
			   // 
			   this->groupBox4->Controls->Add(this->label17);
			   this->groupBox4->Controls->Add(this->label16);
			   this->groupBox4->Controls->Add(this->label15);
			   this->groupBox4->Controls->Add(this->label13);
			   this->groupBox4->Controls->Add(this->label11);
			   this->groupBox4->Location = System::Drawing::Point(415, 10);
			   this->groupBox4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->groupBox4->Name = L"groupBox4";
			   this->groupBox4->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->groupBox4->Size = System::Drawing::Size(846, 274);
			   this->groupBox4->TabIndex = 1;
			   this->groupBox4->TabStop = false;
			   this->groupBox4->Text = L"Справка";
			   // 
			   // label17
			   // 
			   this->label17->AutoSize = true;
			   this->label17->Location = System::Drawing::Point(603, 32);
			   this->label17->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->label17->Name = L"label17";
			   this->label17->Size = System::Drawing::Size(14, 20);
			   this->label17->TabIndex = 6;
			   this->label17->Text = L"-";
			   // 
			   // label16
			   // 
			   this->label16->AutoSize = true;
			   this->label16->Location = System::Drawing::Point(15, 232);
			   this->label16->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->label16->Name = L"label16";
			   this->label16->Size = System::Drawing::Size(0, 20);
			   this->label16->TabIndex = 5;
			   // 
			   // label15
			   // 
			   this->label15->AutoSize = true;
			   this->label15->Location = System::Drawing::Point(15, 197);
			   this->label15->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->label15->Name = L"label15";
			   this->label15->Size = System::Drawing::Size(0, 20);
			   this->label15->TabIndex = 4;
			   // 
			   // label13
			   // 
			   this->label13->AutoSize = true;
			   this->label13->Location = System::Drawing::Point(15, 114);
			   this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->label13->Name = L"label13";
			   this->label13->Size = System::Drawing::Size(0, 20);
			   this->label13->TabIndex = 2;
			   // 
			   // label11
			   // 
			   this->label11->AutoSize = true;
			   this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			   this->label11->Location = System::Drawing::Point(15, 31);
			   this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->label11->Name = L"label11";
			   this->label11->Size = System::Drawing::Size(584, 180);
			   this->label11->TabIndex = 0;
			   this->label11->Text = resources->GetString(L"label11.Text");
			   // 
			   // groupBox7
			   // 
			   this->groupBox7->Controls->Add(this->label1);
			   this->groupBox7->Location = System::Drawing::Point(17, 79);
			   this->groupBox7->Name = L"groupBox7";
			   this->groupBox7->Size = System::Drawing::Size(380, 151);
			   this->groupBox7->TabIndex = 14;
			   this->groupBox7->TabStop = false;
			   this->groupBox7->Text = L"Описание задачи";
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Location = System::Drawing::Point(15, 34);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(255, 80);
			   this->label1->TabIndex = 1;
			   this->label1->Text = L"u* = e^(sin(pi*xy)^2)\r\nx-[0,1], y-[0,1]\r\nu(0, y) = 1,    u(1, y) = e^(sin(pi*y)^2"
				   L")\r\nu(x, 0) = 1,    u(x,1) = e^(sin(pi*x)^2)";
			   // 
			   // button1
			   // 
			   this->button1->Location = System::Drawing::Point(284, 243);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(113, 41);
			   this->button1->TabIndex = 0;
			   this->button1->Text = L"Рассчет";
			   this->button1->UseVisualStyleBackColor = true;
			   this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			   // 
			   // radioButton4
			   // 
			   this->radioButton4->AutoSize = true;
			   this->radioButton4->Checked = true;
			   this->radioButton4->Location = System::Drawing::Point(31, 12);
			   this->radioButton4->Name = L"radioButton4";
			   this->radioButton4->Size = System::Drawing::Size(164, 24);
			   this->radioButton4->TabIndex = 1;
			   this->radioButton4->TabStop = true;
			   this->radioButton4->Text = L"Тестовая задача";
			   this->radioButton4->UseVisualStyleBackColor = true;
			   this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton4_CheckedChanged);
			   // 
			   // radioButton5
			   // 
			   this->radioButton5->AutoSize = true;
			   this->radioButton5->Location = System::Drawing::Point(31, 42);
			   this->radioButton5->Name = L"radioButton5";
			   this->radioButton5->Size = System::Drawing::Size(167, 24);
			   this->radioButton5->TabIndex = 15;
			   this->radioButton5->Text = L"Основная задача";
			   this->radioButton5->UseVisualStyleBackColor = true;
			   this->radioButton5->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton5_CheckedChanged);
			   // 
			   // tabControl1
			   // 
			   this->tabControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->tabControl1->Controls->Add(this->tabPage1);
			   this->tabControl1->Controls->Add(this->tabPage2);
			   this->tabControl1->Controls->Add(this->tabPage3);
			   this->tabControl1->Location = System::Drawing::Point(415, 292);
			   this->tabControl1->Name = L"tabControl1";
			   this->tabControl1->SelectedIndex = 0;
			   this->tabControl1->Size = System::Drawing::Size(846, 329);
			   this->tabControl1->TabIndex = 16;
			   // 
			   // tabPage1
			   // 
			   this->tabPage1->Controls->Add(this->Tab1);
			   this->tabPage1->Location = System::Drawing::Point(4, 29);
			   this->tabPage1->Name = L"tabPage1";
			   this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			   this->tabPage1->Size = System::Drawing::Size(838, 296);
			   this->tabPage1->TabIndex = 0;
			   this->tabPage1->Text = L"V ( x , y )";
			   this->tabPage1->UseVisualStyleBackColor = true;
			   // 
			   // tabPage2
			   // 
			   this->tabPage2->Controls->Add(this->Tab2);
			   this->tabPage2->Location = System::Drawing::Point(4, 29);
			   this->tabPage2->Name = L"tabPage2";
			   this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			   this->tabPage2->Size = System::Drawing::Size(838, 296);
			   this->tabPage2->TabIndex = 1;
			   this->tabPage2->Text = L"U ( x , y )";
			   this->tabPage2->UseVisualStyleBackColor = true;
			   // 
			   // Tab2
			   // 
			   this->Tab2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->Tab2->BackgroundColor = System::Drawing::SystemColors::GradientActiveCaption;
			   this->Tab2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			   this->Tab2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				   this->dataGridViewTextBoxColumn1,
					   this->dataGridViewTextBoxColumn2
			   });
			   this->Tab2->Location = System::Drawing::Point(7, 8);
			   this->Tab2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->Tab2->Name = L"Tab2";
			   this->Tab2->RowHeadersWidth = 62;
			   this->Tab2->Size = System::Drawing::Size(824, 317);
			   this->Tab2->TabIndex = 15;
			   // 
			   // dataGridViewTextBoxColumn1
			   // 
			   this->dataGridViewTextBoxColumn1->HeaderText = L"";
			   this->dataGridViewTextBoxColumn1->MinimumWidth = 8;
			   this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			   this->dataGridViewTextBoxColumn1->ReadOnly = true;
			   this->dataGridViewTextBoxColumn1->Width = 150;
			   // 
			   // dataGridViewTextBoxColumn2
			   // 
			   this->dataGridViewTextBoxColumn2->HeaderText = L"i";
			   this->dataGridViewTextBoxColumn2->MinimumWidth = 8;
			   this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			   this->dataGridViewTextBoxColumn2->ReadOnly = true;
			   this->dataGridViewTextBoxColumn2->Width = 150;
			   // 
			   // tabPage3
			   // 
			   this->tabPage3->Controls->Add(this->Tab3);
			   this->tabPage3->Location = System::Drawing::Point(4, 29);
			   this->tabPage3->Name = L"tabPage3";
			   this->tabPage3->Size = System::Drawing::Size(838, 296);
			   this->tabPage3->TabIndex = 2;
			   this->tabPage3->Text = L"| U ( x , y) - V ( x , y ) |";
			   this->tabPage3->UseVisualStyleBackColor = true;
			   // 
			   // Tab3
			   // 
			   this->Tab3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->Tab3->BackgroundColor = System::Drawing::SystemColors::GradientActiveCaption;
			   this->Tab3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			   this->Tab3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				   this->dataGridViewTextBoxColumn3,
					   this->dataGridViewTextBoxColumn4
			   });
			   this->Tab3->Location = System::Drawing::Point(7, 8);
			   this->Tab3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->Tab3->Name = L"Tab3";
			   this->Tab3->RowHeadersWidth = 62;
			   this->Tab3->Size = System::Drawing::Size(824, 317);
			   this->Tab3->TabIndex = 15;
			   // 
			   // dataGridViewTextBoxColumn3
			   // 
			   this->dataGridViewTextBoxColumn3->HeaderText = L"";
			   this->dataGridViewTextBoxColumn3->MinimumWidth = 8;
			   this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			   this->dataGridViewTextBoxColumn3->ReadOnly = true;
			   this->dataGridViewTextBoxColumn3->Width = 150;
			   // 
			   // dataGridViewTextBoxColumn4
			   // 
			   this->dataGridViewTextBoxColumn4->HeaderText = L"i";
			   this->dataGridViewTextBoxColumn4->MinimumWidth = 8;
			   this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			   this->dataGridViewTextBoxColumn4->ReadOnly = true;
			   this->dataGridViewTextBoxColumn4->Width = 150;
			   // 
			   // MyForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(1281, 645);
			   this->Controls->Add(this->tabControl1);
			   this->Controls->Add(this->button1);
			   this->Controls->Add(this->radioButton5);
			   this->Controls->Add(this->radioButton4);
			   this->Controls->Add(this->groupBox7);
			   this->Controls->Add(this->groupBox5);
			   this->Controls->Add(this->groupBox4);
			   this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->Name = L"MyForm";
			   this->Text = L"МВР, вариант 1, команда 2";
			   this->groupBox5->ResumeLayout(false);
			   this->groupBox5->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Tab1))->EndInit();
			   this->groupBox4->ResumeLayout(false);
			   this->groupBox4->PerformLayout();
			   this->groupBox7->ResumeLayout(false);
			   this->groupBox7->PerformLayout();
			   this->tabControl1->ResumeLayout(false);
			   this->tabPage1->ResumeLayout(false);
			   this->tabPage2->ResumeLayout(false);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Tab2))->EndInit();
			   this->tabPage3->ResumeLayout(false);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Tab3))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion
		   // =========  Functions =========


private: System::Void radioButton4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	label1->Text = "u* = e^(sin(pi*xy)^2)\n x-[0,1], y-[0,1]\nu(0, y) = 1\nu(1, y) = e^(sin(pi*y)^2)\nu(x, 0) = 1\nu(x,1) = e^(sin(pi*x)^2)";
	label11->Text = "Количество итераций = \nПогрешность решения = \nМаксимальная разность точного и численного решений | U - V |= \nНачальное приближения посчитано как \nНевязка СЛАУ на начальном приближении(евклидова норма) R(0) = \nСхема на сетке решена с невязкой(евклидова норма) R(p) = \nx = \ny = "; 
	tabPage2->Text = L"U ( x , y )";
	tabPage3->Text = L"| U ( x , y )-V ( x , y ) |";
}
private: System::Void radioButton5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	label1->Text = "u'xx + u'yy = sin(pi*xy)^2 при x-[0,1], y-[0, 1]\nu(0, y) = sin(pi*y)\nu(1, y) = sin(pi*y))\nu(x, 0) = x - x^2\nu(x,1) = x-x^2";
	label11->Text = "Количество итераций = \nДостнигнутая точность = \nНевязка СЛАУ на начальном приближении(евклидова норма) R(0) = \nСхема на сетке решена с невязкой(евклидова норма) R(p) = \nКоличество итераций при половинном шаге = \nДостнигнутая точность = \nНевязка СЛАУ на начальном приближении(евклидова норма) R(0) = \nСхема на сетке с половинным шагом решена с невязкой(евклидова норма) R(p2) = \nМаксимальная разность двух решений | V2 - V | (точность решения) = \nв узле : \nx = \ny =";
	tabPage2->Text = L"V2 ( x , y )";
	tabPage3->Text = L"| V2 ( x , y )-V ( x , y ) |";
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {

	//Определяем тип задачи
	bool FLAG = 1; F = fT; //Тестовая задача
	if (radioButton5->Checked) 
	{ FLAG = 0; F=fO; } //Основаная задача

	int n = Convert::ToInt32(textBox5->Text);
	int m = Convert::ToInt32(textBox6->Text);
	int N_max = Convert::ToInt32(textBox7->Text);
	double Eps = Convert::ToDouble(textBox8->Text);
	double aa = 0.0, bb = 1.0, cc = 0.0, dd = 1.0;
	double h = (bb-aa) / n, k = (dd-cc) / m; //Шаги по x и y
	double h2 = 1.0 / (h * h), k2 = 1.0 / (k * k);
	double A = -2 * (h2 + k2);
	double** v, ** f, ** u, ** hv, ** R, **v2;
	double* x, * y;
	int p = 0, p2=0; //Текущее число итераций
	char buffer[100];
	double MaxPogr = 0.0, Pogr, MaxF = 0.0, xMax = 0.0, yMax = 0.0, maxR1 = 0.0, MaxF2 = 0.0, maxR;

	x = new double[n + 1];
	y = new double[m + 1];
	v = new double* [n + 1];
	v2 = new double* [n + 1];
	hv = new double* [n + 1];
	R = new double* [n + 1];
	f = new double* [n + 1];
	u = new double* [n + 1];

	//Создание и заполнение массивов
	for (int i = 0; i <= n; i++)
	{
		v[i] = new double[m + 1];
		f[i] = new double[m + 1];
		u[i] = new double[m + 1];
		hv[i] = new double[m + 1];
		R[i] = new double[m + 1];
		//Заполнение массива x
		x[i] = aa + i * h;
		//Заполнение граничных условий в массив v
		if (FLAG) { 
			v[i][0] = mT(x[i], 0); 
			v[i][m] = mT(x[i], 1);
		}
		else {
			v[i][0] = mu3(x[i]);
			v[i][m] = mu4(x[i]);
		}
		R[i][0] = 0.0;
		R[i][m] = 0.0;
	}
	for (int j = 0; j <= m; j++)  
	{	//Заполнение массива y
		y[j] =  cc + j * k;
		//Заполнение граничных условий в массив v
		if (FLAG) {
			v[0][j] = mT(0, y[j]);
			v[n][j] = mT(1, y[j]);
		}
		else {
			v[0][j] = mu1(y[j]);
			v[n][j] = mu2(y[j]);
		}
		R[0][j] = 0.0;
		R[n][j] = 0.0;
	}
	for (int j = 0; j <= m; j++)            
	{	//Заполнение массивов f и u
		for (int i = 0; i <= n; i++)
		{
			f[i][j] = F(x[i], y[j]);
			MaxF += f[i][j] * f[i][j];
			if (FLAG)
			{
				u[i][j] = mT(x[i], y[j]);
				hv[i][j] = -f[i][j];
			}
		}
	}
	MaxF = std::sqrt(MaxF);

	//Нулевое начальное приближение
	for (int j = 1; j < m; j++)    
	{
		for (int i = 1; i < n; i++)
		{
			v[i][j] = 0.0;
		}
	}

	//Метод верхней релаксации
	double tmp, prev, currentEps;
	double Eps_max, Eps_max2;
	double w = 1.99;
	while (true)
	{
		Eps_max = 0.0;
		for (int j = 1; j < m; j++)
		{
			for (int i = 1; i < n; i++)
			{
				prev = v[j][i];
				tmp = A * prev + h2 * (v[j][i - 1] + v[j][i + 1]) + k2 * (v[j - 1][i] + v[j + 1][i]);
				v[j][i] = prev - w * (tmp + F(x[i], y[i])) / A;

				currentEps = std::fabs(v[j][i] - prev);
				if (currentEps > Eps_max)
					Eps_max = currentEps;
			}
		}

		p++;
		if ((Eps_max < Eps) || (p > N_max))
			break;
	}
	//Вычисление невяки
	tmp = 0.0;
	for (int j = 1; j < m; j++)
	{
		for (int i = 1; i < n; i++)
		{
			tmp = A * v[j][i] + h2 * (v[j][i - 1] + v[j][i + 1]) + k2 * (v[j - 1][i] + v[j + 1][i]) + F(x[i], y[i]);
			maxR1 += tmp * tmp;
		}
	}
	maxR1 = std::sqrt(maxR1);

	if (!FLAG) {	//Решение с половинным шагом
		n = 2 * n;
		m = 2 * m;
		v2 = new double* [n + 1];
		x = new double[n + 1];
		y = new double[m + 1];
		f = new double* [n + 1];
		R = new double* [n + 1];

		h = (bb-aa) / n;
		k = (dd-cc) / m;
		h2 = 1.0 / (h * h);
		k2 = 1.0 / (k * k);
		A = -2 * (h2 + k2);
		p2 = 0;
		maxR = 0.0;

		for (int i = 0; i <= n; i++)
		{
			v2[i] = new double[m + 1];
			f[i] = new double[m + 1];
			R[i] = new double[m + 1];
			x[i] = aa + i * h;
			v2[i][0] = mu3(x[i]);
			v2[i][m] = mu4(x[i]);
			R[i][0] = 0.0;
			R[i][m] = 0.0;
		}
		for (int j = 0; j <= m; j++)  
		{
			y[j] = cc + j * k;
			v2[0][j] = mu1(y[j]);
			v2[n][j] = mu2(y[j]);
			R[0][j] = 0.0;
			R[n][j] = 0.0;
		}
		MaxF2 = 0;
		for (int j = 0; j <= m; j++)            
		{
			for (int i = 0; i <= n; i++)
			{
				f[i][j] = F(x[i], y[j]);
				MaxF2 += f[i][j] * f[i][j];
			}
		}
		MaxF2 = sqrt(MaxF2);
		for (int j = 1; j < m; j++)    //Нулевое начальное приближение
		{
			for (int i = 1; i < n; i++)
			{
				v2[i][j] = 0.0;
			}
		}

		tmp = 0.0;
		prev = 0.0;
		currentEps = 0.0;
		w = 1.99;
		while (true)
		{
			Eps_max2 = 0.0;
			for (int j = 1; j < m; j++)
			{
				for (int i = 1; i < n; i++)
				{
					prev = v2[j][i];
					tmp = A * prev + h2 * (v2[j][i - 1] + v2[j][i + 1]) + k2 * (v2[j - 1][i] + v2[j + 1][i]);
					v2[j][i] = prev - w * (tmp + F(x[i], y[i])) / A;
					currentEps = std::fabs(v2[j][i] - prev);
					if (currentEps > Eps_max2)
						Eps_max2 = currentEps;
				}
			}

			p2++;
			if ((Eps_max2 < Eps) || (p2 > N_max))
				break;
		}

		tmp = 0.0;
		for (int j = 1; j < m; j++)
		{
			for (int i = 1; i < n; i++)
			{
				tmp = A * v2[j][i] + h2 * (v2[j][i - 1] + v2[j][i + 1]) + k2 * (v2[j - 1][i] + v2[j + 1][i]);
				double g = F(aa+i*h, cc+i*k);
				tmp += g;
				maxR += tmp * tmp;
			}
		}

		maxR = sqrt(maxR);

		n = n / 2;
		m = m / 2;
	}


	//Заполнение таблицы
	Tab1->RowCount = n + 1; Tab1->ColumnCount = m + 1;
	Tab2->RowCount = n + 1; Tab2->ColumnCount = m + 1;
	Tab3->RowCount = n + 1; Tab3->ColumnCount = m + 1;

	Tab1->TopLeftHeaderCell->Value = "Y/X";
	Tab2->TopLeftHeaderCell->Value = "Y/X";
	Tab3->TopLeftHeaderCell->Value = "Y/X";

	int q = 1; if (!FLAG) { q = 2; }
	for (int i = 0; i <=n; i++)                        
	{
		Tab1->Columns[i]->HeaderCell->Value = (x[i*q]).ToString();
		Tab2->Columns[i]->HeaderCell->Value = (x[i*q]).ToString();
		Tab3->Columns[i]->HeaderCell->Value = (x[i*q]).ToString();
		
	}
	for (int j = 0; j <= m; j=j++)         
	{
		Tab1->Rows[j]->HeaderCell->Value = (y[j*q]).ToString();
		Tab2->Rows[j]->HeaderCell->Value = (y[j*q]).ToString();
		Tab3->Rows[j]->HeaderCell->Value = (y[j*q]).ToString();
	}
	for (int j = 0; j <= m; j=j++)             
	{
		for (int i = 0; i <= n; i=i++)
		{
			double a = round(v[i][j] * 1000) / 1000;
			double b, c ,d;
			if (FLAG)
			{
				Pogr = abs(u[i][j] - v[i][j]);
				b = round(u[i][j] * 1000) / 1000;
				c = x[i]; d = y[i];
			}
			else {

				Pogr = std::fabs(v[i][j] - v2[i * 2][j * 2]);
				b = round(v2[2 * i][2 * j] * 1000) / 1000;
				c = x[2 * i]; d= y[2 * j];
			}

			Tab1->Rows[j]->Cells[i]->Value = a;
			Tab2->Rows[j]->Cells[i]->Value = b;
			Tab3->Rows[j]->Cells[i]->Value = Pogr;
			if (Pogr > MaxPogr)
			{
				MaxPogr = Pogr;
				xMax = c;
				yMax = d;
			}
		}
	}

	// Справка
	if (FLAG) { label17->Text = Convert::ToString(p) + "\n" + Convert::ToString(Eps_max) + "\n" + "Нулелвое" + "\n" + Convert::ToString(MaxF) + "\n" + Convert::ToString(maxR1) + "\n" + Convert::ToString(MaxPogr) + "\n\n" + Convert::ToString(xMax) + "\n" + Convert::ToString(yMax); }
	else {
		label17->Text = Convert::ToString(p) + "\n" + Convert::ToString(Eps_max) + "\n" + Convert::ToString(MaxF) + "\n" + Convert::ToString(maxR1) + "\n" + Convert::ToString(p2) + "\n" + Convert::ToString(Eps_max2) + "\n" + Convert::ToString(MaxF2) + "\n" + Convert::ToString(maxR) + "\n" + Convert::ToString(MaxPogr) + "\n" + Convert::ToString(xMax) + "\n" + Convert::ToString(yMax);

	}

}

};
}
