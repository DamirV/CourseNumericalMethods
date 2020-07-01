#pragma once
#include<fstream>
#include<string>
#include<cstdlib>
#include "cmath"
#include"Functions.h"
#include <process.h>

namespace Splines {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;
	using namespace System::Windows::Forms::DataVisualization::Charting;

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
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;


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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(118, 584);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(1092, 38);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(118, 558);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(90, 20);
			this->textBox2->TabIndex = 1;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1216, 584);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(91, 38);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Считать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(1216, 555);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(91, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Открыть файл";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(13, 12);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series2->Legend = L"Legend1";
			series2->Name = L"Series2";
			series2->Color = Color::Black;
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(1192, 540);
			this->chart1->TabIndex = 4;
			this->chart1->Text = L"chart1";
			this->chart1->Click += gcnew System::EventHandler(this, &MyForm::chart1_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(12, 558);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 5;
			this->textBox3->Text = L"Кол-во точек:";
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->textBox4->Location = System::Drawing::Point(12, 584);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(100, 38);
			this->textBox4->TabIndex = 6;
			this->textBox4->Text = L"Точки:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1322, 634);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		
	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

			chart1->Series["Series1"]->Points->Clear();
			chart1->Series["Series2"]->Points->Clear();

			std::ofstream outfile("outfile.txt");

			System::String^ tmpstr = Convert::ToString(textBox1->Text);
			const char* tempchr = (const char*)(Marshal::StringToHGlobalAnsi(tmpstr)).ToPointer();
			std::string str(tempchr);

			outfile << str;
			outfile.close();


			int size = Convert::ToInt32(textBox2->Text);
			std::ifstream infile("outfile.txt");
			std::map<double, double> points;

			for (int i = 0; i < size; i++) {
				double x;
				double y;
				infile >> x >> y;
				points.insert(std::make_pair(x, y));
			}

			infile.close();

			TSpline tsp(points, size);
			tsp.findFunc();
			tsp.printFunc("outfile.txt");

			for (int i = 0; i < size; i++) {
				for (double x = tsp.getX(i); x <= tsp.getX(i + 1); x += 0.1) {

					chart1->Series["Series1"]->Points->AddXY(x, tsp.getA(i) + tsp.getB(i) * (x - tsp.getX(i)) + tsp.getC(i)*(x - tsp.getX(i)) * (x - tsp.getX(i)) + tsp.getD(i) * (x - tsp.getX(i)) * (x - tsp.getX(i)) * (x - tsp.getX(i)));
				}
				chart1->Series["Series2"]->Points->AddXY(tsp.getX(i), tsp.getA(i));
			}
		
	}

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		system("outfile.txt");
	}


	private: System::Void chart1_Click(System::Object^  sender, System::EventArgs^  e) {

	}
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void openFileDialog1_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {

}
};
}