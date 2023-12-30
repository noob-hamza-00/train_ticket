#pragma once

namespace attempt00 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			// 
			//-------------------------------------------------------
			
			//-------------------------------------------------
			cmbCC->Text = "Chooooooose One...";
			cmbCC->Items->Add("Euro");
			cmbCC->Items->Add("USA");
			cmbCC->Items->Add("Nigeria");
			cmbCC->Items->Add("Canada");
			cmbCC->Items->Add("Kenyan");
			cmbCC->Items->Add("India");
			cmbCC->Items->Add("Brazil");
			cmbCC->Items->Add("Philippine");

			cmbDestination->Items->Add("Islamabad");
			cmbDestination->Items->Add("Sialkot");
			cmbDestination->Items->Add("Lahore");
			cmbDestination->Items->Add("Karachi");
			cmbDestination->Items->Add("Quetta");

			timer1->Start();
		}
	private: System::Windows::Forms::TextBox^ lblTotal;
	public:
	private: System::Windows::Forms::TextBox^ lblTax;
	private: System::Windows::Forms::TextBox^ lblChild;

	private: System::Windows::Forms::TextBox^ lblAdult;
	private: System::Windows::Forms::TextBox^ lblTicket;
	private: System::Windows::Forms::TextBox^ lblClass;
	private: System::Windows::Forms::TextBox^ lblRoute;
	private: System::Windows::Forms::TextBox^ gbDate;

	private: System::Windows::Forms::TextBox^ gbTime;
	private: System::Windows::Forms::TextBox^ lblRefNo;
	private: System::Windows::Forms::TextBox^ lblPrice;
	private: System::Windows::Forms::TextBox^ lblTo;
	private: System::Windows::Forms::TextBox^ lblFrom;
	private: System::Windows::Forms::TextBox^ lblSubtotal;
	public:

	public:

	public:

	public:

	public:

         //-----------------to go back to first form
	//	Form ^obj;
	//	MyForm(Form^ obj1)
	//	{
	//		obj = obj1;
	//		InitializeComponent();
	 //	}

	protected:
		/// <summary>
		/// Clean up G MAPS resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::RadioButton^ rbBusiness;

	private: System::Windows::Forms::RadioButton^ rbEconomy;

	private: System::Windows::Forms::RadioButton^ rbStandard;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::RadioButton^ rbChildYes;

	private: System::Windows::Forms::RadioButton^ rbAdultYes;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::RadioButton^ rbReturn;

	private: System::Windows::Forms::RadioButton^ rbSingle;
	private: System::Windows::Forms::Label^ typelabel;


	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::GroupBox^ groupBox6;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;





	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ TOTAL;
	private: System::Windows::Forms::GroupBox^ groupBox35;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::GroupBox^ groupBox34;
	private: System::Windows::Forms::Label^ label16;


	private: System::Windows::Forms::GroupBox^ groupBox31;
	private: System::Windows::Forms::Label^ label30;








	private: System::Windows::Forms::GroupBox^ groupBox26;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::GroupBox^ gbPrice;

	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::GroupBox^ groupBox24;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::GroupBox^ groupBox22;
	private: System::Windows::Forms::Label^ label20;








	private: System::Windows::Forms::GroupBox^ groupBox17;
private: System::Windows::Forms::Label^ childtab;

	private: System::Windows::Forms::GroupBox^ groupBox16;
private: System::Windows::Forms::Label^ adulttab;

	private: System::Windows::Forms::GroupBox^ groupBox15;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::GroupBox^ groupBox14;
private: System::Windows::Forms::Label^ classtab;

	private: System::Windows::Forms::GroupBox^ groupBox13;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
private: System::Windows::Forms::GroupBox^ gbTotal;

private: System::Windows::Forms::GroupBox^ gbTax;

private: System::Windows::Forms::GroupBox^ gbSubtotal;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;






	private: System::Windows::Forms::Button^ btnCC;


	private: System::Windows::Forms::Button^ btnClose;

	private: System::Windows::Forms::Button^ button4;

	private: System::Windows::Forms::TextBox^ txtCC;
private: System::Windows::Forms::ComboBox^ cmbDestination;

	private: System::Windows::Forms::ComboBox^ cmbCC;
private: System::Windows::Forms::TextBox^ txt2CC;
private: System::Windows::Forms::Timer^ timer1;
private: System::Windows::Forms::Button^ btnConvert;
private: System::Drawing::Printing::PrintDocument^ printDocument1;
private: System::Windows::Forms::PrintPreviewDialog^ printPreviewDialog1;
private: System::Windows::Forms::RichTextBox^ rtbReceipt;











