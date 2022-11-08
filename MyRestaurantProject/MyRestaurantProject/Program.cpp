#include "LoginForm.h"
#include "MainForm.h"
using namespace System;
using namespace System::Windows::Forms;



void main(array<String^>^ args)
{

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	MyRestaurantProject::LoginForm loginForm;

	loginForm.ShowDialog();
	User^ user = loginForm.user;

	if (user != nullptr) {
		MyRestaurantProject::MainForm mainForm(user);
		Application::Run(% mainForm);
	}
	else {
		MessageBox::Show("no Elo frajerze",
			"Program.cpp", MessageBoxButtons::OK);
	}
}