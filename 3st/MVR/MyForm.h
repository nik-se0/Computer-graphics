#define _USE_MATH_DEFINES
#pragma once
#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
#include <cmath>
#include <functional>

double aa = 0.0, bb = 1.0, cc = 0.0, dd = 1.0, h, k;

double X(int i)
{
	return aa + h * i;
}
double Y(int i)
{
	return cc + k * i;
}
double Mu(double x, double y) // GU
{
	return pow(M_E, sin(M_PI * x * y) * sin(M_PI * x * y));
}
double F(double x, double y) // test
{
	return 2 * M_PI * M_PI * pow(M_E, sin(M_PI * x * y) * sin(M_PI * x * y)) * (x * x + y * y) * (sin(2 * x) * sin(2 * x) / 2 + cos(2 * x));
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

	private: System::Windows::Forms::Label^ label1;

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
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label2;


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
			   this->button1 = (gcnew System::Windows::Forms::Button());
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
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			   this->label1 = (gcnew System::Windows::Forms::Label());
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
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
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
			   this->groupBox5->Controls->Add(this->button1);
			   this->groupBox5->Controls->Add(this->textBox7);
			   this->groupBox5->Controls->Add(this->label10);
			   this->groupBox5->Controls->Add(this->label9);
			   this->groupBox5->Controls->Add(this->textBox6);
			   this->groupBox5->Controls->Add(this->textBox5);
			   this->groupBox5->Controls->Add(this->label8);
			   this->groupBox5->Controls->Add(this->label7);
			   this->groupBox5->Location = System::Drawing::Point(17, 166);
			   this->groupBox5->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->groupBox5->Name = L"groupBox5";
			   this->groupBox5->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->groupBox5->Size = System::Drawing::Size(445, 123);
			   this->groupBox5->TabIndex = 2;
			   this->groupBox5->TabStop = false;
			   this->groupBox5->Text = L"Параметры";
			   // 
			   // textBox8
			   // 
			   this->textBox8->Location = System::Drawing::Point(87, 88);
			   this->textBox8->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->textBox8->Name = L"textBox8";
			   this->textBox8->Size = System::Drawing::Size(98, 26);
			   this->textBox8->TabIndex = 11;
			   this->textBox8->Text = L"0,0000005";
			   // 
			   // button1
			   // 
			   this->button1->Location = System::Drawing::Point(259, 60);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(113, 41);
			   this->button1->TabIndex = 0;
			   this->button1->Text = L"Рассчет";
			   this->button1->UseVisualStyleBackColor = true;
			   this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			   // 
			   // textBox7
			   // 
			   this->textBox7->Location = System::Drawing::Point(87, 55);
			   this->textBox7->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->textBox7->Name = L"textBox7";
			   this->textBox7->Size = System::Drawing::Size(98, 26);
			   this->textBox7->TabIndex = 10;
			   this->textBox7->Text = L"5500";
			   // 
			   // label10
			   // 
			   this->label10->AutoSize = true;
			   this->label10->Location = System::Drawing::Point(8, 90);
			   this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->label10->Name = L"label10";
			   this->label10->Size = System::Drawing::Size(54, 20);
			   this->label10->TabIndex = 9;
			   this->label10->Text = L"Eps = ";
			   // 
			   // label9
			   // 
			   this->label9->AutoSize = true;
			   this->label9->Location = System::Drawing::Point(8, 59);
			   this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->label9->Name = L"label9";
			   this->label9->Size = System::Drawing::Size(66, 20);
			   this->label9->TabIndex = 8;
			   this->label9->Text = L"Nmax = ";
			   // 
			   // textBox6
			   // 
			   this->textBox6->Location = System::Drawing::Point(240, 23);
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
			   this->label8->Location = System::Drawing::Point(197, 25);
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
			   this->Tab1->Size = System::Drawing::Size(1227, 262);
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
			   this->groupBox4->Location = System::Drawing::Point(470, 10);
			   this->groupBox4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->groupBox4->Name = L"groupBox4";
			   this->groupBox4->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->groupBox4->Size = System::Drawing::Size(791, 274);
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
			   this->groupBox7->Controls->Add(this->label2);
			   this->groupBox7->Controls->Add(this->pictureBox1);
			   this->groupBox7->Controls->Add(this->label1);
			   this->groupBox7->Location = System::Drawing::Point(17, 4);
			   this->groupBox7->Name = L"groupBox7";
			   this->groupBox7->Size = System::Drawing::Size(446, 158);
			   this->groupBox7->TabIndex = 14;
			   this->groupBox7->TabStop = false;
			   this->groupBox7->Text = L"Описание задачи";
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label2->Location = System::Drawing::Point(369, 71);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(23, 20);
			   this->label2->TabIndex = 18;
			   this->label2->Text = L"G";
			   // 
			   // pictureBox1
			   // 
			   this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			   this->pictureBox1->Location = System::Drawing::Point(281, 42);
			   this->pictureBox1->Name = L"pictureBox1";
			   this->pictureBox1->Size = System::Drawing::Size(152, 96);
			   this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			   this->pictureBox1->TabIndex = 17;
			   this->pictureBox1->TabStop = false;
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Location = System::Drawing::Point(15, 25);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(255, 120);
			   this->label1->TabIndex = 1;
			   this->label1->Text = L"u* = e^(sin(pi*xy)^2)\r\nx-[0,1], y-[0,1]\r\nu(0, y) = 1,    u(1, y) = e^(sin(pi*y)^2"
				   L")\r\nu(x, 0) = 1,    u(x,1) = e^(sin(pi*x)^2)\r\nu(x,1/2) = e^(sin(pi*x/2)^2)\r\nu(1/2"
				   L",y) = e^(sin(pi*y/2)^2)";
			   // 
			   // tabControl1
			   // 
			   this->tabControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->tabControl1->Controls->Add(this->tabPage1);
			   this->tabControl1->Controls->Add(this->tabPage2);
			   this->tabControl1->Controls->Add(this->tabPage3);
			   this->tabControl1->Location = System::Drawing::Point(12, 310);
			   this->tabControl1->Name = L"tabControl1";
			   this->tabControl1->SelectedIndex = 0;
			   this->tabControl1->Size = System::Drawing::Size(1249, 311);
			   this->tabControl1->TabIndex = 16;
			   // 
			   // tabPage1
			   // 
			   this->tabPage1->Controls->Add(this->Tab1);
			   this->tabPage1->Location = System::Drawing::Point(4, 29);
			   this->tabPage1->Name = L"tabPage1";
			   this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			   this->tabPage1->Size = System::Drawing::Size(1241, 278);
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
			   this->tabPage2->Size = System::Drawing::Size(1241, 278);
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
			   this->Tab2->Size = System::Drawing::Size(1227, 317);
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
			   this->tabPage3->Size = System::Drawing::Size(1241, 278);
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
			   this->Tab3->Size = System::Drawing::Size(1230, 317);
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
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			   this->tabControl1->ResumeLayout(false);
			   this->tabPage1->ResumeLayout(false);
			   this->tabPage2->ResumeLayout(false);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Tab2))->EndInit();
			   this->tabPage3->ResumeLayout(false);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Tab3))->EndInit();
			   this->ResumeLayout(false);

		   }