private: System::ComponentModel::IContainer^ components;







	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->rbBusiness = (gcnew System::Windows::Forms::RadioButton());
			this->rbEconomy = (gcnew System::Windows::Forms::RadioButton());
			this->rbStandard = (gcnew System::Windows::Forms::RadioButton());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->cmbDestination = (gcnew System::Windows::Forms::ComboBox());
			this->rbChildYes = (gcnew System::Windows::Forms::RadioButton());
			this->rbAdultYes = (gcnew System::Windows::Forms::RadioButton());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->rbReturn = (gcnew System::Windows::Forms::RadioButton());
			this->rbSingle = (gcnew System::Windows::Forms::RadioButton());
			this->typelabel = (gcnew System::Windows::Forms::Label());
			this->btnCC = (gcnew System::Windows::Forms::Button());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->lblTotal = (gcnew System::Windows::Forms::TextBox());
			this->lblTax = (gcnew System::Windows::Forms::TextBox());
			this->lblSubtotal = (gcnew System::Windows::Forms::TextBox());
			this->txt2CC = (gcnew System::Windows::Forms::TextBox());
			this->cmbCC = (gcnew System::Windows::Forms::ComboBox());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->txtCC = (gcnew System::Windows::Forms::TextBox());
			this->gbTotal = (gcnew System::Windows::Forms::GroupBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->gbTax = (gcnew System::Windows::Forms::GroupBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->gbSubtotal = (gcnew System::Windows::Forms::GroupBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->btnConvert = (gcnew System::Windows::Forms::Button());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->lblRoute = (gcnew System::Windows::Forms::TextBox());
			this->gbDate = (gcnew System::Windows::Forms::TextBox());
			this->gbTime = (gcnew System::Windows::Forms::TextBox());
			this->lblRefNo = (gcnew System::Windows::Forms::TextBox());
			this->lblPrice = (gcnew System::Windows::Forms::TextBox());
			this->lblTo = (gcnew System::Windows::Forms::TextBox());
			this->lblFrom = (gcnew System::Windows::Forms::TextBox());
			this->lblChild = (gcnew System::Windows::Forms::TextBox());
			this->lblAdult = (gcnew System::Windows::Forms::TextBox());
			this->lblTicket = (gcnew System::Windows::Forms::TextBox());
			this->lblClass = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->TOTAL = (gcnew System::Windows::Forms::Button());
			this->groupBox35 = (gcnew System::Windows::Forms::GroupBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->groupBox34 = (gcnew System::Windows::Forms::GroupBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->groupBox31 = (gcnew System::Windows::Forms::GroupBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->groupBox26 = (gcnew System::Windows::Forms::GroupBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->gbPrice = (gcnew System::Windows::Forms::GroupBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->groupBox24 = (gcnew System::Windows::Forms::GroupBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->groupBox22 = (gcnew System::Windows::Forms::GroupBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->groupBox17 = (gcnew System::Windows::Forms::GroupBox());
			this->childtab = (gcnew System::Windows::Forms::Label());
			this->groupBox16 = (gcnew System::Windows::Forms::GroupBox());
			this->adulttab = (gcnew System::Windows::Forms::Label());
			this->groupBox15 = (gcnew System::Windows::Forms::GroupBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->groupBox14 = (gcnew System::Windows::Forms::GroupBox());
			this->classtab = (gcnew System::Windows::Forms::Label());
			this->groupBox13 = (gcnew System::Windows::Forms::GroupBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->rtbReceipt = (gcnew System::Windows::Forms::RichTextBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->gbTotal->SuspendLayout();
			this->gbTax->SuspendLayout();
			this->gbSubtotal->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->groupBox35->SuspendLayout();
			this->groupBox34->SuspendLayout();
			this->groupBox31->SuspendLayout();
			this->groupBox26->SuspendLayout();
			this->gbPrice->SuspendLayout();
			this->groupBox24->SuspendLayout();
			this->groupBox22->SuspendLayout();
			this->groupBox17->SuspendLayout();
			this->groupBox16->SuspendLayout();
			this->groupBox15->SuspendLayout();
			this->groupBox14->SuspendLayout();
			this->groupBox13->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1326, 122);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Webdings", 67.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->label2->Location = System::Drawing::Point(1158, 6);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(162, 114);
			this->label2->TabIndex = 1;
			this->label2->Text = L"R";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(5, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1075, 91);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Railway Reservation System";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->groupBox2->Controls->Add(this->rbBusiness);
			this->groupBox2->Controls->Add(this->rbEconomy);
			this->groupBox2->Controls->Add(this->rbStandard);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Location = System::Drawing::Point(12, 140);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(200, 193);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			// 
			// rbBusiness
			// 
			this->rbBusiness->AutoSize = true;
			this->rbBusiness->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbBusiness->Location = System::Drawing::Point(21, 137);
			this->rbBusiness->Name = L"rbBusiness";
			this->rbBusiness->Size = System::Drawing::Size(132, 33);
			this->rbBusiness->TabIndex = 3;
			this->rbBusiness->Text = L"Business";
			this->rbBusiness->UseVisualStyleBackColor = true;
			// 
			// rbEconomy
			// 
			this->rbEconomy->AutoSize = true;
			this->rbEconomy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbEconomy->Location = System::Drawing::Point(21, 97);
			this->rbEconomy->Name = L"rbEconomy";
			this->rbEconomy->Size = System::Drawing::Size(134, 33);
			this->rbEconomy->TabIndex = 2;
			this->rbEconomy->Text = L"Economy";
			this->rbEconomy->UseVisualStyleBackColor = true;
			this->rbEconomy->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// rbStandard
			// 
			this->rbStandard->AutoSize = true;
			this->rbStandard->Checked = true;
			this->rbStandard->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbStandard->Location = System::Drawing::Point(21, 57);
			this->rbStandard->Name = L"rbStandard";
			this->rbStandard->Size = System::Drawing::Size(131, 33);
			this->rbStandard->TabIndex = 1;
			this->rbStandard->TabStop = true;
			this->rbStandard->Text = L"Standard";
			this->rbStandard->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->Location = System::Drawing::Point(35, 18);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(94, 36);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Class";
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->groupBox3->Controls->Add(this->cmbDestination);
			this->groupBox3->Controls->Add(this->rbChildYes);
			this->groupBox3->Controls->Add(this->rbAdultYes);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Location = System::Drawing::Point(218, 140);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(275, 193);
			this->groupBox3->TabIndex = 4;
			this->groupBox3->TabStop = false;
			// 
			// cmbDestination
			// 
			this->cmbDestination->FormattingEnabled = true;
			this->cmbDestination->Location = System::Drawing::Point(32, 57);
			this->cmbDestination->Name = L"cmbDestination";
			this->cmbDestination->Size = System::Drawing::Size(198, 24);
			this->cmbDestination->TabIndex = 4;
			this->cmbDestination->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cmbDestination_SelectedIndexChanged);
			// 
			// rbChildYes
			// 
			this->rbChildYes->AutoSize = true;
			this->rbChildYes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbChildYes->Location = System::Drawing::Point(140, 147);
			this->rbChildYes->Name = L"rbChildYes";
			this->rbChildYes->Size = System::Drawing::Size(90, 33);
			this->rbChildYes->TabIndex = 3;
			this->rbChildYes->TabStop = true;
			this->rbChildYes->Text = L"Child";
			this->rbChildYes->UseVisualStyleBackColor = true;
			// 
			// rbAdultYes
			// 
			this->rbAdultYes->AutoSize = true;
			this->rbAdultYes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbAdultYes->Location = System::Drawing::Point(19, 147);
			this->rbAdultYes->Name = L"rbAdultYes";
			this->rbAdultYes->Size = System::Drawing::Size(88, 33);
			this->rbAdultYes->TabIndex = 2;
			this->rbAdultYes->TabStop = true;
			this->rbAdultYes->Text = L"Adult";
			this->rbAdultYes->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(41, 22);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(144, 29);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Destination";
			// 
			// groupBox4
			// 
			this->groupBox4->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->groupBox4->Controls->Add(this->rbReturn);
			this->groupBox4->Controls->Add(this->rbSingle);
			this->groupBox4->Controls->Add(this->typelabel);
			this->groupBox4->Location = System::Drawing::Point(499, 140);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(234, 193);
			this->groupBox4->TabIndex = 4;
			this->groupBox4->TabStop = false;
			// 
			// rbReturn
			// 
			this->rbReturn->AutoSize = true;
			this->rbReturn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbReturn->Location = System::Drawing::Point(46, 122);
			this->rbReturn->Name = L"rbReturn";
			this->rbReturn->Size = System::Drawing::Size(105, 33);
			this->rbReturn->TabIndex = 2;
			this->rbReturn->TabStop = true;
			this->rbReturn->Text = L"Return";
			this->rbReturn->UseVisualStyleBackColor = true;
			// 
			// rbSingle
			// 
			this->rbSingle->AutoSize = true;
			this->rbSingle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbSingle->Location = System::Drawing::Point(46, 69);
			this->rbSingle->Name = L"rbSingle";
			this->rbSingle->Size = System::Drawing::Size(103, 33);
			this->rbSingle->TabIndex = 1;
			this->rbSingle->TabStop = true;
			this->rbSingle->Text = L"Single";
			this->rbSingle->UseVisualStyleBackColor = true;
			// 
			// typelabel
			// 
			this->typelabel->AutoSize = true;
			this->typelabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->typelabel->Location = System::Drawing::Point(41, 22);
			this->typelabel->Name = L"typelabel";
			this->typelabel->Size = System::Drawing::Size(151, 29);
			this->typelabel->TabIndex = 0;
			this->typelabel->Text = L"Ticket Type";
			// 
			// btnCC
			// 
			this->btnCC->BackColor = System::Drawing::Color::Black;
			this->btnCC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCC->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnCC->Location = System::Drawing::Point(443, 17);
			this->btnCC->Name = L"btnCC";
			this->btnCC->Size = System::Drawing::Size(272, 305);
			this->btnCC->TabIndex = 15;
			this->btnCC->Text = L"Currency Converter";
			this->btnCC->UseVisualStyleBackColor = false;
			this->btnCC->UseWaitCursor = true;
			this->btnCC->Click += gcnew System::EventHandler(this, &MyForm::btnCC_Click);
			// 
			// groupBox5
			// 
			this->groupBox5->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->groupBox5->Controls->Add(this->lblTotal);
			this->groupBox5->Controls->Add(this->lblTax);
			this->groupBox5->Controls->Add(this->lblSubtotal);
			this->groupBox5->Controls->Add(this->btnCC);
			this->groupBox5->Controls->Add(this->txt2CC);
			this->groupBox5->Controls->Add(this->cmbCC);
			this->groupBox5->Controls->Add(this->btnClose);
			this->groupBox5->Controls->Add(this->button4);
			this->groupBox5->Controls->Add(this->txtCC);
			this->groupBox5->Controls->Add(this->gbTotal);
			this->groupBox5->Controls->Add(this->gbTax);
			this->groupBox5->Controls->Add(this->gbSubtotal);
			this->groupBox5->Controls->Add(this->checkBox1);
			this->groupBox5->Controls->Add(this->btnConvert);
			this->groupBox5->Location = System::Drawing::Point(12, 339);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(721, 332);
			this->groupBox5->TabIndex = 5;
			this->groupBox5->TabStop = false;
			this->groupBox5->Enter += gcnew System::EventHandler(this, &MyForm::groupBox5_Enter);
			// 
			// lblTotal
			// 
			this->lblTotal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTotal->Location = System::Drawing::Point(190, 244);
			this->lblTotal->Multiline = true;
			this->lblTotal->Name = L"lblTotal";
			this->lblTotal->Size = System::Drawing::Size(201, 50);
			this->lblTotal->TabIndex = 21;
			// 
			// lblTax
			// 
			this->lblTax->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTax->Location = System::Drawing::Point(189, 188);
			this->lblTax->Multiline = true;
			this->lblTax->Name = L"lblTax";
			this->lblTax->Size = System::Drawing::Size(201, 50);
			this->lblTax->TabIndex = 20;
			// 
			// lblSubtotal
			// 
			this->lblSubtotal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblSubtotal->Location = System::Drawing::Point(190, 132);
			this->lblSubtotal->Multiline = true;
			this->lblSubtotal->Name = L"lblSubtotal";
			this->lblSubtotal->Size = System::Drawing::Size(201, 50);
			this->lblSubtotal->TabIndex = 19;
			// 
			// txt2CC
			// 
			this->txt2CC->Location = System::Drawing::Point(487, 142);
			this->txt2CC->Multiline = true;
			this->txt2CC->Name = L"txt2CC";
			this->txt2CC->Size = System::Drawing::Size(218, 50);
			this->txt2CC->TabIndex = 17;
			this->txt2CC->TextChanged += gcnew System::EventHandler(this, &MyForm::txt2CC_TextChanged);
			// 
			// cmbCC
			// 
			this->cmbCC->FormattingEnabled = true;
			this->cmbCC->Location = System::Drawing::Point(487, 50);
			this->cmbCC->Name = L"cmbCC";
			this->cmbCC->Size = System::Drawing::Size(218, 24);
			this->cmbCC->TabIndex = 16;
			this->cmbCC->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cmbCC_SelectedIndexChanged);
			// 
			// btnClose
			// 
			this->btnClose->BackColor = System::Drawing::Color::Black;
			this->btnClose->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClose->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnClose->Location = System::Drawing::Point(584, 265);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(131, 46);
			this->btnClose->TabIndex = 12;
			this->btnClose->Text = L"Close";
			this->btnClose->UseVisualStyleBackColor = false;
			this->btnClose->UseWaitCursor = true;
			this->btnClose->Click += gcnew System::EventHandler(this, &MyForm::btnClose_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Black;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button4->Location = System::Drawing::Point(462, 265);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(116, 46);
			this->button4->TabIndex = 11;
			this->button4->Text = L"Reset";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->UseWaitCursor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// txtCC
			// 
			this->txtCC->Location = System::Drawing::Point(487, 89);
			this->txtCC->Name = L"txtCC";
			this->txtCC->Size = System::Drawing::Size(218, 22);
			this->txtCC->TabIndex = 6;
			this->txtCC->TextChanged += gcnew System::EventHandler(this, &MyForm::txtCC_TextChanged);
			// 
			// gbTotal
			// 
			this->gbTotal->BackColor = System::Drawing::SystemColors::Control;
			this->gbTotal->Controls->Add(this->label8);
			this->gbTotal->Location = System::Drawing::Point(21, 244);
			this->gbTotal->Name = L"gbTotal";
			this->gbTotal->Size = System::Drawing::Size(163, 50);
			this->gbTotal->TabIndex = 3;
			this->gbTotal->TabStop = false;
			this->gbTotal->Enter += gcnew System::EventHandler(this, &MyForm::groupBox9_Enter);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(29, 9);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(73, 29);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Total";
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
			// 
			// gbTax
			// 
			this->gbTax->BackColor = System::Drawing::SystemColors::Control;
			this->gbTax->Controls->Add(this->label7);
			this->gbTax->Location = System::Drawing::Point(21, 188);
			this->gbTax->Name = L"gbTax";
			this->gbTax->Size = System::Drawing::Size(163, 50);
			this->gbTax->TabIndex = 2;
			this->gbTax->TabStop = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(29, 15);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(56, 29);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Tax";
			// 
			// gbSubtotal
			// 
			this->gbSubtotal->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->gbSubtotal->Controls->Add(this->label6);
			this->gbSubtotal->Location = System::Drawing::Point(21, 132);
			this->gbSubtotal->Name = L"gbSubtotal";
			this->gbSubtotal->Size = System::Drawing::Size(163, 50);
			this->gbSubtotal->TabIndex = 1;
			this->gbSubtotal->TabStop = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(24, 10);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(109, 29);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Subtotal";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->checkBox1->Location = System::Drawing::Point(21, 16);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(226, 36);
			this->checkBox1->TabIndex = 0;
			this->checkBox1->Text = L"Other Options";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// btnConvert
			// 
			this->btnConvert->BackColor = System::Drawing::Color::Black;
			this->btnConvert->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnConvert->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnConvert->Location = System::Drawing::Point(487, 203);
			this->btnConvert->Name = L"btnConvert";
			this->btnConvert->Size = System::Drawing::Size(200, 59);
			this->btnConvert->TabIndex = 18;
			this->btnConvert->Text = L"Convert";
			this->btnConvert->UseVisualStyleBackColor = false;
			this->btnConvert->UseWaitCursor = true;
			this->btnConvert->Click += gcnew System::EventHandler(this, &MyForm::btnConvert_Click);
			// 
			// groupBox6
			// 
			this->groupBox6->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->groupBox6->Controls->Add(this->tabControl1);
			this->groupBox6->Location = System::Drawing::Point(739, 140);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(599, 531);
			this->groupBox6->TabIndex = 6;
			this->groupBox6->TabStop = false;
			this->groupBox6->UseWaitCursor = true;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(6, 2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(564, 523);
			this->tabControl1->TabIndex = 0;
			this->tabControl1->UseWaitCursor = true;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::DarkGray;
			this->tabPage1->Controls->Add(this->lblRoute);
			this->tabPage1->Controls->Add(this->gbDate);
			this->tabPage1->Controls->Add(this->gbTime);
			this->tabPage1->Controls->Add(this->lblRefNo);
			this->tabPage1->Controls->Add(this->lblPrice);
			this->tabPage1->Controls->Add(this->lblTo);
			this->tabPage1->Controls->Add(this->lblFrom);
			this->tabPage1->Controls->Add(this->lblChild);
			this->tabPage1->Controls->Add(this->lblAdult);
			this->tabPage1->Controls->Add(this->lblTicket);
			this->tabPage1->Controls->Add(this->lblClass);
			this->tabPage1->Controls->Add(this->button3);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->TOTAL);
			this->tabPage1->Controls->Add(this->groupBox35);
			this->tabPage1->Controls->Add(this->groupBox34);
			this->tabPage1->Controls->Add(this->groupBox31);
			this->tabPage1->Controls->Add(this->groupBox26);
			this->tabPage1->Controls->Add(this->gbPrice);
			this->tabPage1->Controls->Add(this->groupBox24);
			this->tabPage1->Controls->Add(this->groupBox22);
			this->tabPage1->Controls->Add(this->groupBox17);
			this->tabPage1->Controls->Add(this->groupBox16);
			this->tabPage1->Controls->Add(this->groupBox15);
			this->tabPage1->Controls->Add(this->groupBox14);
			this->tabPage1->Controls->Add(this->groupBox13);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(556, 494);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Booking";
			this->tabPage1->UseWaitCursor = true;
			// 
			// lblRoute
			// 
			this->lblRoute->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblRoute->Location = System::Drawing::Point(414, 394);
			this->lblRoute->Multiline = true;
			this->lblRoute->Name = L"lblRoute";
			this->lblRoute->Size = System::Drawing::Size(132, 50);
			this->lblRoute->TabIndex = 31;
			this->lblRoute->UseWaitCursor = true;
			// 
			// gbDate
			// 
			this->gbDate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gbDate->Location = System::Drawing::Point(285, 394);
			this->gbDate->Multiline = true;
			this->gbDate->Name = L"gbDate";
			this->gbDate->Size = System::Drawing::Size(123, 50);
			this->gbDate->TabIndex = 30;
			this->gbDate->UseWaitCursor = true;
			// 
			// gbTime
			// 
			this->gbTime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gbTime->Location = System::Drawing::Point(156, 394);
			this->gbTime->Multiline = true;
			this->gbTime->Name = L"gbTime";
			this->gbTime->Size = System::Drawing::Size(123, 50);
			this->gbTime->TabIndex = 29;
			this->gbTime->UseWaitCursor = true;
			// 
			// lblRefNo
			// 
			this->lblRefNo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblRefNo->Location = System::Drawing::Point(25, 394);
			this->lblRefNo->Multiline = true;
			this->lblRefNo->Name = L"lblRefNo";
			this->lblRefNo->Size = System::Drawing::Size(125, 50);
			this->lblRefNo->TabIndex = 28;
			this->lblRefNo->UseWaitCursor = true;
			// 
			// lblPrice
			// 
			this->lblPrice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPrice->Location = System::Drawing::Point(285, 288);
			this->lblPrice->Multiline = true;
			this->lblPrice->Name = L"lblPrice";
			this->lblPrice->Size = System::Drawing::Size(123, 46);
			this->lblPrice->TabIndex = 27;
			this->lblPrice->UseWaitCursor = true;
			// 
			// lblTo
			// 
			this->lblTo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTo->Location = System::Drawing::Point(285, 237);
			this->lblTo->Multiline = true;
			this->lblTo->Name = L"lblTo";
			this->lblTo->Size = System::Drawing::Size(123, 46);
			this->lblTo->TabIndex = 26;
			this->lblTo->UseWaitCursor = true;
			// 
			// lblFrom
			// 
			this->lblFrom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblFrom->Location = System::Drawing::Point(285, 187);
			this->lblFrom->Multiline = true;
			this->lblFrom->Name = L"lblFrom";
			this->lblFrom->Size = System::Drawing::Size(123, 46);
			this->lblFrom->TabIndex = 23;
			this->lblFrom->UseWaitCursor = true;
			// 
			// lblChild
			// 
			this->lblChild->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblChild->Location = System::Drawing::Point(413, 132);
			this->lblChild->Multiline = true;
			this->lblChild->Name = L"lblChild";
			this->lblChild->Size = System::Drawing::Size(126, 50);
			this->lblChild->TabIndex = 25;
			this->lblChild->UseWaitCursor = true;
			// 
			// lblAdult
			// 
			this->lblAdult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAdult->Location = System::Drawing::Point(285, 132);
			this->lblAdult->Multiline = true;
			this->lblAdult->Name = L"lblAdult";
			this->lblAdult->Size = System::Drawing::Size(123, 50);
			this->lblAdult->TabIndex = 24;
			this->lblAdult->UseWaitCursor = true;
			// 
			// lblTicket
			// 
			this->lblTicket->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTicket->Location = System::Drawing::Point(156, 132);
			this->lblTicket->Multiline = true;
			this->lblTicket->Name = L"lblTicket";
			this->lblTicket->Size = System::Drawing::Size(125, 50);
			this->lblTicket->TabIndex = 23;
			this->lblTicket->UseWaitCursor = true;
			// 
			// lblClass
			// 
			this->lblClass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblClass->Location = System::Drawing::Point(17, 132);
			this->lblClass->Multiline = true;
			this->lblClass->Name = L"lblClass";
			this->lblClass->Size = System::Drawing::Size(133, 50);
			this->lblClass->TabIndex = 22;
			this->lblClass->UseWaitCursor = true;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Black;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button3->Location = System::Drawing::Point(423, 456);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(123, 36);
			this->button3->TabIndex = 12;
			this->button3->Text = L"Exit";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->UseWaitCursor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Black;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button2->Location = System::Drawing::Point(285, 456);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(123, 36);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Clear";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->UseWaitCursor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Black;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->Location = System::Drawing::Point(156, 456);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(123, 36);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Print";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->UseWaitCursor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// TOTAL
			// 
			this->TOTAL->BackColor = System::Drawing::Color::Black;
			this->TOTAL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TOTAL->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->TOTAL->Location = System::Drawing::Point(6, 456);
			this->TOTAL->Name = L"TOTAL";
			this->TOTAL->Size = System::Drawing::Size(142, 36);
			this->TOTAL->TabIndex = 9;
			this->TOTAL->Text = L"Total";
			this->TOTAL->UseVisualStyleBackColor = false;
			this->TOTAL->UseWaitCursor = true;
			this->TOTAL->Click += gcnew System::EventHandler(this, &MyForm::TOTAL_Click);
			// 
			// groupBox35
			// 
			this->groupBox35->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->groupBox35->Controls->Add(this->label17);
			this->groupBox35->Location = System::Drawing::Point(25, 342);
			this->groupBox35->Name = L"groupBox35";
			this->groupBox35->Size = System::Drawing::Size(123, 46);
			this->groupBox35->TabIndex = 7;
			this->groupBox35->TabStop = false;
			this->groupBox35->UseWaitCursor = true;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(6, 12);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(116, 32);
			this->label17->TabIndex = 0;
			this->label17->Text = L"Ref No.";
			this->label17->UseWaitCursor = true;
			// 
			// groupBox34
			// 
			this->groupBox34->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->groupBox34->Controls->Add(this->label16);
			this->groupBox34->Location = System::Drawing::Point(414, 342);
			this->groupBox34->Name = L"groupBox34";
			this->groupBox34->Size = System::Drawing::Size(132, 46);
			this->groupBox34->TabIndex = 8;
			this->groupBox34->TabStop = false;
			this->groupBox34->UseWaitCursor = true;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(9, 12);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(95, 32);
			this->label16->TabIndex = 0;
			this->label16->Text = L"Route";
			this->label16->UseWaitCursor = true;
			// 
			// groupBox31
			// 
			this->groupBox31->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->groupBox31->Controls->Add(this->label30);
			this->groupBox31->Location = System::Drawing::Point(285, 340);
			this->groupBox31->Name = L"groupBox31";
			this->groupBox31->Size = System::Drawing::Size(123, 46);
			this->groupBox31->TabIndex = 7;
			this->groupBox31->TabStop = false;
			this->groupBox31->UseWaitCursor = true;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->Location = System::Drawing::Point(19, 11);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(78, 32);
			this->label30->TabIndex = 0;
			this->label30->Text = L"Date";
			this->label30->UseWaitCursor = true;
			// 
			// groupBox26
			// 
			this->groupBox26->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->groupBox26->Controls->Add(this->label24);
			this->groupBox26->Location = System::Drawing::Point(156, 340);
			this->groupBox26->Name = L"groupBox26";
			this->groupBox26->Size = System::Drawing::Size(123, 46);
			this->groupBox26->TabIndex = 5;
			this->groupBox26->TabStop = false;
			this->groupBox26->UseWaitCursor = true;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(9, 12);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(81, 32);
			this->label24->TabIndex = 0;
			this->label24->Text = L"Time";
			this->label24->UseWaitCursor = true;
			// 
			// gbPrice
			// 
			this->gbPrice->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->gbPrice->Controls->Add(this->label23);
			this->gbPrice->Location = System::Drawing::Point(156, 288);
			this->gbPrice->Name = L"gbPrice";
			this->gbPrice->Size = System::Drawing::Size(123, 46);
			this->gbPrice->TabIndex = 5;
			this->gbPrice->TabStop = false;
			this->gbPrice->UseWaitCursor = true;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(9, 12);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(84, 32);
			this->label23->TabIndex = 0;
			this->label23->Text = L"Price";
			this->label23->UseWaitCursor = true;
			// 
			// groupBox24
			// 
			this->groupBox24->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->groupBox24->Controls->Add(this->label22);
			this->groupBox24->Location = System::Drawing::Point(156, 236);
			this->groupBox24->Name = L"groupBox24";
			this->groupBox24->Size = System::Drawing::Size(123, 46);
			this->groupBox24->TabIndex = 5;
			this->groupBox24->TabStop = false;
			this->groupBox24->UseWaitCursor = true;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(11, 11);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(49, 32);
			this->label22->TabIndex = 0;
			this->label22->Text = L"To";
			this->label22->UseWaitCursor = true;
			// 
			// groupBox22
			// 
			this->groupBox22->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->groupBox22->Controls->Add(this->label20);
			this->groupBox22->Location = System::Drawing::Point(156, 187);
			this->groupBox22->Name = L"groupBox22";
			this->groupBox22->Size = System::Drawing::Size(125, 43);
			this->groupBox22->TabIndex = 4;
			this->groupBox22->TabStop = false;
			this->groupBox22->UseWaitCursor = true;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(11, 11);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(83, 32);
			this->label20->TabIndex = 0;
			this->label20->Text = L"From";
			this->label20->UseWaitCursor = true;
			// 
			// groupBox17
			// 
			this->groupBox17->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->groupBox17->Controls->Add(this->childtab);
			this->groupBox17->Location = System::Drawing::Point(414, 80);
			this->groupBox17->Name = L"groupBox17";
			this->groupBox17->Size = System::Drawing::Size(125, 46);
			this->groupBox17->TabIndex = 4;
			this->groupBox17->TabStop = false;
			this->groupBox17->UseWaitCursor = true;
			// 
			// childtab
			// 
			this->childtab->AutoSize = true;
			this->childtab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->childtab->Location = System::Drawing::Point(9, 12);
			this->childtab->Name = L"childtab";
			this->childtab->Size = System::Drawing::Size(74, 29);
			this->childtab->TabIndex = 0;
			this->childtab->Text = L"Child";
			this->childtab->UseWaitCursor = true;
			// 
			// groupBox16
			// 
			this->groupBox16->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->groupBox16->Controls->Add(this->adulttab);
			this->groupBox16->Location = System::Drawing::Point(285, 80);
			this->groupBox16->Name = L"groupBox16";
			this->groupBox16->Size = System::Drawing::Size(123, 46);
			this->groupBox16->TabIndex = 3;
			this->groupBox16->TabStop = false;
			this->groupBox16->UseWaitCursor = true;
			// 
			// adulttab
			// 
			this->adulttab->AutoSize = true;
			this->adulttab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->adulttab->Location = System::Drawing::Point(9, 12);
			this->adulttab->Name = L"adulttab";
			this->adulttab->Size = System::Drawing::Size(72, 29);
			this->adulttab->TabIndex = 0;
			this->adulttab->Text = L"Adult";
			this->adulttab->UseWaitCursor = true;
			// 
			// groupBox15
			// 
			this->groupBox15->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->groupBox15->Controls->Add(this->label13);
			this->groupBox15->Location = System::Drawing::Point(156, 80);
			this->groupBox15->Name = L"groupBox15";
			this->groupBox15->Size = System::Drawing::Size(125, 46);
			this->groupBox15->TabIndex = 2;
			this->groupBox15->TabStop = false;
			this->groupBox15->UseWaitCursor = true;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(23, 12);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(85, 29);
			this->label13->TabIndex = 0;
			this->label13->Text = L"Ticket";
			this->label13->UseWaitCursor = true;
			// 
			// groupBox14
			// 
			this->groupBox14->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->groupBox14->Controls->Add(this->classtab);
			this->groupBox14->Location = System::Drawing::Point(17, 80);
			this->groupBox14->Name = L"groupBox14";
			this->groupBox14->Size = System::Drawing::Size(133, 46);
			this->groupBox14->TabIndex = 1;
			this->groupBox14->TabStop = false;
			this->groupBox14->UseWaitCursor = true;
			// 
			// classtab
			// 
			this->classtab->AutoSize = true;
			this->classtab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->classtab->Location = System::Drawing::Point(29, 13);
			this->classtab->Name = L"classtab";
			this->classtab->Size = System::Drawing::Size(78, 29);
			this->classtab->TabIndex = 0;
			this->classtab->Text = L"Class";
			this->classtab->UseWaitCursor = true;
			// 
			// groupBox13
			// 
			this->groupBox13->BackColor = System::Drawing::Color::Black;
			this->groupBox13->Controls->Add(this->label11);
			this->groupBox13->Location = System::Drawing::Point(15, 6);
			this->groupBox13->Name = L"groupBox13";
			this->groupBox13->Size = System::Drawing::Size(524, 68);
			this->groupBox13->TabIndex = 0;
			this->groupBox13->TabStop = false;
			this->groupBox13->UseWaitCursor = true;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label11->Location = System::Drawing::Point(95, 12);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(326, 46);
			this->label11->TabIndex = 0;
			this->label11->Text = L"Travelling Ticket";
			this->label11->UseWaitCursor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->rtbReceipt);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(556, 494);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Receipt";
			this->tabPage2->UseVisualStyleBackColor = true;
			this->tabPage2->UseWaitCursor = true;
			// 
			// rtbReceipt
			// 
			this->rtbReceipt->Dock = System::Windows::Forms::DockStyle::Fill;
			this->rtbReceipt->Location = System::Drawing::Point(3, 3);
			this->rtbReceipt->Name = L"rtbReceipt";
			this->rtbReceipt->Size = System::Drawing::Size(550, 488);
			this->rtbReceipt->TabIndex = 0;
			this->rtbReceipt->Text = L"";
			this->rtbReceipt->UseWaitCursor = true;
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &MyForm::printDocument1_PrintPage);
			// 
			// printPreviewDialog1
			// 
			this->printPreviewDialog1->AutoScrollMargin = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->AutoScrollMinSize = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->ClientSize = System::Drawing::Size(400, 300);
			this->printPreviewDialog1->Enabled = true;
			this->printPreviewDialog1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"printPreviewDialog1.Icon")));
			this->printPreviewDialog1->Name = L"printPreviewDialog1";
			this->printPreviewDialog1->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(1350, 683);
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->gbTotal->ResumeLayout(false);
			this->gbTotal->PerformLayout();
			this->gbTax->ResumeLayout(false);
			this->gbTax->PerformLayout();
			this->gbSubtotal->ResumeLayout(false);
			this->gbSubtotal->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->groupBox35->ResumeLayout(false);
			this->groupBox35->PerformLayout();
			this->groupBox34->ResumeLayout(false);
			this->groupBox34->PerformLayout();
			this->groupBox31->ResumeLayout(false);
			this->groupBox31->PerformLayout();
			this->groupBox26->ResumeLayout(false);
			this->groupBox26->PerformLayout();
			this->gbPrice->ResumeLayout(false);
			this->gbPrice->PerformLayout();
			this->groupBox24->ResumeLayout(false);
			this->groupBox24->PerformLayout();
			this->groupBox22->ResumeLayout(false);
			this->groupBox22->PerformLayout();
			this->groupBox17->ResumeLayout(false);
			this->groupBox17->PerformLayout();
			this->groupBox16->ResumeLayout(false);
			this->groupBox16->PerformLayout();
			this->groupBox15->ResumeLayout(false);
			this->groupBox15->PerformLayout();
			this->groupBox14->ResumeLayout(false);
			this->groupBox14->PerformLayout();
			this->groupBox13->ResumeLayout(false);
			this->groupBox13->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

		double Nigerian_Naira;
		double US_Dollar;
		double Kenyan_Shilling;
		double Brazilian_Real;
		double Canadian_Dollar;
		double Indian_Rupee;
		double Philippine_Peso;
		double Euro;

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		//ooooooooooooooooooooooook
		DateTime iDate = DateTime::Now;
		gbDate->Text = iDate.ToLongDateString();
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void groupBox9_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnCC_Click(System::Object^ sender, System::EventArgs^ e) 
{
	btnCC->Visible = false;
}
private: System::Void btnClose_Click(System::Object^ sender, System::EventArgs^ e) 
{
	btnCC->Visible = true;

	cmbCC->Text = "Chooooooose One...";

	txtCC->Text = "" ;
	txt2CC->Text = "" ;
}
private: System::Void groupBox5_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e)
{
	DateTime iTime = DateTime::Now;
	gbTime->Text = iTime.ToLongTimeString();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) 
{
	cmbCC->Text = "Chooooooose One...";
	txtCC->Text = "";
	txt2CC->Text = "";
}
private: System::Void btnConvert_Click(System::Object^ sender, System::EventArgs^ e) 
{
	 Nigerian_Naira = 3.22;
	 US_Dollar = 0.0036;
	 Kenyan_Shilling = 0.56;
	 Brazilian_Real = 0.017441;
	 Canadian_Dollar = 0.0048;
	 Indian_Rupee = 0.30;
	 Philippine_Peso = 0.20;
	 Euro = 0.0033;

	 double Pakistani_pkr = Convert::ToInt32(txtCC->Text);

	 if (cmbCC->Text == "Nigeria")
	 {
		 txt2CC->Text = System::Convert::ToString(Pakistani_pkr * Nigerian_Naira) + " N " ;
	 }


	 if (cmbCC->Text == "USA")
	 {
		 txt2CC->Text =  System::Convert::ToString(Pakistani_pkr * US_Dollar) + " $ " ;
	 }


	 if (cmbCC->Text == "Kenyan")
	 {
		 txt2CC->Text =  System::Convert::ToString(Pakistani_pkr * Kenyan_Shilling) + " KEN " ;
	 }


	 if (cmbCC->Text == "Brazil")
	 {
		 txt2CC->Text =  System::Convert::ToString(Pakistani_pkr * Brazilian_Real) + "BRA " ;
	 }


	 if (cmbCC->Text == "Canada")
	 {
		 txt2CC->Text =  System::Convert::ToString(Pakistani_pkr * Canadian_Dollar) + " C$ "  ;
	 }

	 if (cmbCC->Text == "India")
	 {
		 txt2CC->Text =  System::Convert::ToString(Pakistani_pkr * Indian_Rupee) + " Rupee "  ;
	 }

	 if (cmbCC->Text == "Philippine")
	 {
		 txt2CC->Text =  System::Convert::ToString(Pakistani_pkr * Philippine_Peso) + " Peso "  ;
	 }

	 if (cmbCC->Text == "Euro")
	 {
		 txt2CC->Text =   System::Convert::ToString(Pakistani_pkr * Euro) + " E";
	 }
}
private: System::Void TOTAL_Click(System::Object^ sender, System::EventArgs^ e) 
{

	const double Islamabad = 23.9;
	const double EIslamabad = 28.9;
	const double FSIslamabad = 38.9;
	const double Karachi = 67.23;
	const double EKarachi = 72.23;
	const double FSKarachi = 77.23;
	const double Lahore = 78;
	const double ELahore = 83;
	const double FSLahore = 88;
	const double Sialkot = 56;
	const double ESialkot = 61;
	const double FSSialkot = 66;
	const double Quetta = 76;
	const double EQuetta = 81;
	const double FSQuetta = 86;
	const double Tax = 19.75;

	double TotalCost;

	Random^ rand1 = gcnew Random;
	int iRand = rand1->Next(20371, 45990);
	lblRefNo->Text = Convert::ToString(iRand);

	if ((cmbDestination->Text == "Islamabad") && (rbStandard->Checked) && (rbSingle->Checked) && (rbAdultYes->Checked))

	{
		lblSubtotal->Text = String::Format("{0:C2}", (Islamabad));
		TotalCost = (Islamabad * Tax) / 100;
		lblTax->Text = String::Format("{0:C2}", (TotalCost));
		lblTotal->Text = String::Format("{0:C2}", (Islamabad + TotalCost));
		lblPrice -> Text =( lblTotal->Text);
		lblFrom->Text = "Multan";
		lblTo->Text = (cmbDestination->Text);
		lblClass->Text = (rbStandard->Text);
		lblTicket->Text = (rbSingle->Text);
		lblAdult->Text = (rbAdultYes->Text);
		lblRoute->Text = "G MAPS";
	}


	else if ((cmbDestination->Text == "Islamabad") && (rbStandard->Checked) && (rbSingle->Checked) && (rbChildYes->Checked))

	{
		lblSubtotal->Text = String::Format("{0:C2}", (Islamabad));
		TotalCost = (Islamabad * Tax) / 100;
		lblTax->Text = String::Format("{0:C2}", (TotalCost));
		lblTotal->Text = String::Format("{0:C2}", (Islamabad + TotalCost));
		lblPrice->Text = (lblTotal->Text);
		lblFrom->Text = "Multan";
		lblTo->Text = (cmbDestination->Text);
		lblClass->Text = (rbStandard->Text);
		lblTicket->Text = (rbSingle->Text);
		lblChild->Text = (rbChildYes->Text);
		lblRoute->Text = "G MAPS";
	}


	else if ((cmbDestination->Text == "Islamabad") && (rbStandard->Checked) && (rbReturn->Checked) && (rbChildYes->Checked))

	{
		lblSubtotal->Text = String::Format("{0:C2}", (Islamabad));
		TotalCost = (Islamabad * Tax) / 100;
		lblTax->Text = String::Format("{0:C2}", (TotalCost));
		lblTotal->Text = String::Format("{0:C2}", (Islamabad + TotalCost));
		lblPrice->Text = (lblTotal->Text);
		lblFrom->Text = "Multan";
		lblTo->Text = (cmbDestination->Text);
		lblClass->Text = (rbStandard->Text);
		lblTicket->Text = (rbSingle->Text);
		lblChild->Text = (rbChildYes->Text);
		lblRoute->Text = "G MAPS";
	}


	else if ((cmbDestination->Text == "Islamabad") && (rbStandard->Checked) && (rbReturn->Checked) && (rbAdultYes->Checked))

	{
		lblSubtotal->Text = String::Format("{0:C2}", (Islamabad));
		TotalCost = (Islamabad * Tax) / 100;
		lblTax->Text = String::Format("{0:C2}", (TotalCost));
		lblTotal->Text = String::Format("{0:C2}", (Islamabad + TotalCost));
		lblPrice->Text = (lblTotal->Text);
		lblFrom->Text = "Multan";
		lblTo->Text = (cmbDestination->Text);
		lblClass->Text = (rbStandard->Text);
		lblTicket->Text = (rbSingle->Text);
		lblAdult->Text = (rbAdultYes->Text);
		lblRoute->Text = "G MAPS";
	}


	else if ((cmbDestination->Text == "Islamabad") && (rbEconomy->Checked) && (rbReturn->Checked) && (rbAdultYes->Checked))

	{
		lblSubtotal->Text = String::Format("{0:C2}", (Islamabad));
		TotalCost = (Islamabad * Tax) / 100;
		lblTax->Text = String::Format("{0:C2}", (TotalCost));
		lblTotal->Text = String::Format("{0:C2}", (Islamabad + TotalCost));
		lblPrice->Text = (lblTotal->Text);
		lblFrom->Text = "Multan";
		lblTo->Text = (cmbDestination->Text);
		lblClass->Text = (rbStandard->Text);
		lblTicket->Text = (rbSingle->Text);
		lblAdult->Text = (rbAdultYes->Text);
		lblRoute->Text = "G MAPS";
	}


	else if ((cmbDestination->Text == "Islamabad") && (rbEconomy->Checked) && (rbReturn->Checked) && (rbChildYes->Checked))

	{
		lblSubtotal->Text = String::Format("{0:C2}", (Islamabad));
		TotalCost = (Islamabad * Tax) / 100;
		lblTax->Text = String::Format("{0:C2}", (TotalCost));
		lblTotal->Text = String::Format("{0:C2}", (Islamabad + TotalCost));
		lblPrice->Text = (lblTotal->Text);
		lblFrom->Text = "Multan";
		lblTo->Text = (cmbDestination->Text);
		lblClass->Text = (rbStandard->Text);
		lblTicket->Text = (rbSingle->Text);
		lblChild->Text = (rbChildYes->Text);
		lblRoute->Text = "G MAPS";
	}


	else if ((cmbDestination->Text == "Islamabad") && (rbEconomy->Checked) && (rbSingle->Checked) && (rbChildYes->Checked))

	{
		lblSubtotal->Text = String::Format("{0:C2}", (Islamabad));
		TotalCost = (Islamabad * Tax) / 100;
		lblTax->Text = String::Format("{0:C2}", (TotalCost));
		lblTotal->Text = String::Format("{0:C2}", (Islamabad + TotalCost));
		lblPrice->Text = (lblTotal->Text);
		lblFrom->Text = "Multan";
		lblTo->Text = (cmbDestination->Text);
		lblClass->Text = (rbStandard->Text);
		lblTicket->Text = (rbSingle->Text);
		lblChild->Text = (rbChildYes->Text);
		lblRoute->Text = "G MAPS";
		}

		if ((cmbDestination->Text == "Islamabad") && (rbEconomy->Checked) && (rbSingle->Checked) && (rbAdultYes->Checked))

		{
			lblSubtotal->Text = String::Format("{0:C2}", (Islamabad));
			TotalCost = (Islamabad * Tax) / 100;
			lblTax->Text = String::Format("{0:C2}", (TotalCost));
			lblTotal->Text = String::Format("{0:C2}", (Islamabad + TotalCost));
			lblPrice->Text = (lblTotal->Text);
			lblFrom->Text = "Multan";
			lblTo->Text = (cmbDestination->Text);
			lblClass->Text = (rbStandard->Text);
			lblTicket->Text = (rbSingle->Text);
			lblAdult->Text = (rbAdultYes->Text);
			lblRoute->Text = "G MAPS";
		}



		if ((cmbDestination->Text == "Islamabad") && (rbBusiness->Checked) && (rbSingle->Checked) && (rbAdultYes->Checked))

		{
			lblSubtotal->Text = String::Format("{0:C2}", (Islamabad));
			TotalCost = (Islamabad * Tax) / 100;
			lblTax->Text = String::Format("{0:C2}", (TotalCost));
			lblTotal->Text = String::Format("{0:C2}", (Islamabad + TotalCost));
			lblPrice->Text = (lblTotal->Text);
			lblFrom->Text = "Multan";
			lblTo->Text = (cmbDestination->Text);
			lblClass->Text = (rbStandard->Text);
			lblTicket->Text = (rbSingle->Text);
			lblAdult->Text = (rbAdultYes->Text);
			lblRoute->Text = "G MAPS";
		}


		else if ((cmbDestination->Text == "Islamabad") && (rbBusiness->Checked) && (rbSingle->Checked) && (rbChildYes->Checked))

		{
			lblSubtotal->Text = String::Format("{0:C2}", (Islamabad));
			TotalCost = (Islamabad * Tax) / 100;
			lblTax->Text = String::Format("{0:C2}", (TotalCost));
			lblTotal->Text = String::Format("{0:C2}", (Islamabad + TotalCost));
			lblPrice->Text = (lblTotal->Text);
			lblFrom->Text = "Multan";
			lblTo->Text = (cmbDestination->Text);
			lblClass->Text = (rbStandard->Text);
			lblTicket->Text = (rbSingle->Text);
			lblChild->Text = (rbChildYes->Text);
			lblRoute->Text = "G MAPS";
		}




		else if ((cmbDestination->Text == "Islamabad") && (rbBusiness->Checked) && (rbReturn->Checked) && (rbChildYes->Checked))

		{
			lblSubtotal->Text = String::Format("{0:C2}", (Islamabad));
			TotalCost = (Islamabad * Tax) / 100;
			lblTax->Text = String::Format("{0:C2}", (TotalCost));
			lblTotal->Text = String::Format("{0:C2}", (Islamabad + TotalCost));
			lblPrice->Text = (lblTotal->Text);
			lblFrom->Text = "Multan";
			lblTo->Text = (cmbDestination->Text);
			lblClass->Text = (rbStandard->Text);
			lblTicket->Text = (rbSingle->Text);
			lblChild->Text = (rbChildYes->Text);
			lblRoute->Text = "G MAPS";
		}



		else if ((cmbDestination->Text == "Islamabad") && (rbBusiness->Checked) && (rbReturn->Checked) && (rbAdultYes->Checked))

		{
			lblSubtotal->Text = String::Format("{0:C2}", (Islamabad));
			TotalCost = (Islamabad * Tax) / 100;
			lblTax->Text = String::Format("{0:C2}", (TotalCost));
			lblTotal->Text = String::Format("{0:C2}", (Islamabad + TotalCost));
			lblPrice->Text = (lblTotal->Text);
			lblFrom->Text = "Multan";
			lblTo->Text = (cmbDestination->Text);
			lblClass->Text = (rbStandard->Text);
			lblTicket->Text = (rbSingle->Text);
			lblAdult->Text = (rbAdultYes->Text);
			lblRoute->Text = "G MAPS";
		}

		if ((cmbDestination->Text == "Lahore") && (rbStandard->Checked) && (rbSingle->Checked) && (rbAdultYes->Checked))

		{
			lblSubtotal->Text = String::Format("{0:C2}", (Islamabad));
			TotalCost = (Islamabad * Tax) / 100;
			lblTax->Text = String::Format("{0:C2}", (TotalCost));
			lblTotal->Text = String::Format("{0:C2}", (Islamabad + TotalCost));
			lblPrice->Text = (lblTotal->Text);
			lblFrom->Text = "Multan";
			lblTo->Text = (cmbDestination->Text);
			lblClass->Text = (rbStandard->Text);
			lblTicket->Text = (rbSingle->Text);
			lblAdult->Text = (rbAdultYes->Text);
			lblRoute->Text = "G MAPS";
		}


		else if ((cmbDestination->Text == "Lahore") && (rbStandard->Checked) && (rbSingle->Checked) && (rbChildYes->Checked))

		{
			lblSubtotal->Text = String::Format("{0:C2}", (Islamabad));
			TotalCost = (Islamabad * Tax) / 100;
			lblTax->Text = String::Format("{0:C2}", (TotalCost));
			lblTotal->Text = String::Format("{0:C2}", (Islamabad + TotalCost));
			lblPrice->Text = (lblTotal->Text);
			lblFrom->Text = "Multan";
			lblTo->Text = (cmbDestination->Text);
			lblClass->Text = (rbStandard->Text);
			lblTicket->Text = (rbSingle->Text);
			lblChild->Text = (rbChildYes->Text);
			lblRoute->Text = "G MAPS";
		}


		else if ((cmbDestination->Text == "Lahore") && (rbStandard->Checked) && (rbReturn->Checked) && (rbChildYes->Checked))

		{
			lblSubtotal->Text = String::Format("{0:C2}", (Islamabad));
			TotalCost = (Islamabad * Tax) / 100;
			lblTax->Text = String::Format("{0:C2}", (TotalCost));
			lblTotal->Text = String::Format("{0:C2}", (Islamabad + TotalCost));
			lblPrice->Text = (lblTotal->Text);
			lblFrom->Text = "Multan";
			lblTo->Text = (cmbDestination->Text);
			lblClass->Text = (rbStandard->Text);
			lblTicket->Text = (rbSingle->Text);
			lblChild->Text = (rbChildYes->Text);
			lblRoute->Text = "G MAPS";
		}


		else if ((cmbDestination->Text == "Lahore") && (rbStandard->Checked) && (rbReturn->Checked) && (rbAdultYes->Checked))

		{
			lblSubtotal->Text = String::Format("{0:C2}", (Islamabad));
			TotalCost = (Islamabad * Tax) / 100;
			lblTax->Text = String::Format("{0:C2}", (TotalCost));
			lblTotal->Text = String::Format("{0:C2}", (Islamabad + TotalCost));
			lblPrice->Text = (lblTotal->Text);
			lblFrom->Text = "Multan";
			lblTo->Text = (cmbDestination->Text);
			lblClass->Text = (rbStandard->Text);
			lblTicket->Text = (rbSingle->Text);
			lblAdult->Text = (rbAdultYes->Text);
			lblRoute->Text = "G MAPS";
		}


		else if ((cmbDestination->Text == "Lahore") && (rbEconomy->Checked) && (rbReturn->Checked) && (rbAdultYes->Checked))

		{
			lblSubtotal->Text = String::Format("{0:C2}", (Islamabad));
			TotalCost = (Islamabad * Tax) / 100;
			lblTax->Text = String::Format("{0:C2}", (TotalCost));
			lblTotal->Text = String::Format("{0:C2}", (Islamabad + TotalCost));
			lblPrice->Text = (lblTotal->Text);
			lblFrom->Text = "Multan";
			lblTo->Text = (cmbDestination->Text);
			lblClass->Text = (rbStandard->Text);
			lblTicket->Text = (rbSingle->Text);
			lblAdult->Text = (rbAdultYes->Text);
			lblRoute->Text = "G MAPS";
		}


		else if ((cmbDestination->Text == "Lahore") && (rbEconomy->Checked) && (rbReturn->Checked) && (rbChildYes->Checked))

		{
			lblSubtotal->Text = String::Format("{0:C2}", (Islamabad));
			TotalCost = (Islamabad * Tax) / 100;
			lblTax->Text = String::Format("{0:C2}", (TotalCost));
			lblTotal->Text = String::Format("{0:C2}", (Islamabad + TotalCost));
			lblPrice->Text = (lblTotal->Text);
			lblFrom->Text = "Multan";
			lblTo->Text = (cmbDestination->Text);
			lblClass->Text = (rbStandard->Text);
			lblTicket->Text = (rbSingle->Text);
			lblChild->Text = (rbChildYes->Text);
			lblRoute->Text = "G MAPS";
		}


		else if ((cmbDestination->Text == "Lahore") && (rbEconomy->Checked) && (rbSingle->Checked) && (rbChildYes->Checked))

		{
			lblSubtotal->Text = String::Format("{0:C2}", (Islamabad));
			TotalCost = (Islamabad * Tax) / 100;
			lblTax->Text = String::Format("{0:C2}", (TotalCost));
			lblTotal->Text = String::Format("{0:C2}", (Islamabad + TotalCost));
			lblPrice->Text = (lblTotal->Text);
			lblFrom->Text = "Multan";
			lblTo->Text = (cmbDestination->Text);
			lblClass->Text = (rbStandard->Text);
			lblTicket->Text = (rbSingle->Text);
			lblChild->Text = (rbChildYes->Text);
			lblRoute->Text = "G MAPS";
		}

		if ((cmbDestination->Text == "Lahore") && (rbEconomy->Checked) && (rbSingle->Checked) && (rbAdultYes->Checked))

		{
			lblSubtotal->Text = String::Format("{0:C2}", (Islamabad));
			TotalCost = (Islamabad * Tax) / 100;
			lblTax->Text = String::Format("{0:C2}", (TotalCost));
			lblTotal->Text = String::Format("{0:C2}", (Islamabad + TotalCost));
			lblPrice->Text = (lblTotal->Text);
			lblFrom->Text = "Multan";
			lblTo->Text = (cmbDestination->Text);
			lblClass->Text = (rbStandard->Text);
			lblTicket->Text = (rbSingle->Text);
			lblAdult->Text = (rbAdultYes->Text);
			lblRoute->Text = "G MAPS";
		}



		if ((cmbDestination->Text == "Lahore") && (rbBusiness->Checked) && (rbSingle->Checked) && (rbAdultYes->Checked))

		{
			lblSubtotal->Text = String::Format("{0:C2}", (Islamabad));
			TotalCost = (Islamabad * Tax) / 100;
			lblTax->Text = String::Format("{0:C2}", (TotalCost));
			lblTotal->Text = String::Format("{0:C2}", (Islamabad + TotalCost));
			lblPrice->Text = (lblTotal->Text);
			lblFrom->Text = "Multan";
			lblTo->Text = (cmbDestination->Text);
			lblClass->Text = (rbStandard->Text);
			lblTicket->Text = (rbSingle->Text);
			lblAdult->Text = (rbAdultYes->Text);
			lblRoute->Text = "G MAPS";
		}


		else if ((cmbDestination->Text == "Lahore") && (rbBusiness->Checked) && (rbSingle->Checked) && (rbChildYes->Checked))

		{
			lblSubtotal->Text = String::Format("{0:C2}", (Islamabad));
			TotalCost = (Islamabad * Tax) / 100;
			lblTax->Text = String::Format("{0:C2}", (TotalCost));
			lblTotal->Text = String::Format("{0:C2}", (Islamabad + TotalCost));
			lblPrice->Text = (lblTotal->Text);
			lblFrom->Text = "Multan";
			lblTo->Text = (cmbDestination->Text);
			lblClass->Text = (rbStandard->Text);
			lblTicket->Text = (rbSingle->Text);
			lblChild->Text = (rbChildYes->Text);
			lblRoute->Text = "G MAPS";
		}




		else if ((cmbDestination->Text == "Lahore") && (rbBusiness->Checked) && (rbReturn->Checked) && (rbChildYes->Checked))

		{
			lblSubtotal->Text = String::Format("{0:C2}", (Islamabad));
			TotalCost = (Islamabad * Tax) / 100;
			lblTax->Text = String::Format("{0:C2}", (TotalCost));
			lblTotal->Text = String::Format("{0:C2}", (Islamabad + TotalCost));
			lblPrice->Text = (lblTotal->Text);
			lblFrom->Text = "Multan";
			lblTo->Text = (cmbDestination->Text);
			lblClass->Text = (rbStandard->Text);
			lblTicket->Text = (rbSingle->Text);
			lblChild->Text = (rbChildYes->Text);
			lblRoute->Text = "G MAPS";
		}



		else if ((cmbDestination->Text == "Lahore") && (rbBusiness->Checked) && (rbReturn->Checked) && (rbAdultYes->Checked))

		{
			lblSubtotal->Text = String::Format("{0:C2}", (Islamabad));
			TotalCost = (Islamabad * Tax) / 100;
			lblTax->Text = String::Format("{0:C2}", (TotalCost));
			lblTotal->Text = String::Format("{0:C2}", (Islamabad + TotalCost));
			lblPrice->Text = (lblTotal->Text);
			lblFrom->Text = "Multan";
			lblTo->Text = (cmbDestination->Text);
			lblClass->Text = (rbStandard->Text);
			lblTicket->Text = (rbSingle->Text);
			lblAdult->Text = (rbAdultYes->Text);
			lblRoute->Text = "G MAPS";
		}




		//   QUETTA


		if ((cmbDestination->Text == "Quetta") && (rbStandard->Checked) && (rbSingle->Checked) && (rbAdultYes->Checked))

		{
			lblSubtotal->Text = String::Format("{0:C2}", (Islamabad));
			TotalCost = (Islamabad * Tax) / 100;
			lblTax->Text = String::Format("{0:C2}", (TotalCost));
			lblTotal->Text = String::Format("{0:C2}", (Islamabad + TotalCost));
			lblPrice->Text = (lblTotal->Text);
			lblFrom->Text = "Multan";
			lblTo->Text = (cmbDestination->Text);
			lblClass->Text = (rbStandard->Text);
			lblTicket->Text = (rbSingle->Text);
			lblAdult->Text = (rbAdultYes->Text);
			lblRoute->Text = "G MAPS";
		}


		else if ((cmbDestination->Text == "Quetta") && (rbStandard->Checked) && (rbSingle->Checked) && (rbChildYes->Checked))

		{
			lblSubtotal->Text = String::Format("{0:C2}", (Islamabad));
			TotalCost = (Islamabad * Tax) / 100;
			lblTax->Text = String::Format("{0:C2}", (TotalCost));
			lblTotal->Text = String::Format("{0:C2}", (Islamabad + TotalCost));
			lblPrice->Text = (lblTotal->Text);
			lblFrom->Text = "Multan";
			lblTo->Text = (cmbDestination->Text);
			lblClass->Text = (rbStandard->Text);
			lblTicket->Text = (rbSingle->Text);
			lblChild->Text = (rbChildYes->Text);
			lblRoute->Text = "G MAPS";
		}


		else if ((cmbDestination->Text == "Quetta") && (rbStandard->Checked) && (rbReturn->Checked) && (rbChildYes->Checked))

		{
			lblSubtotal->Text = String::Format("{0:C2}", (Islamabad));
			TotalCost = (Islamabad * Tax) / 100;
			lblTax->Text = String::Format("{0:C2}", (TotalCost));
			lblTotal->Text = String::Format("{0:C2}", (Islamabad + TotalCost));
			lblPrice->Text = (lblTotal->Text);
			lblFrom->Text = "Multan";
			lblTo->Text = (cmbDestination->Text);
			lblClass->Text = (rbStandard->Text);
			lblTicket->Text = (rbSingle->Text);
			lblChild->Text = (rbChildYes->Text);
			lblRoute->Text = "G MAPS";
		}


		else if ((cmbDestination->Text == "Quetta") && (rbStandard->Checked) && (rbReturn->Checked) && (rbAdultYes->Checked))

		{
			lblSubtotal->Text = String::Format("{0:C2}", (Islamabad));
			TotalCost = (Islamabad * Tax) / 100;
			lblTax->Text = String::Format("{0:C2}", (TotalCost));
			lblTotal->Text = String::Format("{0:C2}", (Islamabad + TotalCost));
			lblPrice->Text = (lblTotal->Text);
			lblFrom->Text = "Multan";
			lblTo->Text = (cmbDestination->Text);
			lblClass->Text = (rbStandard->Text);
			lblTicket->Text = (rbSingle->Text);
			lblAdult->Text = (rbAdultYes->Text);
			lblRoute->Text = "G MAPS";
		}


		else if ((cmbDestination->Text == "Quetta") && (rbEconomy->Checked) && (rbReturn->Checked) && (rbAdultYes->Checked))

		{
			lblSubtotal->Text = String::Format("{0:C2}", (Islamabad));
			TotalCost = (Islamabad * Tax) / 100;
			lblTax->Text = String::Format("{0:C2}", (TotalCost));
			lblTotal->Text = String::Format("{0:C2}", (Islamabad + TotalCost));
			lblPrice->Text = (lblTotal->Text);
			lblFrom->Text = "Multan";
			lblTo->Text = (cmbDestination->Text);
			lblClass->Text = (rbStandard->Text);
			lblTicket->Text = (rbSingle->Text);
			lblAdult->Text = (rbAdultYes->Text);
			lblRoute->Text = "G MAPS";
		}


		else if ((cmbDestination->Text == "Quetta") && (rbEconomy->Checked) && (rbReturn->Checked) && (rbChildYes->Checked))

		{
			lblSubtotal->Text = String::Format("{0:C2}", (Islamabad));
			TotalCost = (Islamabad * Tax) / 100;
			lblTax->Text = String::Format("{0:C2}", (TotalCost));
			lblTotal->Text = String::Format("{0:C2}", (Islamabad + TotalCost));
			lblPrice->Text = (lblTotal->Text);
			lblFrom->Text = "Multan";
			lblTo->Text = (cmbDestination->Text);
			lblClass->Text = (rbStandard->Text);
			lblTicket->Text = (rbSingle->Text);
			lblChild->Text = (rbChildYes->Text);
			lblRoute->Text = "G MAPS";
		}


		else if ((cmbDestination->Text == "Quetta") && (rbEconomy->Checked) && (rbSingle->Checked) && (rbChildYes->Checked))

		{
			lblSubtotal->Text = String::Format("{0:C2}", (Islamabad));
			TotalCost = (Islamabad * Tax) / 100;
			lblTax->Text = String::Format("{0:C2}", (TotalCost));
			lblTotal->Text = String::Format("{0:C2}", (Islamabad + TotalCost));
			lblPrice->Text = (lblTotal->Text);
			lblFrom->Text = "Multan";
			lblTo->Text = (cmbDestination->Text);
			lblClass->Text = (rbStandard->Text);
			lblTicket->Text = (rbSingle->Text);
			lblChild->Text = (rbChildYes->Text);
			lblRoute->Text = "G MAPS";
		}

		if ((cmbDestination->Text == "Quetta") && (rbEconomy->Checked) && (rbSingle->Checked) && (rbAdultYes->Checked))

		{
			lblSubtotal->Text = String::Format("{0:C2}", (Islamabad));
			TotalCost = (Islamabad * Tax) / 100;
			lblTax->Text = String::Format("{0:C2}", (TotalCost));
			lblTotal->Text = String::Format("{0:C2}", (Islamabad + TotalCost));
			lblPrice->Text = (lblTotal->Text);
			lblFrom->Text = "Multan";
			lblTo->Text = (cmbDestination->Text);
			lblClass->Text = (rbStandard->Text);
			lblTicket->Text = (rbSingle->Text);
			lblAdult->Text = (rbAdultYes->Text);
			lblRoute->Text = "G MAPS";
		}



		if ((cmbDestination->Text == "Quetta") && (rbBusiness->Checked) && (rbSingle->Checked) && (rbAdultYes->Checked))

		{
			lblSubtotal->Text = String::Format("{0:C2}", (Islamabad));
			TotalCost = (Islamabad * Tax) / 100;
			lblTax->Text = String::Format("{0:C2}", (TotalCost));
			lblTotal->Text = String::Format("{0:C2}", (Islamabad + TotalCost));
			lblPrice->Text = (lblTotal->Text);
			lblFrom->Text = "Multan";
			lblTo->Text = (cmbDestination->Text);
			lblClass->Text = (rbStandard->Text);
			lblTicket->Text = (rbSingle->Text);
			lblAdult->Text = (rbAdultYes->Text);
			lblRoute->Text = "G MAPS";
		}


		else if ((cmbDestination->Text == "Quetta") && (rbBusiness->Checked) && (rbSingle->Checked) && (rbChildYes->Checked))

		{
			lblSubtotal->Text = String::Format("{0:C2}", (Islamabad));
			TotalCost = (Islamabad * Tax) / 100;
			lblTax->Text = String::Format("{0:C2}", (TotalCost));
			lblTotal->Text = String::Format("{0:C2}", (Islamabad + TotalCost));
			lblPrice->Text = (lblTotal->Text);
			lblFrom->Text = "Multan";
			lblTo->Text = (cmbDestination->Text);
			lblClass->Text = (rbStandard->Text);
			lblTicket->Text = (rbSingle->Text);
			lblChild->Text = (rbChildYes->Text);
			lblRoute->Text = "G MAPS";
		}




		else if ((cmbDestination->Text == "Quetta") && (rbBusiness->Checked) && (rbReturn->Checked) && (rbChildYes->Checked))

		{
			lblSubtotal->Text = String::Format("{0:C2}", (Islamabad));
			TotalCost = (Islamabad * Tax) / 100;
			lblTax->Text = String::Format("{0:C2}", (TotalCost));
			lblTotal->Text = String::Format("{0:C2}", (Islamabad + TotalCost));
			lblPrice->Text = (lblTotal->Text);
			lblFrom->Text = "Multan";
			lblTo->Text = (cmbDestination->Text);
			lblClass->Text = (rbStandard->Text);
			lblTicket->Text = (rbSingle->Text);
			lblChild->Text = (rbChildYes->Text);
			lblRoute->Text = "G MAPS";
		}



		else if ((cmbDestination->Text == "Quetta") && (rbBusiness->Checked) && (rbReturn->Checked) && (rbAdultYes->Checked))

		{
			lblSubtotal->Text = String::Format("{0:C2}", (Islamabad));
			TotalCost = (Islamabad * Tax) / 100;
			lblTax->Text = String::Format("{0:C2}", (TotalCost));
			lblTotal->Text = String::Format("{0:C2}", (Islamabad + TotalCost));
			lblPrice->Text = (lblTotal->Text);
			lblFrom->Text = "Multan";
			lblTo->Text = (cmbDestination->Text);
			lblClass->Text = (rbStandard->Text);
			lblTicket->Text = (rbSingle->Text);
			lblAdult->Text = (rbAdultYes->Text);
			lblRoute->Text = "G MAPS";
		}


		//   sailkot


		if ((cmbDestination->Text == "Sialkot") && (rbStandard->Checked) && (rbSingle->Checked) && (rbAdultYes->Checked))

		{
			lblSubtotal->Text = String::Format("{0:C2}", (Islamabad));
			TotalCost = (Islamabad * Tax) / 100;
			lblTax->Text = String::Format("{0:C2}", (TotalCost));
			lblTotal->Text = String::Format("{0:C2}", (Islamabad + TotalCost));
			lblPrice->Text = (lblTotal->Text);
			lblFrom->Text = "Multan";
			lblTo->Text = (cmbDestination->Text);
			lblClass->Text = (rbStandard->Text);
			lblTicket->Text = (rbSingle->Text);
			lblAdult->Text = (rbAdultYes->Text);
			lblRoute->Text = "G MAPS";
		}


		else if ((cmbDestination->Text == "Sialkot") && (rbStandard->Checked) && (rbSingle->Checked) && (rbChildYes->Checked))

		{
			lblSubtotal->Text = String::Format("{0:C2}", (Islamabad));
			TotalCost = (Islamabad * Tax) / 100;
			lblTax->Text = String::Format("{0:C2}", (TotalCost));
			lblTotal->Text = String::Format("{0:C2}", (Islamabad + TotalCost));
			lblPrice->Text = (lblTotal->Text);
			lblFrom->Text = "Multan";
			lblTo->Text = (cmbDestination->Text);
			lblClass->Text = (rbStandard->Text);
			lblTicket->Text = (rbSingle->Text);
			lblChild->Text = (rbChildYes->Text);
			lblRoute->Text = "G MAPS";
		}


		else if ((cmbDestination->Text == "Sialkot") && (rbStandard->Checked) && (rbReturn->Checked) && (rbChildYes->Checked))

		{
			lblSubtotal->Text = String::Format("{0:C2}", (Islamabad));
			TotalCost = (Islamabad * Tax) / 100;
			lblTax->Text = String::Format("{0:C2}", (TotalCost));
			lblTotal->Text = String::Format("{0:C2}", (Islamabad + TotalCost));
			lblPrice->Text = (lblTotal->Text);
			lblFrom->Text = "Multan";
			lblTo->Text = (cmbDestination->Text);
			lblClass->Text = (rbStandard->Text);
			lblTicket->Text = (rbSingle->Text);
			lblChild->Text = (rbChildYes->Text);
			lblRoute->Text = "G MAPS";
		}


		else if ((cmbDestination->Text == "Sialkot") && (rbStandard->Checked) && (rbReturn->Checked) && (rbAdultYes->Checked))

		{
			lblSubtotal->Text = String::Format("{0:C2}", (Islamabad));
			TotalCost = (Islamabad * Tax) / 100;
			lblTax->Text = String::Format("{0:C2}", (TotalCost));
			lblTotal->Text = String::Format("{0:C2}", (Islamabad + TotalCost));
			lblPrice->Text = (lblTotal->Text);
			lblFrom->Text = "Multan";
			lblTo->Text = (cmbDestination->Text);
			lblClass->Text = (rbStandard->Text);
			lblTicket->Text = (rbSingle->Text);
			lblAdult->Text = (rbAdultYes->Text);
			lblRoute->Text = "G MAPS";
		}


		else if ((cmbDestination->Text == "Sialkot") && (rbEconomy->Checked) && (rbReturn->Checked) && (rbAdultYes->Checked))

		{
			lblSubtotal->Text = String::Format("{0:C2}", (Islamabad));
			TotalCost = (Islamabad * Tax) / 100;
			lblTax->Text = String::Format("{0:C2}", (TotalCost));
			lblTotal->Text = String::Format("{0:C2}", (Islamabad + TotalCost));
			lblPrice->Text = (lblTotal->Text);
			lblFrom->Text = "Multan";
			lblTo->Text = (cmbDestination->Text);
			lblClass->Text = (rbStandard->Text);
			lblTicket->Text = (rbSingle->Text);
			lblAdult->Text = (rbAdultYes->Text);
			lblRoute->Text = "G MAPS";
		}


		else if ((cmbDestination->Text == "Sialkot") && (rbEconomy->Checked) && (rbReturn->Checked) && (rbChildYes->Checked))

		{
			lblSubtotal->Text = String::Format("{0:C2}", (Islamabad));
			TotalCost = (Islamabad * Tax) / 100;
			lblTax->Text = String::Format("{0:C2}", (TotalCost));
			lblTotal->Text = String::Format("{0:C2}", (Islamabad + TotalCost));
			lblPrice->Text = (lblTotal->Text);
			lblFrom->Text = "Multan";
			lblTo->Text = (cmbDestination->Text);
			lblClass->Text = (rbStandard->Text);
			lblTicket->Text = (rbSingle->Text);
			lblChild->Text = (rbChildYes->Text);
			lblRoute->Text = "G MAPS";
		}


		else if ((cmbDestination->Text == "Sialkot") && (rbEconomy->Checked) && (rbSingle->Checked) && (rbChildYes->Checked))

		{
			lblSubtotal->Text = String::Format("{0:C2}", (Islamabad));
			TotalCost = (Islamabad * Tax) / 100;
			lblTax->Text = String::Format("{0:C2}", (TotalCost));
			lblTotal->Text = String::Format("{0:C2}", (Islamabad + TotalCost));
			lblPrice->Text = (lblTotal->Text);
			lblFrom->Text = "Multan";
			lblTo->Text = (cmbDestination->Text);
			lblClass->Text = (rbStandard->Text);
			lblTicket->Text = (rbSingle->Text);
			lblChild->Text = (rbChildYes->Text);
			lblRoute->Text = "G MAPS";
		}

		if ((cmbDestination->Text == "Sialkot") && (rbEconomy->Checked) && (rbSingle->Checked) && (rbAdultYes->Checked))

		{
			lblSubtotal->Text = String::Format("{0:C2}", (Islamabad));
			TotalCost = (Islamabad * Tax) / 100;
			lblTax->Text = String::Format("{0:C2}", (TotalCost));
			lblTotal->Text = String::Format("{0:C2}", (Islamabad + TotalCost));
			lblPrice->Text = (lblTotal->Text);
			lblFrom->Text = "Multan";
			lblTo->Text = (cmbDestination->Text);
			lblClass->Text = (rbStandard->Text);
			lblTicket->Text = (rbSingle->Text);
			lblAdult->Text = (rbAdultYes->Text);
			lblRoute->Text = "G MAPS";
		}



		if ((cmbDestination->Text == "Sialkot") && (rbBusiness->Checked) && (rbSingle->Checked) && (rbAdultYes->Checked))

		{
			lblSubtotal->Text = String::Format("{0:C2}", (Islamabad));
			TotalCost = (Islamabad * Tax) / 100;
			lblTax->Text = String::Format("{0:C2}", (TotalCost));
			lblTotal->Text = String::Format("{0:C2}", (Islamabad + TotalCost));
			lblPrice->Text = (lblTotal->Text);
			lblFrom->Text = "Multan";
			lblTo->Text = (cmbDestination->Text);
			lblClass->Text = (rbStandard->Text);
			lblTicket->Text = (rbSingle->Text);
			lblAdult->Text = (rbAdultYes->Text);
			lblRoute->Text = "G MAPS";
		}


		else if ((cmbDestination->Text == "Sialkot") && (rbBusiness->Checked) && (rbSingle->Checked) && (rbChildYes->Checked))

		{
			lblSubtotal->Text = String::Format("{0:C2}", (Islamabad));
			TotalCost = (Islamabad * Tax) / 100;
			lblTax->Text = String::Format("{0:C2}", (TotalCost));
			lblTotal->Text = String::Format("{0:C2}", (Islamabad + TotalCost));
			lblPrice->Text = (lblTotal->Text);
			lblFrom->Text = "Multan";
			lblTo->Text = (cmbDestination->Text);
			lblClass->Text = (rbStandard->Text);
			lblTicket->Text = (rbSingle->Text);
			lblChild->Text = (rbChildYes->Text);
			lblRoute->Text = "G MAPS";
		}




		else if ((cmbDestination->Text == "Sialkot") && (rbBusiness->Checked) && (rbReturn->Checked) && (rbChildYes->Checked))

		{
			lblSubtotal->Text = String::Format("{0:C2}", (Islamabad));
			TotalCost = (Islamabad * Tax) / 100;
			lblTax->Text = String::Format("{0:C2}", (TotalCost));
			lblTotal->Text = String::Format("{0:C2}", (Islamabad + TotalCost));
			lblPrice->Text = (lblTotal->Text);
			lblFrom->Text = "Multan";
			lblTo->Text = (cmbDestination->Text);
			lblClass->Text = (rbStandard->Text);
			lblTicket->Text = (rbSingle->Text);
			lblChild->Text = (rbChildYes->Text);
			lblRoute->Text = "G MAPS";
		}



		else if ((cmbDestination->Text == "Sialkot") && (rbBusiness->Checked) && (rbReturn->Checked) && (rbAdultYes->Checked))

		{
			lblSubtotal->Text = String::Format("{0:C2}", (Islamabad));
			TotalCost = (Islamabad * Tax) / 100;
			lblTax->Text = String::Format("{0:C2}", (TotalCost));
			lblTotal->Text = String::Format("{0:C2}", (Islamabad + TotalCost));
			lblPrice->Text = (lblTotal->Text);
			lblFrom->Text = "Multan";
			lblTo->Text = (cmbDestination->Text);
			lblClass->Text = (rbStandard->Text);
			lblTicket->Text = (rbSingle->Text);
			lblAdult->Text = (rbAdultYes->Text);
			lblRoute->Text = "G MAPS";
		}


		//   karachi


		if ((cmbDestination->Text == "Karachi") && (rbStandard->Checked) && (rbSingle->Checked) && (rbAdultYes->Checked))

		{
			lblSubtotal->Text = String::Format("{0:C2}", (Islamabad));
			TotalCost = (Islamabad * Tax) / 100;
			lblTax->Text = String::Format("{0:C2}", (TotalCost));
			lblTotal->Text = String::Format("{0:C2}", (Islamabad + TotalCost));
			lblPrice->Text = (lblTotal->Text);
			lblFrom->Text = "Multan";
			lblTo->Text = (cmbDestination->Text);
			lblClass->Text = (rbStandard->Text);
			lblTicket->Text = (rbSingle->Text);
			lblAdult->Text = (rbAdultYes->Text);
			lblRoute->Text = "G MAPS";
		}


		else if ((cmbDestination->Text == "Karachi") && (rbStandard->Checked) && (rbSingle->Checked) && (rbChildYes->Checked))

		{
			lblSubtotal->Text = String::Format("{0:C2}", (Islamabad));
			TotalCost = (Islamabad * Tax) / 100;
			lblTax->Text = String::Format("{0:C2}", (TotalCost));
			lblTotal->Text = String::Format("{0:C2}", (Islamabad + TotalCost));
			lblPrice->Text = (lblTotal->Text);
			lblFrom->Text = "Multan";
			lblTo->Text = (cmbDestination->Text);
			lblClass->Text = (rbStandard->Text);
			lblTicket->Text = (rbSingle->Text);
			lblChild->Text = (rbChildYes->Text);
			lblRoute->Text = "G MAPS";
		}


		else if ((cmbDestination->Text == "Karachi") && (rbStandard->Checked) && (rbReturn->Checked) && (rbChildYes->Checked))

		{
			lblSubtotal->Text = String::Format("{0:C2}", (Islamabad));
			TotalCost = (Islamabad * Tax) / 100;
			lblTax->Text = String::Format("{0:C2}", (TotalCost));
			lblTotal->Text = String::Format("{0:C2}", (Islamabad + TotalCost));
			lblPrice->Text = (lblTotal->Text);
			lblFrom->Text = "Multan";
			lblTo->Text = (cmbDestination->Text);
			lblClass->Text = (rbStandard->Text);
			lblTicket->Text = (rbSingle->Text);
			lblChild->Text = (rbChildYes->Text);
			lblRoute->Text = "G MAPS";
		}


		else if ((cmbDestination->Text == "Karachi") && (rbStandard->Checked) && (rbReturn->Checked) && (rbAdultYes->Checked))

		{
			lblSubtotal->Text = String::Format("{0:C2}", (Islamabad));
			TotalCost = (Islamabad * Tax) / 100;
			lblTax->Text = String::Format("{0:C2}", (TotalCost));
			lblTotal->Text = String::Format("{0:C2}", (Islamabad + TotalCost));
			lblPrice->Text = (lblTotal->Text);
			lblFrom->Text = "Multan";
			lblTo->Text = (cmbDestination->Text);
			lblClass->Text = (rbStandard->Text);
			lblTicket->Text = (rbSingle->Text);
			lblAdult->Text = (rbAdultYes->Text);
			lblRoute->Text = "G MAPS";
		}


		else if ((cmbDestination->Text == "Karachi") && (rbEconomy->Checked) && (rbReturn->Checked) && (rbAdultYes->Checked))

		{
			lblSubtotal->Text = String::Format("{0:C2}", (Islamabad));
			TotalCost = (Islamabad * Tax) / 100;
			lblTax->Text = String::Format("{0:C2}", (TotalCost));
			lblTotal->Text = String::Format("{0:C2}", (Islamabad + TotalCost));
			lblPrice->Text = (lblTotal->Text);
			lblFrom->Text = "Multan";
			lblTo->Text = (cmbDestination->Text);
			lblClass->Text = (rbStandard->Text);
			lblTicket->Text = (rbSingle->Text);
			lblAdult->Text = (rbAdultYes->Text);
			lblRoute->Text = "G MAPS";
		}


		else if ((cmbDestination->Text == "Karachi") && (rbEconomy->Checked) && (rbReturn->Checked) && (rbChildYes->Checked))

		{
			lblSubtotal->Text = String::Format("{0:C2}", (Islamabad));
			TotalCost = (Islamabad * Tax) / 100;
			lblTax->Text = String::Format("{0:C2}", (TotalCost));
			lblTotal->Text = String::Format("{0:C2}", (Islamabad + TotalCost));
			lblPrice->Text = (lblTotal->Text);
			lblFrom->Text = "Multan";
			lblTo->Text = (cmbDestination->Text);
			lblClass->Text = (rbStandard->Text);
			lblTicket->Text = (rbSingle->Text);
			lblChild->Text = (rbChildYes->Text);
			lblRoute->Text = "G MAPS";
		}


		else if ((cmbDestination->Text == "Karachi") && (rbEconomy->Checked) && (rbSingle->Checked) && (rbChildYes->Checked))

		{
			lblSubtotal->Text = String::Format("{0:C2}", (Islamabad));
			TotalCost = (Islamabad * Tax) / 100;
			lblTax->Text = String::Format("{0:C2}", (TotalCost));
			lblTotal->Text = String::Format("{0:C2}", (Islamabad + TotalCost));
			lblPrice->Text = (lblTotal->Text);
			lblFrom->Text = "Multan";
			lblTo->Text = (cmbDestination->Text);
			lblClass->Text = (rbStandard->Text);
			lblTicket->Text = (rbSingle->Text);
			lblChild->Text = (rbChildYes->Text);
			lblRoute->Text = "G MAPS";
		}

		if ((cmbDestination->Text == "Karachi") && (rbEconomy->Checked) && (rbSingle->Checked) && (rbAdultYes->Checked))

		{
			lblSubtotal->Text = String::Format("{0:C2}", (Islamabad));
			TotalCost = (Islamabad * Tax) / 100;
			lblTax->Text = String::Format("{0:C2}", (TotalCost));
			lblTotal->Text = String::Format("{0:C2}", (Islamabad + TotalCost));
			lblPrice->Text = (lblTotal->Text);
			lblFrom->Text = "Multan";
			lblTo->Text = (cmbDestination->Text);
			lblClass->Text = (rbStandard->Text);
			lblTicket->Text = (rbSingle->Text);
			lblAdult->Text = (rbAdultYes->Text);
			lblRoute->Text = "G MAPS";
		}



		if ((cmbDestination->Text == "Karachi") && (rbBusiness->Checked) && (rbSingle->Checked) && (rbAdultYes->Checked))

		{
			lblSubtotal->Text = String::Format("{0:C2}", (Islamabad));
			TotalCost = (Islamabad * Tax) / 100;
			lblTax->Text = String::Format("{0:C2}", (TotalCost));
			lblTotal->Text = String::Format("{0:C2}", (Islamabad + TotalCost));
			lblPrice->Text = (lblTotal->Text);
			lblFrom->Text = "Multan";
			lblTo->Text = (cmbDestination->Text);
			lblClass->Text = (rbStandard->Text);
			lblTicket->Text = (rbSingle->Text);
			lblAdult->Text = (rbAdultYes->Text);
			lblRoute->Text = "G MAPS";
		}



		else if ((cmbDestination->Text == "Karachi") && (rbBusiness->Checked) && (rbSingle->Checked) && (rbChildYes->Checked))

		{
			lblSubtotal->Text = String::Format("{0:C2}", (Islamabad));
			TotalCost = (Islamabad * Tax) / 100;
			lblTax->Text = String::Format("{0:C2}", (TotalCost));
			lblTotal->Text = String::Format("{0:C2}", (Islamabad + TotalCost));
			lblPrice->Text = (lblTotal->Text);
			lblFrom->Text = "Multan";
			lblTo->Text = (cmbDestination->Text);
			lblClass->Text = (rbStandard->Text);
			lblTicket->Text = (rbSingle->Text);
			lblChild ->Text = (rbChildYes->Text);
			lblRoute->Text = "G MAPS";
		}




		else if ((cmbDestination->Text == "Karachi") && (rbBusiness->Checked) && (rbReturn->Checked) && (rbChildYes->Checked))

		{
			lblSubtotal->Text = String::Format("{0:C2}", (Islamabad));
			TotalCost = (Islamabad * Tax) / 100;
			lblTax->Text = String::Format("{0:C2}", (TotalCost));
			lblTotal->Text = String::Format("{0:C2}", (Islamabad + TotalCost));
			lblPrice->Text = (lblTotal->Text);
			lblFrom->Text = "Multan";
			lblTo->Text = (cmbDestination->Text);
			lblClass->Text = (rbStandard->Text);
			lblTicket->Text = (rbSingle->Text);
			lblChild->Text = (rbChildYes->Text);
			lblRoute->Text = "G MAPS";
		}



		else if ((cmbDestination->Text == "Karachi") && (rbBusiness->Checked) && (rbReturn->Checked) && (rbAdultYes->Checked))

		{
			lblSubtotal->Text = String::Format("{0:C2}", (Islamabad));
			TotalCost = (Islamabad * Tax) / 100;
			lblTax->Text = String::Format("{0:C2}", (TotalCost));
			lblTotal->Text = String::Format("{0:C2}", (Islamabad + TotalCost));
			lblPrice->Text = (lblTotal->Text);
			lblFrom->Text = "Multan";
			lblTo->Text = (cmbDestination->Text);
			lblClass->Text = (rbStandard->Text);
			lblTicket->Text = (rbSingle->Text);
			lblAdult->Text = (rbAdultYes->Text);
			lblRoute->Text = "G MAPS";
		}



	//yeeeeeeeeeeeeeah i made the damn logic............

	// following is the  RECEIPT    oh yeah

	//=================================================================================================

	rtbReceipt->Text = "";
	rtbReceipt->AppendText("\t\t" + label11 -> Text + Environment::NewLine);
	rtbReceipt->AppendText("===============================================" + Environment::NewLine);
	
	rtbReceipt->AppendText("\n" + classtab->Text + "\t\t" + typelabel->Text + "\t" + adulttab->Text + "\t"
		+ childtab -> Text+ Environment::NewLine);

	rtbReceipt->AppendText("\n" + lblClass->Text + "\t" + lblTicket->Text + "\t\t" + lblAdult->Text
		+ "\t" + lblChild->Text + Environment::NewLine);
	rtbReceipt->AppendText("===============================================" + Environment::NewLine);

	rtbReceipt->AppendText("\t\t" + label20->Text + "\t\t" + lblFrom->Text + Environment::NewLine);
	rtbReceipt->AppendText("\t\t" + label22->Text + "\t\t" + lblTo->Text + Environment::NewLine);
	rtbReceipt->AppendText("\t\t" + label23->Text + "\t\t" + lblPrice->Text + Environment::NewLine);
	rtbReceipt->AppendText("===============================================" + Environment::NewLine);

	rtbReceipt->AppendText("\n" + label17->Text + "\t" + label24->Text + "\t\t" + label30->Text
		+ "\t\t" + label16->Text + Environment::NewLine);
	rtbReceipt->AppendText("\n" + lblRefNo->Text + "\t" + gbTime->Text + "\t" + gbDate->Text
		+ "\t" + lblRoute->Text + Environment::NewLine);
	rtbReceipt->AppendText("===============================================" + Environment::NewLine);


	rtbReceipt->AppendText("===============================================" + Environment::NewLine);

	//==================================================================================================




}
private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void cmbDestination_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
    
	cmbDestination -> Text =cmbCC->Text ;
}

	   //   print the document F U N C T I O N


private: System::Void printDocument1_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e) 
{
	String ^ drawString = rtbReceipt->Text;
	System::Drawing::Font^ drawFont = gcnew::System::Drawing::Font("Arial", 20);
	SolidBrush^ drawBrush = gcnew SolidBrush(Color::Black);
	PointF drawPoint = PointF(150.0F, 150.0F);
	e->Graphics->DrawString(drawString, drawFont, drawBrush, drawPoint);

}
private: System::Void txtCC_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void cmbCC_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}

	   //  Following is the print button


private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	printPreviewDialog1->Document = printDocument1;
	printPreviewDialog1->ShowDialog();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
{

//	this->Hide();
	//obj->Show();
	Application::Exit();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	lblSubtotal->Text = "";
	lblTax->Text = "";
	lblTotal->Text = "";
	lblClass->Text = "";
	lblTicket->Text = "";
	lblAdult->Text = "";
	lblChild->Text = "";
	lblFrom->Text = "";
	lblTo->Text = "";
	lblPrice->Text = "";
	lblRefNo->Text = "";
	lblRoute->Text = "";
	gbTime->Text = "";
	gbDate->Text = "";
}
private: System::Void txt2CC_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
