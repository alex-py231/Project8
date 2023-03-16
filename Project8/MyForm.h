#pragma once
#include "MoveBody.h"
namespace Project8 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòğóêòîğà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ìåíşToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïîñòğîèòüÃğàôèêToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ î÷èñòèòüÃğàôèêToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âûõîäToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Panel^ panel;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;




	protected:

	protected:

	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ìåíşToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïîñòğîèòüÃğàôèêToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->î÷èñòèòüÃğàôèêToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûõîäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel = (gcnew System::Windows::Forms::Panel());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(6, 40);
			this->chart1->Name = L"chart1";
			series1->BorderWidth = 2;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Color = System::Drawing::Color::Blue;
			series1->Legend = L"Legend1";
			series1->LegendText = L"y(x)";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(435, 335);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			title1->Name = L"Title1";
			title1->Text = L"Çàâèñèìîñòü y îò x äëÿ òåëà áğîøåíîãî ïîä óãëîì ê ãîğèçîíòó";
			this->chart1->Titles->Add(title1);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ìåíşToolStripMenuItem,
					this->âûõîäToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1144, 28);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ìåíşToolStripMenuItem
			// 
			this->ìåíşToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ïîñòğîèòüÃğàôèêToolStripMenuItem,
					this->î÷èñòèòüÃğàôèêToolStripMenuItem
			});
			this->ìåíşToolStripMenuItem->Name = L"ìåíşToolStripMenuItem";
			this->ìåíşToolStripMenuItem->Size = System::Drawing::Size(65, 24);
			this->ìåíşToolStripMenuItem->Text = L"Ìåíş";
			// 
			// ïîñòğîèòüÃğàôèêToolStripMenuItem
			// 
			this->ïîñòğîèòüÃğàôèêToolStripMenuItem->Name = L"ïîñòğîèòüÃğàôèêToolStripMenuItem";
			this->ïîñòğîèòüÃğàôèêToolStripMenuItem->Size = System::Drawing::Size(217, 26);
			this->ïîñòğîèòüÃğàôèêToolStripMenuItem->Text = L"ïîñòğîèòü ãğàôèê";
			this->ïîñòğîèòüÃğàôèêToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ïîñòğîèòüÃğàôèêToolStripMenuItem_Click);
			// 
			// î÷èñòèòüÃğàôèêToolStripMenuItem
			// 
			this->î÷èñòèòüÃğàôèêToolStripMenuItem->Name = L"î÷èñòèòüÃğàôèêToolStripMenuItem";
			this->î÷èñòèòüÃğàôèêToolStripMenuItem->Size = System::Drawing::Size(217, 26);
			this->î÷èñòèòüÃğàôèêToolStripMenuItem->Text = L"î÷èñòèòü ãğàôèê";
			this->î÷èñòèòüÃğàôèêToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::î÷èñòèòüÃğàôèêToolStripMenuItem_Click);
			// 
			// âûõîäToolStripMenuItem
			// 
			this->âûõîäToolStripMenuItem->Name = L"âûõîäToolStripMenuItem";
			this->âûõîäToolStripMenuItem->Size = System::Drawing::Size(66, 24);
			this->âûõîäToolStripMenuItem->Text = L"âûõîä";
			this->âûõîäToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::âûõîäToolStripMenuItem_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->chart1);
			this->groupBox1->Location = System::Drawing::Point(12, 44);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(447, 435);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Ãğàôèê";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Location = System::Drawing::Point(34, 516);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(381, 198);
			this->groupBox2->TabIndex = 3;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"ïàğàìåòğû";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(27, 83);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 17);
			this->label2->TabIndex = 3;
			this->label2->Text = L"alpha = ";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(92, 80);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(147, 22);
			this->textBox2->TabIndex = 2;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(92, 40);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(147, 22);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(41, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(25, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"V=";
			// 
			// panel
			// 
			this->panel->Location = System::Drawing::Point(479, 44);
			this->panel->Name = L"panel";
			this->panel->Size = System::Drawing::Size(641, 678);
			this->panel->TabIndex = 4;
			// 
			// timer1
			// 
			this->timer1->Interval = 1;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1144, 751);
			this->Controls->Add(this->panel);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: double v0, alpha;
private:int n;
private: System::Void ïîñòğîèòüÃğàôèêToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void î÷èñòèòüÃğàôèêToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void âûõîäToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: void defolt_params();
private: Pen^ pen;
private: Graphics^ Image;
private: Color^ color;
private: float*x;
private: float*y;
private: int H;
private: int I;
private: float a;
private: float b;
private: float pr_x;
private: float pr_y;
private: SolidBrush^ brush_1;
private: SolidBrush^ brush_2;
private: BufferedGraphics^ bufferGR;
private: BufferedGraphicsContext ^bufferGRcontext;
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) 
{
	if (I < n)
	{
		bufferGR->Graphics->FillEllipse(brush_2, a - 3, H - b + 3, 6., 6.);
		a = x[I] * pr_x;
		b = y[I] * pr_y;
		bufferGR->Graphics ->FillEllipse(brush_1, a - 3, H - b + 3, 6., 6.);
	}
	else {
		this->timer1->Enabled = false;
	}
	I++;
	/*Image->Clear(System::Drawing::Color::White);*/
	bufferGR->Render();
}
};
}
