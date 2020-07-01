#pragma once
#include <vector>
#include <iostream>
#include <math.h>
#include "Functions.h"
#include "Cramer.h"
#include "Zeidel.h"
#include "Gauss.h"
#include "ProstIterations.h"
#include "UppDownTriangle.h"

namespace SLU {

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
			size = 3;
			dataGridView1->ColumnCount = size;
			dataGridView1->RowCount = size;

			dataGridView2->ColumnCount = 1;
			dataGridView2->RowCount = size;
			dataGridView2->Columns[0]->Width = 50;

			dataGridView3->ColumnCount = 1;
			dataGridView3->RowCount = size;
			dataGridView3->Columns[0]->Width = 50;

			dataGridView4->ColumnCount = 1;
			dataGridView4->RowCount = size;
			dataGridView4->Columns[0]->Width = 50;

			dataGridView5->ColumnCount = 1;
			dataGridView5->RowCount = size;
			dataGridView5->Columns[0]->Width = 50;

			dataGridView6->ColumnCount = 1;
			dataGridView6->RowCount = size;
			dataGridView6->Columns[0]->Width = 50;

			dataGridView7->ColumnCount = 1;
			dataGridView7->RowCount = size;
			dataGridView7->Columns[0]->Width = 50;

			for (int i = 0; i < size; i++) {
				for (int j = 0; j < size; j++) {
					dataGridView1->Rows[i]->Cells[j]->Value = 0;
				}
				dataGridView1->Columns[i]->Width = 50;
				dataGridView1->Rows[i]->Height = 40;

				dataGridView2->Rows[i]->Height = 40;
				dataGridView3->Rows[i]->Height = 40;
				dataGridView4->Rows[i]->Height = 40;
				dataGridView5->Rows[i]->Height = 40;
				dataGridView6->Rows[i]->Height = 40;
				dataGridView7->Rows[i]->Height = 40;

				
					dataGridView2->Rows[i]->Cells[0]->Value = 0;
					dataGridView3->Rows[i]->Cells[0]->Value = 0;
					dataGridView4->Rows[i]->Cells[0]->Value = 0;
					dataGridView5->Rows[i]->Cells[0]->Value = 0;
					dataGridView6->Rows[i]->Cells[0]->Value = 0;
					dataGridView7->Rows[i]->Cells[0]->Value = 0;
			}
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: int size;
	private:int width;
	private:int height;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::DataGridView^  dataGridView2;

