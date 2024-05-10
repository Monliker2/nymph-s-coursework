#include "page1.h"
using namespace std;
using namespace System;
using namespace mart;
[STAThreadAttribute]

int main(cli::array<System::String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew page1());
    return 0;
}

