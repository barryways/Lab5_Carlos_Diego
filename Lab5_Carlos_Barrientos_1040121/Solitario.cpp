#include "Solitario.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Ejercicio2::MyForm form;
	Application::Run(% form);
	return 0;
}