	private: System::Windows::Forms::DataGridView^  dataGridView3;
	private: System::Windows::Forms::DataGridView^  dataGridView4;
	private: System::Windows::Forms::DataGridView^  dataGridView5;
	private: System::Windows::Forms::DataGridView^  dataGridView6;
	private: System::Windows::Forms::DataGridView^  dataGridView7;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::TextBox^  textBox15;




	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView6 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView7 = (gcnew System::Windows::Forms::DataGridView());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView7))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::Control;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->ColumnHeadersVisible = false;
			this->dataGridView1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->dataGridView1->Location = System::Drawing::Point(9, 90);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowTemplate->Height = 18;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->dataGridView1->Size = System::Drawing::Size(406, 344);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->Tag = L"";
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button1->Location = System::Drawing::Point(9, 452);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(53, 51);
			this->button1->TabIndex = 1;
			this->button1->Text = L"-";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button2->Location = System::Drawing::Point(71, 452);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(55, 51);
			this->button2->TabIndex = 2;
			this->button2->Text = L"+";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToResizeColumns = false;
			this->dataGridView2->AllowUserToResizeRows = false;
			this->dataGridView2->BackgroundColor = System::Drawing::SystemColors::Control;
			this->dataGridView2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView2->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->ColumnHeadersVisible = false;
			this->dataGridView2->Location = System::Drawing::Point(482, 90);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersVisible = false;
			this->dataGridView2->RowTemplate->Height = 18;
			this->dataGridView2->Size = System::Drawing::Size(53, 344);
			this->dataGridView2->TabIndex = 3;
			this->dataGridView2->Tag = L"";
			this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView2_CellContentClick);
			// 
			// dataGridView3
			// 
			this->dataGridView3->AllowUserToAddRows = false;
			this->dataGridView3->AllowUserToResizeColumns = false;
			this->dataGridView3->AllowUserToResizeRows = false;
			this->dataGridView3->BackgroundColor = System::Drawing::SystemColors::Control;
			this->dataGridView3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView3->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->ColumnHeadersVisible = false;
			this->dataGridView3->Location = System::Drawing::Point(614, 90);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersVisible = false;
			this->dataGridView3->RowTemplate->Height = 18;
			this->dataGridView3->Size = System::Drawing::Size(53, 344);
			this->dataGridView3->TabIndex = 5;
			this->dataGridView3->Tag = L"";
			this->dataGridView3->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView3_CellContentClick);
			// 
			// dataGridView4
			// 
			this->dataGridView4->AllowUserToAddRows = false;
			this->dataGridView4->AllowUserToResizeColumns = false;
			this->dataGridView4->AllowUserToResizeRows = false;
			this->dataGridView4->BackgroundColor = System::Drawing::SystemColors::Control;
			this->dataGridView4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView4->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->ColumnHeadersVisible = false;
			this->dataGridView4->Location = System::Drawing::Point(673, 90);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->RowHeadersVisible = false;
			this->dataGridView4->RowTemplate->Height = 18;
			this->dataGridView4->Size = System::Drawing::Size(53, 344);
			this->dataGridView4->TabIndex = 6;
			this->dataGridView4->Tag = L"";
			this->dataGridView4->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView4_CellContentClick);
			// 
			// dataGridView5
			// 
			this->dataGridView5->AllowUserToAddRows = false;
			this->dataGridView5->AllowUserToResizeColumns = false;
			this->dataGridView5->AllowUserToResizeRows = false;
			this->dataGridView5->BackgroundColor = System::Drawing::SystemColors::Control;
			this->dataGridView5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView5->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView5->ColumnHeadersVisible = false;
			this->dataGridView5->Location = System::Drawing::Point(732, 90);
			this->dataGridView5->Name = L"dataGridView5";
			this->dataGridView5->RowHeadersVisible = false;
			this->dataGridView5->RowTemplate->Height = 18;
			this->dataGridView5->Size = System::Drawing::Size(53, 344);
			this->dataGridView5->TabIndex = 7;
			this->dataGridView5->Tag = L"";
			// 
			// dataGridView6
			// 
			this->dataGridView6->AllowUserToAddRows = false;
			this->dataGridView6->AllowUserToResizeColumns = false;
			this->dataGridView6->AllowUserToResizeRows = false;
			this->dataGridView6->BackgroundColor = System::Drawing::SystemColors::Control;
			this->dataGridView6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView6->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->dataGridView6->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView6->ColumnHeadersVisible = false;
			this->dataGridView6->Location = System::Drawing::Point(791, 90);
			this->dataGridView6->Name = L"dataGridView6";
			this->dataGridView6->RowHeadersVisible = false;
			this->dataGridView6->RowTemplate->Height = 18;
			this->dataGridView6->Size = System::Drawing::Size(53, 344);
			this->dataGridView6->TabIndex = 8;
			this->dataGridView6->Tag = L"";
			// 
			// dataGridView7
			// 
			this->dataGridView7->AllowUserToAddRows = false;
			this->dataGridView7->AllowUserToResizeColumns = false;
			this->dataGridView7->AllowUserToResizeRows = false;
			this->dataGridView7->BackgroundColor = System::Drawing::SystemColors::Control;
			this->dataGridView7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView7->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->dataGridView7->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView7->ColumnHeadersVisible = false;
			this->dataGridView7->Location = System::Drawing::Point(850, 90);
			this->dataGridView7->Name = L"dataGridView7";
			this->dataGridView7->RowHeadersVisible = false;
			this->dataGridView7->RowTemplate->Height = 18;
			this->dataGridView7->Size = System::Drawing::Size(53, 344);
			this->dataGridView7->TabIndex = 9;
			this->dataGridView7->Tag = L"";
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button4->Location = System::Drawing::Point(541, 240);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(67, 51);
			this->button4->TabIndex = 10;
			this->button4->Text = L">>";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Control;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Enabled = false;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->textBox1->HideSelection = false;
			this->textBox1->Location = System::Drawing::Point(421, 250);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(55, 31);
			this->textBox1->TabIndex = 11;
			this->textBox1->Text = L"  =";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(132, 452);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 12;
			this->button3->Text = L"Random";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click_1);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::Control;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40));
			this->textBox2->Location = System::Drawing::Point(142, 23);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(87, 61);
			this->textBox2->TabIndex = 13;
			this->textBox2->Text = L"A";
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::Control;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40));
			this->textBox3->Location = System::Drawing::Point(482, 23);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(87, 61);
			this->textBox3->TabIndex = 14;
			this->textBox3->Text = L"B";
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::Control;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(213, 440);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(322, 25);
			this->textBox4->TabIndex = 15;
			this->textBox4->Text = L"Size = 3";
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::SystemColors::Control;
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox5->Location = System::Drawing::Point(213, 471);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(322, 25);
			this->textBox5->TabIndex = 16;
			this->textBox5->Text = L"Det = 0";
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::SystemColors::Control;
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->textBox6->Location = System::Drawing::Point(614, 440);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(53, 13);
			this->textBox6->TabIndex = 17;
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::SystemColors::Control;
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->textBox7->Location = System::Drawing::Point(673, 440);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(53, 13);
			this->textBox7->TabIndex = 18;
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::SystemColors::Control;
			this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->textBox8->Location = System::Drawing::Point(732, 440);
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->Size = System::Drawing::Size(53, 13);
			this->textBox8->TabIndex = 19;
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::SystemColors::Control;
			this->textBox9->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->textBox9->Location = System::Drawing::Point(791, 440);
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			this->textBox9->Size = System::Drawing::Size(53, 13);
			this->textBox9->TabIndex = 20;
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::SystemColors::Control;
			this->textBox10->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->textBox10->Location = System::Drawing::Point(850, 440);
			this->textBox10->Name = L"textBox10";
			this->textBox10->ReadOnly = true;
			this->textBox10->Size = System::Drawing::Size(53, 13);
			this->textBox10->TabIndex = 21;
			// 
			// textBox11
			// 
			this->textBox11->BackColor = System::Drawing::SystemColors::Control;
			this->textBox11->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBox11->Location = System::Drawing::Point(614, 56);
			this->textBox11->Name = L"textBox11";
			this->textBox11->ReadOnly = true;
			this->textBox11->Size = System::Drawing::Size(53, 19);
			this->textBox11->TabIndex = 22;
			this->textBox11->Text = L"Gauss";
			// 
			// textBox12
			// 
			this->textBox12->BackColor = System::Drawing::SystemColors::Control;
			this->textBox12->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBox12->Location = System::Drawing::Point(673, 56);
			this->textBox12->Name = L"textBox12";
			this->textBox12->ReadOnly = true;
			this->textBox12->Size = System::Drawing::Size(53, 19);
			this->textBox12->TabIndex = 23;
			this->textBox12->Text = L"Cramer";
			// 
			// textBox13
			// 
			this->textBox13->BackColor = System::Drawing::SystemColors::Control;
			this->textBox13->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->textBox13->Location = System::Drawing::Point(732, 51);
			this->textBox13->Multiline = true;
			this->textBox13->Name = L"textBox13";
			this->textBox13->ReadOnly = true;
			this->textBox13->Size = System::Drawing::Size(53, 33);
			this->textBox13->TabIndex = 24;
			this->textBox13->Text = L" Simple Iteration";
			// 
			// textBox14
			// 
			this->textBox14->BackColor = System::Drawing::SystemColors::Control;
			this->textBox14->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBox14->Location = System::Drawing::Point(791, 56);
			this->textBox14->Name = L"textBox14";
			this->textBox14->ReadOnly = true;
			this->textBox14->Size = System::Drawing::Size(53, 19);
			this->textBox14->TabIndex = 25;
			this->textBox14->Text = L"Zeidel";
			// 
			// textBox15
			// 
			this->textBox15->BackColor = System::Drawing::SystemColors::Control;
			this->textBox15->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBox15->Location = System::Drawing::Point(850, 56);
			this->textBox15->Name = L"textBox15";
			this->textBox15->ReadOnly = true;
			this->textBox15->Size = System::Drawing::Size(53, 19);
			this->textBox15->TabIndex = 26;
			this->textBox15->Text = L"LU";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(914, 523);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->dataGridView7);
			this->Controls->Add(this->dataGridView6);
			this->Controls->Add(this->dataGridView5);
			this->Controls->Add(this->dataGridView4);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"MyForm";
			this->Text = L"SLU";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView7))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		Functions f;
		if (size != 8) {
			size++;
			dataGridView1->ColumnCount = size;
			dataGridView1->RowCount = size;
			dataGridView2->RowCount = size;
			dataGridView3->RowCount = size;
			dataGridView4->RowCount = size;
			dataGridView5->RowCount = size;
			dataGridView6->RowCount = size;
			dataGridView7->RowCount = size;

			for (int i = 0; i < size; i++) {
				for(int j = 0; j < size; j++){
					dataGridView1->Rows[i]->Cells[j]->Value = 0;
				}
				dataGridView1->Columns[i]->Width = 50;
				dataGridView1->Rows[i]->Height = 40;

				dataGridView2->Rows[i]->Height = 40;
				dataGridView3->Rows[i]->Height = 40;
				dataGridView4->Rows[i]->Height = 40;
				dataGridView5->Rows[i]->Height = 40;
				dataGridView6->Rows[i]->Height = 40;
				dataGridView7->Rows[i]->Height = 40;
				dataGridView2->Rows[i]->Cells[0]->Value = 0;
				dataGridView3->Rows[i]->Cells[0]->Value = 0;
				dataGridView4->Rows[i]->Cells[0]->Value = 0;
				dataGridView5->Rows[i]->Cells[0]->Value = 0;
				dataGridView6->Rows[i]->Cells[0]->Value = 0;
				dataGridView7->Rows[i]->Cells[0]->Value = 0;
			}
			textBox4->Text = Convert::ToString("Size = " + size);
			textBox5->Text = Convert::ToString("Det = " + 0);
		}
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Functions f;
		if (size != 3) {
			size--;
			dataGridView1->ColumnCount = size;
			dataGridView1->RowCount = size;
			dataGridView2->RowCount = size;
			dataGridView3->RowCount = size;
			dataGridView4->RowCount = size;
			dataGridView5->RowCount = size;
			dataGridView6->RowCount = size;
			dataGridView7->RowCount = size;

			for (int i = 0; i < size; i++) {
				for (int j = 0; j < size; j++) {
					dataGridView1->Rows[i]->Cells[j]->Value = 0;
				}
				dataGridView1->Columns[i]->Width = 50;
				dataGridView1->Rows[i]->Height = 40;

				dataGridView2->Rows[i]->Height = 40;
				dataGridView3->Rows[i]->Height = 40;
				dataGridView4->Rows[i]->Height = 40;
				dataGridView5->Rows[i]->Height = 40;
				dataGridView6->Rows[i]->Height = 40;
				dataGridView7->Rows[i]->Height = 40;
				dataGridView2->Rows[i]->Cells[0]->Value = 0;
				dataGridView3->Rows[i]->Cells[0]->Value = 0;
				dataGridView4->Rows[i]->Cells[0]->Value = 0;
				dataGridView5->Rows[i]->Cells[0]->Value = 0;
				dataGridView6->Rows[i]->Cells[0]->Value = 0;
				dataGridView7->Rows[i]->Cells[0]->Value = 0;
			}
			textBox4->Text = Convert::ToString("Size = " + size);
			textBox5->Text = Convert::ToString("Det = " + 0);
		}
		

	}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	std::vector<std::vector<double>> D(size, std::vector<double>(size));
	Functions f;
	//	std::vector<double> B(size);
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			D[i][j] = Convert::ToDouble(dataGridView1->Rows[i]->Cells[j]->Value);
		}
		//B[i] = Convert::ToDouble(dataGridView1->Rows[i]->Cells[0]->Value);
	}
	textBox5->Text = Convert::ToString("Det = " + f.determinant(D));
	for (int i = 0; i < 2; i++) {
		std::pair<std::vector<std::vector<double>>, std::vector<double>> pair;
		std::vector<std::vector<double>> A(size, std::vector<double>(size));
		std::vector<double> B(size);
		std::vector<double> resultGauss(size);
		std::vector<double> resultCramer(size);
		std::vector<double> resultIiter(size);
		std::vector<double> resultZeidel(size);
		std::vector<double> resultLU(size);

		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				A[i][j] = Convert::ToDouble(dataGridView1->Rows[i]->Cells[j]->Value);
			}
			B[i] = Convert::ToDouble(dataGridView2->Rows[i]->Cells[0]->Value);
		}


		Gauss *gauss = new Gauss();
		auto start_time = std::chrono::steady_clock::now();
		resultGauss = gauss->gaussMethod(A, B);
		auto finish_time = std::chrono::steady_clock::now();

		for (int i = 0; i < size; i++) {
			dataGridView3->Rows[i]->Cells[0]->Value = resultGauss[i];
		}
		auto result_time = std::chrono::duration_cast<std::chrono::microseconds>(finish_time - start_time);
		textBox6->Text = Convert::ToString(result_time.count() + " 탎");


		Cramer *cramer = new Cramer;
		start_time = std::chrono::steady_clock::now();
		resultCramer = cramer->cramerMethod(A, B);
		finish_time = std::chrono::steady_clock::now();

		for (int i = 0; i < size; i++) {
			dataGridView4->Rows[i]->Cells[0]->Value = resultCramer[i];
		}
		result_time = std::chrono::duration_cast<std::chrono::microseconds>(finish_time - start_time);

		textBox7->Text = Convert::ToString(result_time.count() + " 탎");


		ProstIteration *iter = new ProstIteration;
		start_time = std::chrono::steady_clock::now();
		resultIiter = iter->prostIterMethod(A, B);
		finish_time = std::chrono::steady_clock::now();

		for (int i = 0; i < size; i++) {
			dataGridView5->Rows[i]->Cells[0]->Value = resultIiter[i];
		}
		result_time = std::chrono::duration_cast<std::chrono::microseconds>(finish_time - start_time);
		textBox8->Text = Convert::ToString(result_time.count() + " 탎");


		Zeidel *zeidel = new Zeidel;
		start_time = std::chrono::steady_clock::now();
		resultZeidel = zeidel->zeidelMethod(A, B);
		finish_time = std::chrono::steady_clock::now();

		for (int i = 0; i < size; i++) {
			dataGridView6->Rows[i]->Cells[0]->Value = resultZeidel[i];
		}
		result_time = std::chrono::duration_cast<std::chrono::microseconds>(finish_time - start_time);
		textBox9->Text = Convert::ToString(result_time.count() + " 탎");



		UppDownTriangle *lu = new UppDownTriangle;
		start_time = std::chrono::steady_clock::now();
		resultLU = lu->LU(A, B);
		finish_time = std::chrono::steady_clock::now();
		for (int i = 0; i < size; i++) {
			dataGridView7->Rows[i]->Cells[0]->Value = resultLU[i];
		}
		result_time = std::chrono::duration_cast<std::chrono::microseconds>(finish_time - start_time);
		textBox10->Text = Convert::ToString(result_time.count() + " 탎"); 

	}
}
private: System::Void button3_Click_1(System::Object^  sender, System::EventArgs^  e) {
	Functions f;
	std::pair<std::vector<std::vector<double>>, std::vector<double>> pair;
	pair = f.generateRandomMatrix(size);

	for (int i = 0; i < size; ++i) {
		for (int j = 0; j < size; ++j) {
			dataGridView1->Rows[i]->Cells[j]->Value = pair.first[i][j];
		}
		dataGridView2->Rows[i]->Cells[0]->Value = pair.second[i];
	}

	std::vector<std::vector<double>> A(size, std::vector<double>(size));
	//	std::vector<double> B(size);
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			A[i][j] = Convert::ToDouble(dataGridView1->Rows[i]->Cells[j]->Value);
		}
		//B[i] = Convert::ToDouble(dataGridView1->Rows[i]->Cells[0]->Value);
	}
	textBox5->Text = Convert::ToString("Det = " + f.determinant(A));
	
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void dataGridView4_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
}
private: System::Void dataGridView3_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	
}
private: System::Void dataGridView2_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
}

};
}