#pragma endregion
		   // =========  Functions =========
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {

		double h2, k2, A, Emax = 0.0, R0 = 0.0, xMax = 0.0, yMax = 0.0, Rn = 0.0, Eps_max;
		double w = 1.99;	//Параметр МВР
		int p = 0;			//Текущее число итераций

		//Ввод данных
		int n = Convert::ToInt32(textBox5->Text);
		if (n % 2 == 1) {
			MessageBox::Show("Значение не кратно двум, n будет умножено на два", "Предупреждение", MessageBoxButtons::OK);  n = n * 2;
			textBox5->Text = Convert::ToString(n);
		}
		int m = Convert::ToInt32(textBox6->Text);
		if (m % 2 == 1) {
			MessageBox::Show("Значение не кратно двум, m будет умножено на два", "Предупреждение", MessageBoxButtons::OK);  m = m * 2;
			textBox6->Text = Convert::ToString(m);
		}
		int Nmax = Convert::ToInt32(textBox7->Text);
		double Eps = Convert::ToDouble(textBox8->Text);

		//Инилициализация переменных
		h = (bb - aa) / n; k = (dd - cc) / m;		//Шаги по x и y
		h2 = 1.0 / (h * h), k2 = 1.0 / (k * k);
		A = -2 * (h2 + k2);

		double** v, ** f, ** u, ** hv, ** R;
		u = new double* [n + 1];	//истинное решение
		v = new double* [n + 1];	//численное решение
		R = new double* [n + 1];
		for (int i = 0; i <= n; i++)
		{
			v[i] = new double[m + 1];
			u[i] = new double[m + 1];
			R[i] = new double[m + 1];
			for (int j = 0; j <= m; j++)
			{
				v[i][j] = 0.0; //Нулевое начальное приближение
				u[i][j] = 0.0;
			}

		}

		//Заполнение граничных условий в массив v
		for (int i = 0; i <= n / 2; i++)
		{
			v[i][m] = Mu(X(i), 1);		//Mu(5)
			v[i][m / 2] = Mu(X(i), 0.5);	//Mu(1)

			R[i][0] = 0.0;
			R[i][m] = 0.0;
		}
		for (int i = n / 2 + 1; i <= n; i++)
		{
			v[i][m] = Mu(X(i), 1);		//Mu(5)
			v[i][0] = Mu(X(i), 0);		//Mu(3)

			R[i][0] = 0.0;
			R[i][m] = 0.0;
		}
		for (int j = 0; j <= m / 2; j++)
		{
			v[n][j] = Mu(1, Y(j));		//Mu(4)
			v[n / 2][j] = Mu(0.5, Y(j));	//Mu(2)

			R[0][j] = 0.0;
			R[n][j] = 0.0;
		}
		for (int j = m / 2 + 1; j <= m; j++) 
		{
			v[n][j] = Mu(1, Y(j));		//Mu(4)
			v[0][j] = Mu(0, Y(j));		//Mu(6)

			R[0][j] = 0.0;
			R[n][j] = 0.0;
		}

		//Заполнение U, подсчет невязки
		for (int j = 0; j <= m/2; j++)
		{
			for (int i = n/2; i <= n; i++)
			{
				u[i][j] = Mu(X(i), Y(j));
			}
		}
		for (int j = m / 2; j <= m; j++)
		{
			for (int i = 0; i <= n; i++)
			{
				u[i][j] = Mu(X(i), Y(j));
			}
		}

		//Подсчет невязки
		for (int j = 1; j < m / 2; j++)
			{
			for (int i = n/ 2+1; i < n; i++)
				{
					R0 += pow(F(X(i), Y(j)), 2);
				}
			}
		for (int j = m / 2+1; j <m ; j++)
		{
			for (int i = 1; i < n; i++)
			{
				u[i][j] = Mu(X(i), Y(j));
				R0 += pow(F(X(i), Y(j)), 2);
			}
		}
		R0 = std::sqrt(R0);	//Невязка на начальном приближении

		//Метод верхней релаксации
		while (true) {
			Eps_max = 0.0;
			for (int j = 1; j <= m / 2; j++) {
				for (int i = n / 2 + 1; i < n; i++) {
					double tmp = A * v[j][i] + h2 * (v[j][i - 1] + v[j][i + 1]) + k2 * (v[j - 1][i] + v[j + 1][i]);
					v[j][i] = v[j][i] - w * (tmp + F(X(i), Y(i))) / A;

					double CurE = std::fabs(v[j][i] - v[j][i]);
					if (CurE > Eps_max)
						Eps_max = CurE;
				}
			}
			for (int j = m/2; j < m; j++) {
				for (int i = 1; i < n; i++) {
					double last = v[j][i];
					double tmp = A * v[j][i] + h2 * (v[j][i - 1] + v[j][i + 1]) + k2 * (v[j - 1][i] + v[j + 1][i]);
					v[j][i] = v[j][i] - w * (tmp + F(X(i), Y(i))) / A;
					double CurE = std::fabs(v[j][i] - last);
					if (CurE > Eps_max)
						Eps_max = CurE;
				}
			}

			p++;
			if ((Eps_max < Eps) || (p > Nmax))
				break;
		}
		//Вычисление невяки
		double tmp = 0.0;
		for (int j = 1; j < m/2; j++)
		{
			for (int i = n/2+1; i < n; i++)
			{
				tmp = A * v[j][i] + h2 * (v[j][i - 1] + v[j][i + 1]) + k2 * (v[j - 1][i] + v[j + 1][i]) + F(X(i), Y(i));
				Rn += tmp * tmp;
			}
		}
		for (int j = m/2+1; j < m; j++)
		{
			for (int i =1; i < n; i++)
			{
				tmp = A * v[j][i] + h2 * (v[j][i - 1] + v[j][i + 1]) + k2 * (v[j - 1][i] + v[j + 1][i]) + F(X(i), Y(i));
				Rn += tmp * tmp;
			}
		}
		Rn = std::sqrt(Rn);
		
		//Заполнение таблицы
		Tab1->RowCount = n + 1; Tab1->ColumnCount = m + 1;
		Tab2->RowCount = n + 1; Tab2->ColumnCount = m + 1;
		Tab3->RowCount = n + 1; Tab3->ColumnCount = m + 1;

		Tab1->TopLeftHeaderCell->Value = "Y/X";
		Tab2->TopLeftHeaderCell->Value = "Y/X";
		Tab3->TopLeftHeaderCell->Value = "Y/X";

		for (int i = 0; i <= n; i++)
		{
			Tab1->Columns[i]->HeaderCell->Value = X(i).ToString();;
			Tab2->Columns[i]->HeaderCell->Value = X(i).ToString();;
			Tab3->Columns[i]->HeaderCell->Value = X(i).ToString();;
		}
		for (int j = 0; j <= m; j = j++)
		{
			Tab1->Rows[j]->HeaderCell->Value = Y(j).ToString();;
			Tab2->Rows[j]->HeaderCell->Value = Y(j).ToString();;
			Tab3->Rows[j]->HeaderCell->Value = Y(j).ToString();;
		}
		for (int j = 0; j <= m; j = j++)
		{
			for (int i = 0; i <= n; i = i++)
			{
				double Pogr = abs(u[i][j] - v[i][j]);
				Tab1->Rows[j]->Cells[i]->Value = v[i][j];
				Tab2->Rows[j]->Cells[i]->Value = u[i][j];
				Tab3->Rows[j]->Cells[i]->Value = Pogr;
				if (Pogr > Emax)
				{
					Emax = Pogr;
					xMax = X(i);;
					yMax = Y(j);
				}
			}
		}

		// Справка
		label17->Text = Convert::ToString(p) + "\n" + Convert::ToString(Eps_max) + "\n" + "Нулелвое" + "\n" + Convert::ToString(R0) + "\n" + Convert::ToString(Rn) + "\n" + Convert::ToString(Emax) + "\n\n" + Convert::ToString(xMax) + "\n" + Convert::ToString(yMax); 

	}

	};
}
