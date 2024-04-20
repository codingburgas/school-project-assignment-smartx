#include "Login.h"
#include "MainForm.h"
#include "Registration.h"

using namespace System;
using namespace System::Windows::Forms;

void loginForm(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	
	Users^ User = nullptr;
	while (true)
	{
		SmartX::Login loginForm;
		loginForm.ShowDialog();

		if (loginForm.swichToRegistration)
		{
			SmartX::Registration registrationForm;
			registrationForm.ShowDialog();

			if (registrationForm.swichToLogin)
			{
				continue;
			}
			else
			{
				User = registrationForm.user;
				break;
			}
		}
		else
		{
			User = loginForm.user;
			break;
		}
	}

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

