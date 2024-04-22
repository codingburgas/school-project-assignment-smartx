#include "Register.h"
//#include "MainForm.h"
#include "Login.h"
#include "Registration.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    // Run the main form
    Application::Run(gcnew SmartX::Registration());
    return 0;
}
