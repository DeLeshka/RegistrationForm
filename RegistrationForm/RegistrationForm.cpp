#include "RegistrationForm.h"
#include <sstream>
#include <msclr\marshal_cppstd.h>
#include "Borders.h"
#include "Tester.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Drawing;

[STAThreadAttribute]
void main()
{
	setlocale(LC_ALL, "Russian");
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	RegistrationForm::RegistrationForm form;
	Application::Run(% form);
}



System::Void RegistrationForm::RegistrationForm::textBox_email_LostFocus(System::Object^ sender, System::EventArgs^ e)
{
	Tester* tester = Tester::GetInstance();
	std::string emailStr = msclr::interop::marshal_as<std::string>(this->textBox_email->Text);
	if (tester->isCorrectEmail(emailStr))
	{
		this->label1->Text = "";
	}
	else
	{
		this->label1->Text = "Необходимо заполнить поле в формате xxx@xxx.xxx";
	}
	this->drawBorders();
	return System::Void();
}

System::Void RegistrationForm::RegistrationForm::textBox_name_LostFocus(System::Object^ sender, System::EventArgs^ e)
{
	Tester* tester = Tester::GetInstance();
	std::string nameStr = msclr::interop::marshal_as<std::string>(this->textBox_name->Text);
	if (tester->isCorrectName(nameStr))
	{
		this->label2->Text = "";
	}
	else
	{
		this->label2->Text = "Поле заполнено некорректно. Нельзя использовать спецсимволы";
	}
	this->drawBorders();
	return System::Void();
}

System::Void RegistrationForm::RegistrationForm::textBox_surname_LostFocus(System::Object^ sender, System::EventArgs^ e)
{
	Tester* tester = Tester::GetInstance();
	std::string surnameStr = msclr::interop::marshal_as<std::string>(this->textBox_surname->Text);
	if (tester->isCorrectSurname(surnameStr))
	{
		this->label3->Text = "";
	}
	else
	{
		this->label3->Text = "Поле заполнено некорректно. Нельзя использовать спецсимволы";
	}
	this->drawBorders();
	return System::Void();
}

System::Void RegistrationForm::RegistrationForm::textBox_password_LostFocus(System::Object^ sender, System::EventArgs^ e)
{
	Tester* tester = Tester::GetInstance();
	std::string passwordStr = msclr::interop::marshal_as<std::string>(this->textBox_password->Text);
	if (tester->isCorrectPassword(passwordStr))
	{
		this->label4->Text = "";
	}
	else
	{
		this->label4->Text = "Пароль должен содержать не менее 8 символов и должен содержать хотя бы один спецсимвол и цифру";
	}
	this->drawBorders();
	return System::Void();
}

System::Void RegistrationForm::RegistrationForm::textBox_confirmPassword_LostFocus(System::Object^ sender, System::EventArgs^ e)
{
	Tester* tester = Tester::GetInstance();
	std::string passwordStr = msclr::interop::marshal_as<std::string>(this->textBox_password->Text);
	std::string passwordConfirmationStr = msclr::interop::marshal_as<std::string>(this->textBox_confirmPassword->Text);

	if (tester->passwordsMatched(passwordStr, passwordConfirmationStr))
	{
		this->label5->Text = "";
	}
	else if (passwordConfirmationStr == "")
	{
		this->label5->Text = "Поле должно быть заполнено";
	}
	else
	{
		this->label5->Text = "Пароли должны совпадать";
	}
	this->drawBorders();
	return System::Void();
}


System::Void RegistrationForm::RegistrationForm::textBox_email_GotFocus(System::Object^ sender, System::EventArgs^ e)
{
	this->label1->Text = "";
	return System::Void();
}

System::Void RegistrationForm::RegistrationForm::textBox_name_GotFocus(System::Object^ sender, System::EventArgs^ e)
{
	this->label2->Text = "";
	return System::Void();
}

