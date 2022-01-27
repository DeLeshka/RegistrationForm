#include "Borders.h"

using namespace System::Drawing;

void Borders::drawBorder(System::Windows::Forms::Form^ form, System::Windows::Forms::TextBox^ textBox, System::Drawing::Color color)
{
	Graphics^ g = form->CreateGraphics();
	Pen^ pen = gcnew Pen(color, 1);
	int x = textBox->Location.X;
	int y = textBox->Location.Y;
	int height = textBox->Size.Height;
	int width = textBox->Size.Width;
	g->DrawRectangle(pen, x - 4, y - 2, width + 6, height + 4);
}
