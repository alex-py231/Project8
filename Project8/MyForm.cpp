#include "MyForm.h"
#include <windows.h>
// Required namespaces
using namespace System;
using namespace System::Windows::Forms;

// Application entry point
[STAThreadAttribute]
void main(cli::array<String^>^ args)
{
	// Initial Application Parameters:
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	// ChartCPP - name of your project / namespace of your project
	// MyFormMyForm - name of the form to launch
	Project8::MyForm form;
	Application::Run(% form);
}

System::Void Project8::MyForm::ïîñòðîèòüÃðàôèêToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->chart1->Series[0]->Points->Clear();
	if (textBox1->Text == "" || textBox2->Text == "")
	{
		MessageBox::Show("Default parameters!", "Attention!");
		defolt_params();
	}
	else
	{
		this->alpha = Convert::ToDouble(textBox2->Text);
		this->v0 = Convert::ToDouble(textBox1->Text);
	}
	MoveBody body(this->v0, this->alpha);
	body.Path();
	int n = body.get_n();
	float* x = new float[n];
	float* y = new float[n];
	for (int i = 0; i < n; i++)
	{
		x[i] = i;
		y[i] = i;
	}
	body.get_x(x);
	body.get_y(y);
	for (int i = 0; i < n; i++)
	{
		this->chart1->Series[0]->Points->AddXY(x[i], y[i]);
	}
	this->x = x;
	this->y = y;
	color = gcnew Color();
	pen = gcnew Pen(color->Green);
	brush_1 = gcnew SolidBrush(color->Green);
	brush_2 = gcnew SolidBrush(color->White);
	Image = this->panel->CreateGraphics();
	Image->Clear(System::Drawing::Color::White);
	this->bufferGRcontext = BufferedGraphicsManager::Current;
	int W;
	W = panel->Width - 1;
	H = panel->Height - 1;
	this->bufferGRcontext->MaximumBuffer = System::Drawing::Size(W + 1, H + 1);
	this->bufferGR = bufferGRcontext->Allocate(Image, System::Drawing::Rectangle(0, 0, W + 1, H + 1));
	bufferGR->Graphics->Clear(System::Drawing::Color::White);
	pr_x = W / x[n - 1];
	pr_y = H / y[(n / 2) - 1];
	this->n = n;
	this->I = 0;
	this->timer1->Enabled = true;
}

System::Void Project8::MyForm::î÷èñòèòüÃðàôèêToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->chart1->Series[0]->Points->Clear();
}

System::Void Project8::MyForm::âûõîäToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (MessageBox::Show("Exit?", "Attention!", MessageBoxButtons::YesNo) == Windows::Forms::DialogResult::Yes) {
		Application::Exit();
	}
}

void Project8::MyForm::defolt_params()
{
	this->v0 = 10;
	this->alpha = 0.5;
}
