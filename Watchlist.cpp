#include "Watchlist.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(array < String^>^ args)
{
 
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(0);
    Wathclist::Watchlist form;
    Application::Run(% form);
}
