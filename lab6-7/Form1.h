#pragma once

namespace CppCLRWinFormsProject {

  using namespace System;
  using namespace System::ComponentModel;
  using namespace System::Collections;
  using namespace System::Windows::Forms;
  using namespace System::Data;
  using namespace System::Drawing;

  public ref class Form1 : public System::Windows::Forms::Form
  {
  public:
    Form1(void)
    {
      InitializeComponent();
      Matrix1->Rows->Add(2);
      Matrix2->Rows->Add(2);

    }

  protected:
    ~Form1()
    {
      if (components)
      {
        delete components;
      }
    }
  private: System::Windows::Forms::NumericUpDown^ numudMatrix1SizeRows;
  private: System::Windows::Forms::Label^ lblMatrix1SizeRows;
  private: System::Windows::Forms::DataGridView^ Matrix1;
  private: System::Windows::Forms::Label^ lblMatrix1SizeCols;
  private: System::Windows::Forms::NumericUpDown^ numudMatrix1SizeCols;
  private: System::Windows::Forms::Label^ lblMatrix1;
  private: System::Windows::Forms::NumericUpDown^ numudMatrix2SizeCols;
  private: System::Windows::Forms::Label^ lblMatrix2SizeCols;
  private: System::Windows::Forms::Label^ lblMatrix2SizeRows;
  private: System::Windows::Forms::NumericUpDown^ numudMatrix2SizeRows;
  private: System::Windows::Forms::Label^ lblMatrix2;

  private: System::Windows::Forms::Button^ btnTranspon;
  private: System::Windows::Forms::DataGridViewTextBoxColumn^ col1;
  private: System::Windows::Forms::DataGridViewTextBoxColumn^ col2;
  private: System::Windows::Forms::DataGridView^ Matrix2;
  private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
  private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
         System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
    void InitializeComponent(void)
    {
        System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle9 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
        System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle10 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
        System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle11 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
        System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle12 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
        this->numudMatrix1SizeRows = (gcnew System::Windows::Forms::NumericUpDown());
        this->lblMatrix1SizeRows = (gcnew System::Windows::Forms::Label());
        this->Matrix1 = (gcnew System::Windows::Forms::DataGridView());
        this->col1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->col2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->lblMatrix1SizeCols = (gcnew System::Windows::Forms::Label());
        this->numudMatrix1SizeCols = (gcnew System::Windows::Forms::NumericUpDown());
        this->lblMatrix1 = (gcnew System::Windows::Forms::Label());
        this->numudMatrix2SizeCols = (gcnew System::Windows::Forms::NumericUpDown());
        this->lblMatrix2SizeCols = (gcnew System::Windows::Forms::Label());
        this->lblMatrix2SizeRows = (gcnew System::Windows::Forms::Label());
        this->numudMatrix2SizeRows = (gcnew System::Windows::Forms::NumericUpDown());
        this->lblMatrix2 = (gcnew System::Windows::Forms::Label());
        this->btnTranspon = (gcnew System::Windows::Forms::Button());
        this->Matrix2 = (gcnew System::Windows::Forms::DataGridView());
        this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numudMatrix1SizeRows))->BeginInit();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Matrix1))->BeginInit();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numudMatrix1SizeCols))->BeginInit();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numudMatrix2SizeCols))->BeginInit();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numudMatrix2SizeRows))->BeginInit();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Matrix2))->BeginInit();
        this->SuspendLayout();
        // 
        // numudMatrix1SizeRows
        // 
        this->numudMatrix1SizeRows->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
            | System::Windows::Forms::AnchorStyles::Left));
        this->numudMatrix1SizeRows->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.14286F, System::Drawing::FontStyle::Regular,
            System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
        this->numudMatrix1SizeRows->Location = System::Drawing::Point(399, 40);
        this->numudMatrix1SizeRows->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 50, 0, 0, 0 });
        this->numudMatrix1SizeRows->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
        this->numudMatrix1SizeRows->Name = L"numudMatrix1SizeRows";
        this->numudMatrix1SizeRows->Size = System::Drawing::Size(77, 34);
        this->numudMatrix1SizeRows->TabIndex = 0;
        this->numudMatrix1SizeRows->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
        this->numudMatrix1SizeRows->ValueChanged += gcnew System::EventHandler(this, &Form1::numudMatrix1SizeRows_ValueChanged);
        this->numudMatrix1SizeRows->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::numudMatrix1SizeRows_KeyDown);
        // 
        // lblMatrix1SizeRows
        // 
        this->lblMatrix1SizeRows->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
            | System::Windows::Forms::AnchorStyles::Left));
        this->lblMatrix1SizeRows->AutoSize = true;
        this->lblMatrix1SizeRows->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.857143F, System::Drawing::FontStyle::Bold,
            System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
        this->lblMatrix1SizeRows->Location = System::Drawing::Point(37, 45);
        this->lblMatrix1SizeRows->Name = L"lblMatrix1SizeRows";
        this->lblMatrix1SizeRows->Size = System::Drawing::Size(327, 29);
        this->lblMatrix1SizeRows->TabIndex = 1;
        this->lblMatrix1SizeRows->Text = L"Кількість рядків матриці:";
        // 
        // Matrix1
        // 
        this->Matrix1->AllowUserToAddRows = false;
        this->Matrix1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
            | System::Windows::Forms::AnchorStyles::Left));
        this->Matrix1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
        this->Matrix1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
        this->Matrix1->BackgroundColor = System::Drawing::SystemColors::Control;
        this->Matrix1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
        this->Matrix1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) { this->col1, this->col2 });
        this->Matrix1->GridColor = System::Drawing::Color::DimGray;
        this->Matrix1->Location = System::Drawing::Point(42, 162);
        this->Matrix1->Name = L"Matrix1";
        dataGridViewCellStyle9->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
        dataGridViewCellStyle9->BackColor = System::Drawing::SystemColors::Control;
        dataGridViewCellStyle9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.14286F));
        dataGridViewCellStyle9->ForeColor = System::Drawing::SystemColors::WindowText;
        dataGridViewCellStyle9->SelectionBackColor = System::Drawing::SystemColors::Highlight;
        dataGridViewCellStyle9->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
        dataGridViewCellStyle9->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
        this->Matrix1->RowHeadersDefaultCellStyle = dataGridViewCellStyle9;
        this->Matrix1->RowHeadersWidth = 72;
        dataGridViewCellStyle10->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->Matrix1->RowsDefaultCellStyle = dataGridViewCellStyle10;
        this->Matrix1->RowTemplate->Height = 31;
        this->Matrix1->Size = System::Drawing::Size(488, 429);
        this->Matrix1->TabIndex = 2;
        this->Matrix1->CellValidating += gcnew System::Windows::Forms::DataGridViewCellValidatingEventHandler(this, &Form1::Matrix1_CellValidating);
        // 
        // col1
        // 
        this->col1->HeaderText = L"1";
        this->col1->MinimumWidth = 50;
        this->col1->Name = L"col1";
        this->col1->Width = 64;
        // 
        // col2
        // 
        this->col2->HeaderText = L"2";
        this->col2->MinimumWidth = 50;
        this->col2->Name = L"col2";
        this->col2->Width = 64;
        // 
        // lblMatrix1SizeCols
        // 
        this->lblMatrix1SizeCols->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
            | System::Windows::Forms::AnchorStyles::Left));
        this->lblMatrix1SizeCols->AutoSize = true;
        this->lblMatrix1SizeCols->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.857143F, System::Drawing::FontStyle::Bold,
            System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
        this->lblMatrix1SizeCols->Location = System::Drawing::Point(37, 86);
        this->lblMatrix1SizeCols->Name = L"lblMatrix1SizeCols";
        this->lblMatrix1SizeCols->Size = System::Drawing::Size(356, 29);
        this->lblMatrix1SizeCols->TabIndex = 3;
        this->lblMatrix1SizeCols->Text = L"Кількість стовпців матриці:";
        // 
        // numudMatrix1SizeCols
        // 
        this->numudMatrix1SizeCols->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
            | System::Windows::Forms::AnchorStyles::Left));
        this->numudMatrix1SizeCols->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.14286F, System::Drawing::FontStyle::Regular,
            System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
        this->numudMatrix1SizeCols->Location = System::Drawing::Point(399, 84);
        this->numudMatrix1SizeCols->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
        this->numudMatrix1SizeCols->Name = L"numudMatrix1SizeCols";
        this->numudMatrix1SizeCols->Size = System::Drawing::Size(77, 34);
        this->numudMatrix1SizeCols->TabIndex = 4;
        this->numudMatrix1SizeCols->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
        this->numudMatrix1SizeCols->ValueChanged += gcnew System::EventHandler(this, &Form1::numudMatrix1SizeCols_ValueChanged);
        this->numudMatrix1SizeCols->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::numudMatrix1SizeCols_KeyDown);
        // 
        // lblMatrix1
        // 
        this->lblMatrix1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
            | System::Windows::Forms::AnchorStyles::Left));
        this->lblMatrix1->AutoSize = true;
        this->lblMatrix1->Location = System::Drawing::Point(37, 134);
        this->lblMatrix1->Name = L"lblMatrix1";
        this->lblMatrix1->Size = System::Drawing::Size(169, 25);
        this->lblMatrix1->TabIndex = 5;
        this->lblMatrix1->Text = L"Перша матриця:";
        // 
        // numudMatrix2SizeCols
        // 
        this->numudMatrix2SizeCols->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
            | System::Windows::Forms::AnchorStyles::Right));
        this->numudMatrix2SizeCols->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.14286F, System::Drawing::FontStyle::Regular,
            System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
        this->numudMatrix2SizeCols->Location = System::Drawing::Point(939, 84);
        this->numudMatrix2SizeCols->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
        this->numudMatrix2SizeCols->Name = L"numudMatrix2SizeCols";
        this->numudMatrix2SizeCols->Size = System::Drawing::Size(77, 34);
        this->numudMatrix2SizeCols->TabIndex = 10;
        this->numudMatrix2SizeCols->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
        this->numudMatrix2SizeCols->ValueChanged += gcnew System::EventHandler(this, &Form1::numudMatrix2SizeCols_ValueChanged);
        this->numudMatrix2SizeCols->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::numudMatrix2SizeCols_KeyDown);
        // 
        // lblMatrix2SizeCols
        // 
        this->lblMatrix2SizeCols->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
            | System::Windows::Forms::AnchorStyles::Right));
        this->lblMatrix2SizeCols->AutoSize = true;
        this->lblMatrix2SizeCols->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.857143F, System::Drawing::FontStyle::Bold,
            System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
        this->lblMatrix2SizeCols->Location = System::Drawing::Point(577, 86);
        this->lblMatrix2SizeCols->Name = L"lblMatrix2SizeCols";
        this->lblMatrix2SizeCols->Size = System::Drawing::Size(356, 29);
        this->lblMatrix2SizeCols->TabIndex = 9;
        this->lblMatrix2SizeCols->Text = L"Кількість стовпців матриці:";
        // 
        // lblMatrix2SizeRows
        // 
        this->lblMatrix2SizeRows->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
            | System::Windows::Forms::AnchorStyles::Right));
        this->lblMatrix2SizeRows->AutoSize = true;
        this->lblMatrix2SizeRows->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.857143F, System::Drawing::FontStyle::Bold,
            System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
        this->lblMatrix2SizeRows->Location = System::Drawing::Point(577, 45);
        this->lblMatrix2SizeRows->Name = L"lblMatrix2SizeRows";
        this->lblMatrix2SizeRows->Size = System::Drawing::Size(327, 29);
        this->lblMatrix2SizeRows->TabIndex = 8;
        this->lblMatrix2SizeRows->Text = L"Кількість рядків матриці:";
        // 
        // numudMatrix2SizeRows
        // 
        this->numudMatrix2SizeRows->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
            | System::Windows::Forms::AnchorStyles::Right));
        this->numudMatrix2SizeRows->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.14286F, System::Drawing::FontStyle::Regular,
            System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
        this->numudMatrix2SizeRows->Location = System::Drawing::Point(939, 43);
        this->numudMatrix2SizeRows->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
        this->numudMatrix2SizeRows->Name = L"numudMatrix2SizeRows";
        this->numudMatrix2SizeRows->Size = System::Drawing::Size(77, 34);
        this->numudMatrix2SizeRows->TabIndex = 7;
        this->numudMatrix2SizeRows->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
        this->numudMatrix2SizeRows->ValueChanged += gcnew System::EventHandler(this, &Form1::numudMatrix2SizeRows_ValueChanged);
        this->numudMatrix2SizeRows->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::numudMatrix2SizeRows_KeyDown);
        // 
        // lblMatrix2
        // 
        this->lblMatrix2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
            | System::Windows::Forms::AnchorStyles::Right));
        this->lblMatrix2->AutoSize = true;
        this->lblMatrix2->Location = System::Drawing::Point(577, 134);
        this->lblMatrix2->Name = L"lblMatrix2";
        this->lblMatrix2->Size = System::Drawing::Size(162, 25);
        this->lblMatrix2->TabIndex = 11;
        this->lblMatrix2->Text = L"Друга матриця:";
        // 
        // btnTranspon
        // 
        this->btnTranspon->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
        this->btnTranspon->AutoSize = true;
        this->btnTranspon->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
        this->btnTranspon->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.14286F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(204)));
        this->btnTranspon->Location = System::Drawing::Point(444, 610);
        this->btnTranspon->Name = L"btnTranspon";
        this->btnTranspon->Size = System::Drawing::Size(229, 43);
        this->btnTranspon->TabIndex = 13;
        this->btnTranspon->Text = L"Транспонувати";
        this->btnTranspon->UseVisualStyleBackColor = true;
        this->btnTranspon->Click += gcnew System::EventHandler(this, &Form1::btnTranspon_Click);
        // 
        // Matrix2
        // 
        this->Matrix2->AllowUserToAddRows = false;
        this->Matrix2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
            | System::Windows::Forms::AnchorStyles::Right));
        this->Matrix2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
        this->Matrix2->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
        this->Matrix2->BackgroundColor = System::Drawing::SystemColors::Control;
        this->Matrix2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
        this->Matrix2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
            this->dataGridViewTextBoxColumn1,
                this->dataGridViewTextBoxColumn2
        });
        this->Matrix2->GridColor = System::Drawing::Color::DimGray;
        this->Matrix2->Location = System::Drawing::Point(573, 162);
        this->Matrix2->Name = L"Matrix2";
        dataGridViewCellStyle11->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
        dataGridViewCellStyle11->BackColor = System::Drawing::SystemColors::Control;
        dataGridViewCellStyle11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.14286F));
        dataGridViewCellStyle11->ForeColor = System::Drawing::SystemColors::WindowText;
        dataGridViewCellStyle11->SelectionBackColor = System::Drawing::SystemColors::Highlight;
        dataGridViewCellStyle11->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
        dataGridViewCellStyle11->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
        this->Matrix2->RowHeadersDefaultCellStyle = dataGridViewCellStyle11;
        this->Matrix2->RowHeadersWidth = 72;
        dataGridViewCellStyle12->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->Matrix2->RowsDefaultCellStyle = dataGridViewCellStyle12;
        this->Matrix2->RowTemplate->Height = 31;
        this->Matrix2->Size = System::Drawing::Size(482, 429);
        this->Matrix2->TabIndex = 14;
        // 
        // dataGridViewTextBoxColumn1
        // 
        this->dataGridViewTextBoxColumn1->HeaderText = L"1";
        this->dataGridViewTextBoxColumn1->MinimumWidth = 50;
        this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
        this->dataGridViewTextBoxColumn1->Width = 64;
        // 
        // dataGridViewTextBoxColumn2
        // 
        this->dataGridViewTextBoxColumn2->HeaderText = L"2";
        this->dataGridViewTextBoxColumn2->MinimumWidth = 50;
        this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
        this->dataGridViewTextBoxColumn2->Width = 64;
        // 
        // Form1
        // 
        this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Inherit;
        this->ClientSize = System::Drawing::Size(1103, 681);
        this->Controls->Add(this->Matrix2);
        this->Controls->Add(this->btnTranspon);
        this->Controls->Add(this->lblMatrix2);
        this->Controls->Add(this->numudMatrix2SizeCols);
        this->Controls->Add(this->lblMatrix2SizeCols);
        this->Controls->Add(this->lblMatrix2SizeRows);
        this->Controls->Add(this->numudMatrix2SizeRows);
        this->Controls->Add(this->lblMatrix1);
        this->Controls->Add(this->numudMatrix1SizeCols);
        this->Controls->Add(this->lblMatrix1SizeCols);
        this->Controls->Add(this->Matrix1);
        this->Controls->Add(this->lblMatrix1SizeRows);
        this->Controls->Add(this->numudMatrix1SizeRows);
        this->Margin = System::Windows::Forms::Padding(6);
        this->Name = L"Form1";
        this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
        this->Text = L"Транспонування матриць";
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numudMatrix1SizeRows))->EndInit();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Matrix1))->EndInit();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numudMatrix1SizeCols))->EndInit();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numudMatrix2SizeCols))->EndInit();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numudMatrix2SizeRows))->EndInit();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Matrix2))->EndInit();
        this->ResumeLayout(false);
        this->PerformLayout();

    }
#pragma endregion

    System::Void numudMatrix1SizeRows_ValueChanged(Object^ sender, EventArgs^ e);
    System::Void numudMatrix1SizeCols_ValueChanged(Object^ sender, EventArgs^ e);
    System::Void numudMatrix2SizeRows_ValueChanged(Object^ sender, EventArgs^ e);
    System::Void numudMatrix2SizeCols_ValueChanged(Object^ sender, EventArgs^ e);
    System::Void numudMatrix1SizeRows_KeyDown(Object^ sender, KeyEventArgs^ e);
    System::Void numudMatrix1SizeCols_KeyDown(Object^ sender, KeyEventArgs^ e);
    System::Void numudMatrix2SizeRows_KeyDown(Object^ sender, KeyEventArgs^ e);
    System::Void numudMatrix2SizeCols_KeyDown(Object^ sender, KeyEventArgs^ e);
    System::Void Matrix1_CellValidating(Object^ sender, DataGridViewCellValidatingEventArgs^ e);
    System::Void Matrix2_CellValidating(Object^ sender, DataGridViewCellValidatingEventArgs^ e);
    System::Void btnTranspon_Click(Object^ sender, EventArgs^ e);
}; // end of class Form1
} // end of namespace CppCLRWinFormsProject