System::Void RegistrationForm::RegistrationForm::textBox_surname_GotFocus(System::Object^ sender, System::EventArgs^ e)
{
	this->label3->Text = "";
	return System::Void();
}

System::Void RegistrationForm::RegistrationForm::textBox_password_GotFocus(System::Object^ sender, System::EventArgs^ e)
{
	this->label4->Text = "";
	return System::Void();
}

System::Void RegistrationForm::RegistrationForm::textBox_confirmPassword_GotFocus(System::Object^ sender, System::EventArgs^ e)
{
	this->label5->Text = "";
	return System::Void();
}


System::Void RegistrationForm::RegistrationForm::OnPaint(PaintEventArgs^ e)
{
	//there was a bug when first tab cauded paintEvent twice and cleanced all the borders, so this crutch fixes this
	this->drawBorders();

	return System::Void();
}

System::Void RegistrationForm::RegistrationForm::checkBox_licenceAgreement_Click(System::Object^ sender, System::EventArgs^ e)
{
	Tester* tester = Tester::GetInstance();
	tester->changeLicenceAgreement();
	return System::Void();
}


System::Void RegistrationForm::RegistrationForm::button_registration_Click(System::Object^ sender, System::EventArgs^ e)
{
	//on registration click all checks must be redone
	if (!this->checkBox_licenceAgreement->Checked)
	{
		MessageBox::Show("Для регистрации необходимо ознакомиться с лицензионным соглашением и принять его", "Внимание!");
		return System::Void();
	}
	Tester* tester = Tester::GetInstance();

	//recheck
	this->textBox_email_LostFocus(sender, e);
	this->textBox_name_LostFocus(sender, e);
	this->textBox_surname_LostFocus(sender, e);
	this->textBox_password_LostFocus(sender, e);
	this->textBox_confirmPassword_LostFocus(sender, e);

	if (!tester->allFieldsCorrect())
	{
		this->label_incorrectFields->Text = "Некорректно заполнены поля:\n";
		if (!tester->getEmailStatus())
			this->label_incorrectFields->Text += "Email\n";
		if (!tester->getNameStatus())
			this->label_incorrectFields->Text += "Имя\n";
		if (!tester->getSurnameStatus())
			this->label_incorrectFields->Text += "Фамилия\n";
		if (!tester->getPasswordStatus())
			this->label_incorrectFields->Text += "Пароль\n";
		if (!tester->getPasswordConfirmedStatus())
			this->label_incorrectFields->Text += "Подтверждение пароля\n";
	}
	else
	{

		MessageBox::Show("Выполняется переход в личный кабинет", "Личный кабинет");
	}

	return System::Void();
}

System::Void RegistrationForm::RegistrationForm::drawBorders()
{
	Tester* tester = Tester::GetInstance();
	Color emailColor = tester->isEmailUnchecked() || tester->getEmailStatus() || this->textBox_email->Focused ? Color::Black : Color::Red;
	Color nameColor = tester->isNameUnchecked() || tester->getNameStatus() || this->textBox_name->Focused ? Color::Black : Color::Red;
	Color surnameColor = tester->isSurnameUnchecked() || tester->getSurnameStatus() || this->textBox_surname->Focused ? Color::Black : Color::Red;
	Color passwordColor = tester->isPasswordUnchecked() || tester->getPasswordStatus() || this->textBox_password->Focused ? Color::Black : Color::Red;
	Color confirmPasswordColor = tester->isConfirmPasswordUnchecked() || tester->getPasswordConfirmedStatus() || this->textBox_confirmPassword->Focused ? Color::Black : Color::Red;

	Borders::drawBorder(this, textBox_email, emailColor);
	Borders::drawBorder(this, textBox_name, nameColor);
	Borders::drawBorder(this, textBox_surname, surnameColor);
	Borders::drawBorder(this, textBox_password, passwordColor);
	Borders::drawBorder(this, textBox_confirmPassword, confirmPasswordColor);

	return System::Void();
}








