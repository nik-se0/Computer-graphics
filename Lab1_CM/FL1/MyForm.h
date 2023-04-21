#pragma once

namespace FL1 {

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
	private: System::Windows::Forms::Label^ label1;
	protected:









































	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::DataVisualization::Charting::Chart^ Gr;

























	private: System::Windows::Forms::Label^ l2;


	private: System::Windows::Forms::TextBox^ n;
	private: System::Windows::Forms::Label^ l3;

	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::TextBox^ S1;
	private: System::Windows::Forms::TextBox^ S2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataGridView^ Tab2;
	private: System::Windows::Forms::Label^ Spr;
private: System::Windows::Forms::DataGridView^ Tab;


private: System::Windows::Forms::DataVisualization::Charting::Chart^ Gr3;






private: System::Windows::Forms::Label^ Spr2;


private: System::Windows::Forms::Label^ Spr3;
private: System::Windows::Forms::Label^ Spr4;
private: System::Windows::Forms::Label^ Spr5;
private: System::Windows::Forms::Label^ x1;
private: System::Windows::Forms::Label^ xi2;


private: System::Windows::Forms::Label^ xi1;


private: System::Windows::Forms::Label^ xi3;
private: System::Windows::Forms::ComboBox^ fun;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::GroupBox^ groupBox1;
private: System::Windows::Forms::GroupBox^ groupBox2;
private: System::Windows::Forms::DataVisualization::Charting::Chart^ Gr2;
private: System::Windows::Forms::DataVisualization::Charting::Chart^ Gr5;
private: System::Windows::Forms::DataVisualization::Charting::Chart^ Gr4;
private: System::Windows::Forms::DataVisualization::Charting::Chart^ Gr6;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::Label^ label6;




























	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea4 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series7 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea5 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series8 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea6 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series9 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Gr = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->l2 = (gcnew System::Windows::Forms::Label());
			this->n = (gcnew System::Windows::Forms::TextBox());
			this->l3 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->S1 = (gcnew System::Windows::Forms::TextBox());
			this->S2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Tab2 = (gcnew System::Windows::Forms::DataGridView());
			this->Spr = (gcnew System::Windows::Forms::Label());
			this->Tab = (gcnew System::Windows::Forms::DataGridView());
			this->Gr3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->Spr2 = (gcnew System::Windows::Forms::Label());
			this->Spr3 = (gcnew System::Windows::Forms::Label());
			this->Spr4 = (gcnew System::Windows::Forms::Label());
			this->Spr5 = (gcnew System::Windows::Forms::Label());
			this->x1 = (gcnew System::Windows::Forms::Label());
			this->xi2 = (gcnew System::Windows::Forms::Label());
			this->xi1 = (gcnew System::Windows::Forms::Label());
			this->xi3 = (gcnew System::Windows::Forms::Label());
			this->fun = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->Gr2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->Gr5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->Gr4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->Gr6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Gr))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Tab2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Tab))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Gr3))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Gr2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Gr5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Gr4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Gr6))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 20);
			this->label1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 171);
			this->button1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(189, 55);
			this->button1->TabIndex = 27;
			this->button1->Text = L"Построить сплайн";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// Gr
			// 
			chartArea1->AxisX->LineWidth = 5;
			chartArea1->AxisX->TitleFont = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			chartArea1->AxisY->LineWidth = 5;
			chartArea1->AxisY->TitleFont = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			chartArea1->Name = L"ChartArea1";
			this->Gr->ChartAreas->Add(chartArea1);
			legend1->DockedToChartArea = L"ChartArea1";
			legend1->MaximumAutoSize = 20;
			legend1->Name = L"Legend1";
			this->Gr->Legends->Add(legend1);
			this->Gr->Location = System::Drawing::Point(747, 6);
			this->Gr->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Gr->Name = L"Gr";
			series1->BackImageTransparentColor = System::Drawing::Color::Transparent;
			series1->BackImageWrapMode = System::Windows::Forms::DataVisualization::Charting::ChartImageWrapMode::Scaled;
			series1->BorderWidth = 5;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Color = System::Drawing::Color::Blue;
			series1->IsVisibleInLegend = false;
			series1->Legend = L"Legend1";
			series1->Name = L"S(x)";
			series1->YValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			series2->BackImageTransparentColor = System::Drawing::Color::Transparent;
			series2->BackImageWrapMode = System::Windows::Forms::DataVisualization::Charting::ChartImageWrapMode::Unscaled;
			series2->BorderWidth = 5;
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series2->Color = System::Drawing::Color::Red;
			series2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			series2->IsVisibleInLegend = false;
			series2->Legend = L"Legend1";
			series2->Name = L"F(x)";
			this->Gr->Series->Add(series1);
			this->Gr->Series->Add(series2);
			this->Gr->Size = System::Drawing::Size(339, 313);
			this->Gr->TabIndex = 29;
			this->Gr->Text = L"chart1";
			// 
			// l2
			// 
			this->l2->AllowDrop = true;
			this->l2->AutoSize = true;
			this->l2->Location = System::Drawing::Point(261, 133);
			this->l2->MaximumSize = System::Drawing::Size(112, 0);
			this->l2->Name = L"l2";
			this->l2->Size = System::Drawing::Size(0, 20);
			this->l2->TabIndex = 46;
			// 
			// n
			// 
			this->n->Location = System::Drawing::Point(185, 13);
			this->n->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->n->Name = L"n";
			this->n->Size = System::Drawing::Size(137, 26);
			this->n->TabIndex = 47;
			this->n->Text = L"4";
			this->n->TextChanged += gcnew System::EventHandler(this, &MyForm::n_TextChanged);
			// 
			// l3
			// 
			this->l3->AllowDrop = true;
			this->l3->AutoSize = true;
			this->l3->Location = System::Drawing::Point(4, 48);
			this->l3->MaximumSize = System::Drawing::Size(112, 0);
			this->l3->Name = L"l3";
			this->l3->Size = System::Drawing::Size(48, 20);
			this->l3->TabIndex = 48;
			this->l3->Text = L"S1\'\' =";
			// 
			// label20
			// 
			this->label20->AllowDrop = true;
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(6, 79);
			this->label20->MaximumSize = System::Drawing::Size(112, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(48, 20);
			this->label20->TabIndex = 49;
			this->label20->Text = L"S2\'\' =";
			// 
			// S1
			// 
			this->S1->Location = System::Drawing::Point(56, 45);
			this->S1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->S1->Name = L"S1";
			this->S1->Size = System::Drawing::Size(266, 26);
			this->S1->TabIndex = 50;
			this->S1->Text = L"0";
			this->S1->TextChanged += gcnew System::EventHandler(this, &MyForm::S1_TextChanged);
			// 
			// S2
			// 
			this->S2->Location = System::Drawing::Point(57, 78);
			this->S2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->S2->Name = L"S2";
			this->S2->Size = System::Drawing::Size(265, 26);
			this->S2->TabIndex = 51;
			this->S2->Text = L"0";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::LightGray;
			this->label3->Location = System::Drawing::Point(8, 0);
			this->label3->MaximumSize = System::Drawing::Size(450, 375);
			this->label3->MinimumSize = System::Drawing::Size(248, 162);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(350, 240);
			this->label3->TabIndex = 39;
			this->label3->Text = resources->GetString(L"label3.Text");
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click_1);
			// 
			// Tab2
			// 
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Tab2->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->Tab2->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->Tab2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Tab2->Location = System::Drawing::Point(12, 261);
			this->Tab2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Tab2->Name = L"Tab2";
			this->Tab2->RowHeadersWidth = 51;
			this->Tab2->RowTemplate->Height = 24;
			this->Tab2->Size = System::Drawing::Size(719, 178);
			this->Tab2->TabIndex = 52;
			this->Tab2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::Tab2_CellContentClick);
			// 
			// Spr
			// 
			this->Spr->AutoSize = true;
			this->Spr->BackColor = System::Drawing::Color::LightGray;
			this->Spr->Location = System::Drawing::Point(173, 22);
			this->Spr->MinimumSize = System::Drawing::Size(17, 0);
			this->Spr->Name = L"Spr";
			this->Spr->Size = System::Drawing::Size(17, 20);
			this->Spr->TabIndex = 53;
			// 
			// Tab
			// 
			this->Tab->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Tab->Location = System::Drawing::Point(8, 447);
			this->Tab->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Tab->Name = L"Tab";
			this->Tab->RowHeadersWidth = 51;
			this->Tab->RowTemplate->Height = 24;
			this->Tab->Size = System::Drawing::Size(719, 514);
			this->Tab->TabIndex = 54;
			// 
			// Gr3
			// 
			chartArea2->AxisX->LineWidth = 5;
			chartArea2->AxisX->TitleFont = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			chartArea2->AxisY->LineWidth = 5;
			chartArea2->AxisY->TitleFont = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			chartArea2->Name = L"ChartArea1";
			this->Gr3->ChartAreas->Add(chartArea2);
			legend2->DockedToChartArea = L"ChartArea1";
			legend2->MaximumAutoSize = 10;
			legend2->Name = L"Legend1";
			this->Gr3->Legends->Add(legend2);
			this->Gr3->Location = System::Drawing::Point(1092, 6);
			this->Gr3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Gr3->Name = L"Gr3";
			series3->BackImageTransparentColor = System::Drawing::Color::Transparent;
			series3->BackImageWrapMode = System::Windows::Forms::DataVisualization::Charting::ChartImageWrapMode::Scaled;
			series3->BorderWidth = 5;
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series3->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			series3->Legend = L"Legend1";
			series3->Name = L"F(x)-S(x)";
			series3->YValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			this->Gr3->Series->Add(series3);
			this->Gr3->Size = System::Drawing::Size(267, 196);
			this->Gr3->TabIndex = 56;
			this->Gr3->Text = L"chart1";
			// 
			// Spr2
			// 
			this->Spr2->AutoSize = true;
			this->Spr2->BackColor = System::Drawing::Color::LightGray;
			this->Spr2->Location = System::Drawing::Point(214, 42);
			this->Spr2->MinimumSize = System::Drawing::Size(17, 0);
			this->Spr2->Name = L"Spr2";
			this->Spr2->Size = System::Drawing::Size(17, 20);
			this->Spr2->TabIndex = 60;
			// 
			// Spr3
			// 
			this->Spr3->AutoSize = true;
			this->Spr3->BackColor = System::Drawing::Color::LightGray;
			this->Spr3->Location = System::Drawing::Point(146, 87);
			this->Spr3->MinimumSize = System::Drawing::Size(17, 0);
			this->Spr3->Name = L"Spr3";
			this->Spr3->Size = System::Drawing::Size(17, 20);
			this->Spr3->TabIndex = 63;
			// 
			// Spr4
			// 
			this->Spr4->AutoSize = true;
			this->Spr4->BackColor = System::Drawing::Color::LightGray;
			this->Spr4->Location = System::Drawing::Point(155, 146);
			this->Spr4->MinimumSize = System::Drawing::Size(17, 0);
			this->Spr4->Name = L"Spr4";
			this->Spr4->Size = System::Drawing::Size(17, 20);
			this->Spr4->TabIndex = 64;
			// 
			// Spr5
			// 
			this->Spr5->AutoSize = true;
			this->Spr5->BackColor = System::Drawing::Color::LightGray;
			this->Spr5->Location = System::Drawing::Point(157, 202);
			this->Spr5->MinimumSize = System::Drawing::Size(17, 0);
			this->Spr5->Name = L"Spr5";
			this->Spr5->Size = System::Drawing::Size(17, 20);
			this->Spr5->TabIndex = 65;
			// 
			// x1
			// 
			this->x1->AutoSize = true;
			this->x1->BackColor = System::Drawing::SystemColors::Info;
			this->x1->Dock = System::Windows::Forms::DockStyle::Right;
			this->x1->Location = System::Drawing::Point(1401, 0);
			this->x1->MinimumSize = System::Drawing::Size(17, 0);
			this->x1->Name = L"x1";
			this->x1->Size = System::Drawing::Size(17, 20);
			this->x1->TabIndex = 66;
			// 
			// xi2
			// 
			this->xi2->AutoSize = true;
			this->xi2->BackColor = System::Drawing::Color::LightGray;
			this->xi2->Location = System::Drawing::Point(67, 166);
			this->xi2->MinimumSize = System::Drawing::Size(17, 0);
			this->xi2->Name = L"xi2";
			this->xi2->Size = System::Drawing::Size(17, 20);
			this->xi2->TabIndex = 67;
			// 
			// xi1
			// 
			this->xi1->AutoSize = true;
			this->xi1->BackColor = System::Drawing::Color::LightGray;
			this->xi1->Location = System::Drawing::Point(70, 104);
			this->xi1->MinimumSize = System::Drawing::Size(17, 0);
			this->xi1->Name = L"xi1";
			this->xi1->Size = System::Drawing::Size(17, 20);
			this->xi1->TabIndex = 67;
			// 
			// xi3
			// 
			this->xi3->AutoSize = true;
			this->xi3->BackColor = System::Drawing::Color::LightGray;
			this->xi3->Location = System::Drawing::Point(67, 224);
			this->xi3->MinimumSize = System::Drawing::Size(17, 0);
			this->xi3->Name = L"xi3";
			this->xi3->Size = System::Drawing::Size(17, 20);
			this->xi3->TabIndex = 68;
			// 
			// fun
			// 
			this->fun->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->fun->FormattingEnabled = true;
			this->fun->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"sgn(-x)*(x^3+3*x^2)", L"cos(e^x)", L"cos(e^x)+cos(10x)",
					L"sqrt(1+x^4)", L"sqrt(1+x^4)+cos(10x)", L"cos(x^2/4)", L"cos(x^2/4)+cos(10x)"
			});
			this->fun->Location = System::Drawing::Point(20, 14);
			this->fun->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->fun->Name = L"fun";
			this->fun->Size = System::Drawing::Size(252, 33);
			this->fun->TabIndex = 69;
			this->fun->Text = L"sgn(-x)*(x^3+3*x^2)";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 17);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(171, 20);
			this->label2->TabIndex = 70;
			this->label2->Text = L"Кол-во разбиений n =";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->S2);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->S1);
			this->groupBox1->Controls->Add(this->label20);
			this->groupBox1->Controls->Add(this->l3);
			this->groupBox1->Controls->Add(this->n);
			this->groupBox1->Location = System::Drawing::Point(14, 48);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(345, 119);
			this->groupBox1->TabIndex = 71;
			this->groupBox1->TabStop = false;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->xi3);
			this->groupBox2->Controls->Add(this->xi1);
			this->groupBox2->Controls->Add(this->xi2);
			this->groupBox2->Controls->Add(this->Spr5);
			this->groupBox2->Controls->Add(this->Spr4);
			this->groupBox2->Controls->Add(this->Spr3);
			this->groupBox2->Controls->Add(this->Spr2);
			this->groupBox2->Controls->Add(this->Spr);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Location = System::Drawing::Point(369, 6);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(358, 248);
			this->groupBox2->TabIndex = 72;
			this->groupBox2->TabStop = false;
			// 
			// Gr2
			// 
			chartArea3->AxisX->LineWidth = 5;
			chartArea3->AxisX->TitleFont = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			chartArea3->AxisY->LineWidth = 5;
			chartArea3->AxisY->TitleFont = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			chartArea3->Name = L"ChartArea1";
			this->Gr2->ChartAreas->Add(chartArea3);
			legend3->DockedToChartArea = L"ChartArea1";
			legend3->MaximumAutoSize = 20;
			legend3->Name = L"Legend1";
			this->Gr2->Legends->Add(legend3);
			this->Gr2->Location = System::Drawing::Point(747, 327);
			this->Gr2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Gr2->Name = L"Gr2";
			series4->BackImageTransparentColor = System::Drawing::Color::Transparent;
			series4->BackImageWrapMode = System::Windows::Forms::DataVisualization::Charting::ChartImageWrapMode::Scaled;
			series4->BorderWidth = 5;
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series4->Color = System::Drawing::Color::Blue;
			series4->IsVisibleInLegend = false;
			series4->Legend = L"Legend1";
			series4->Name = L"S\'(x)";
			series4->YValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			series5->BackImageTransparentColor = System::Drawing::Color::Transparent;
			series5->BackImageWrapMode = System::Windows::Forms::DataVisualization::Charting::ChartImageWrapMode::Unscaled;
			series5->BorderWidth = 5;
			series5->ChartArea = L"ChartArea1";
			series5->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series5->Color = System::Drawing::Color::Red;
			series5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			series5->IsVisibleInLegend = false;
			series5->Legend = L"Legend1";
			series5->Name = L"F\'(x)";
			this->Gr2->Series->Add(series4);
			this->Gr2->Series->Add(series5);
			this->Gr2->Size = System::Drawing::Size(339, 313);
			this->Gr2->TabIndex = 73;
			this->Gr2->Text = L"chart1";
			// 
			// Gr5
			// 
			chartArea4->AxisX->LineWidth = 5;
			chartArea4->AxisX->TitleFont = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			chartArea4->AxisY->LineWidth = 5;
			chartArea4->AxisY->TitleFont = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			chartArea4->Name = L"ChartArea1";
			this->Gr5->ChartAreas->Add(chartArea4);
			legend4->DockedToChartArea = L"ChartArea1";
			legend4->MaximumAutoSize = 20;
			legend4->Name = L"Legend1";
			this->Gr5->Legends->Add(legend4);
			this->Gr5->Location = System::Drawing::Point(747, 648);
			this->Gr5->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Gr5->Name = L"Gr5";
			series6->BackImageTransparentColor = System::Drawing::Color::Transparent;
			series6->BackImageWrapMode = System::Windows::Forms::DataVisualization::Charting::ChartImageWrapMode::Scaled;
			series6->BorderWidth = 5;
			series6->ChartArea = L"ChartArea1";
			series6->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series6->Color = System::Drawing::Color::Blue;
			series6->IsVisibleInLegend = false;
			series6->Legend = L"Legend1";
			series6->Name = L"S\'\'(x)";
			series6->YValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			series7->BackImageTransparentColor = System::Drawing::Color::Transparent;
			series7->BackImageWrapMode = System::Windows::Forms::DataVisualization::Charting::ChartImageWrapMode::Unscaled;
			series7->BorderWidth = 5;
			series7->ChartArea = L"ChartArea1";
			series7->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series7->Color = System::Drawing::Color::Red;
			series7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			series7->IsVisibleInLegend = false;
			series7->Legend = L"Legend1";
			series7->Name = L"F\'\'(x)";
			this->Gr5->Series->Add(series6);
			this->Gr5->Series->Add(series7);
			this->Gr5->Size = System::Drawing::Size(339, 313);
			this->Gr5->TabIndex = 74;
			this->Gr5->Text = L"chart1";
			// 
			// Gr4
			// 
			chartArea5->AxisX->LineWidth = 5;
			chartArea5->AxisX->TitleFont = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			chartArea5->AxisY->LineWidth = 5;
			chartArea5->AxisY->TitleFont = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			chartArea5->Name = L"ChartArea1";
			this->Gr4->ChartAreas->Add(chartArea5);
			legend5->DockedToChartArea = L"ChartArea1";
			legend5->MaximumAutoSize = 10;
			legend5->Name = L"Legend1";
			this->Gr4->Legends->Add(legend5);
			this->Gr4->Location = System::Drawing::Point(1092, 327);
			this->Gr4->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Gr4->Name = L"Gr4";
			series8->BackImageTransparentColor = System::Drawing::Color::Transparent;
			series8->BackImageWrapMode = System::Windows::Forms::DataVisualization::Charting::ChartImageWrapMode::Scaled;
			series8->BorderWidth = 5;
			series8->ChartArea = L"ChartArea1";
			series8->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series8->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			series8->Legend = L"Legend1";
			series8->Name = L"F\'(x)-S\'(x)";
			series8->YValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			this->Gr4->Series->Add(series8);
			this->Gr4->Size = System::Drawing::Size(267, 196);
			this->Gr4->TabIndex = 75;
			this->Gr4->Text = L"chart1";
			// 
			// Gr6
			// 
			chartArea6->AxisX->LineWidth = 5;
			chartArea6->AxisX->TitleFont = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			chartArea6->AxisY->LineWidth = 5;
			chartArea6->AxisY->TitleFont = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			chartArea6->Name = L"ChartArea1";
			this->Gr6->ChartAreas->Add(chartArea6);
			legend6->DockedToChartArea = L"ChartArea1";
			legend6->MaximumAutoSize = 10;
			legend6->Name = L"Legend1";
			this->Gr6->Legends->Add(legend6);
			this->Gr6->Location = System::Drawing::Point(1092, 648);
			this->Gr6->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Gr6->Name = L"Gr6";
			series9->BackImageTransparentColor = System::Drawing::Color::Transparent;
			series9->BackImageWrapMode = System::Windows::Forms::DataVisualization::Charting::ChartImageWrapMode::Scaled;
			series9->BorderWidth = 5;
			series9->ChartArea = L"ChartArea1";
			series9->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series9->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			series9->Legend = L"Legend1";
			series9->Name = L"F\'\'(x)-S\'\'(x)";
			series9->YValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			this->Gr6->Series->Add(series9);
			this->Gr6->Size = System::Drawing::Size(267, 196);
			this->Gr6->TabIndex = 76;
			this->Gr6->Text = L"chart1";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(800, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(36, 20);
			this->label4->TabIndex = 77;
			this->label4->Text = L"F(x)";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(815, 327);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(39, 20);
			this->label5->TabIndex = 78;
			this->label5->Text = L"F\'(x)";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->Location = System::Drawing::Point(818, 648);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(42, 20);
			this->label6->TabIndex = 79;
			this->label6->Text = L"F\'\'(x)";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(1418, 989);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->Gr6);
			this->Controls->Add(this->Gr4);
			this->Controls->Add(this->Gr5);
			this->Controls->Add(this->Gr2);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->fun);
			this->Controls->Add(this->x1);
			this->Controls->Add(this->Gr3);
			this->Controls->Add(this->Tab);
			this->Controls->Add(this->Gr);
			this->Controls->Add(this->Tab2);
			this->Controls->Add(this->l2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Кубический сплайн";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Gr))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Tab2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Tab))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Gr3))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Gr2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Gr5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Gr4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Gr6))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label11_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void S1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void n_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void Tab2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}

};
}
