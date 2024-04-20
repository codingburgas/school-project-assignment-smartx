#include "Login.h"
#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;

void loginForm(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	SmartX::Login loginForm;

	loginForm.ShowDialog();
	Users^ User = loginForm.user;

	if (User != nullptr)
	{
		SmartX::MainForm mainForm();
		Application::Run(% mainForm());
	}
	else
	{
		MessageBox::Show("Authentication Canceled");
	}
}

