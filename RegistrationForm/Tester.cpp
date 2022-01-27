#include "Tester.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Drawing;


#define	TEST_FIELD(field, function) 


Tester* Tester::tester_ = nullptr;

Tester* Tester::GetInstance()
{
	if (tester_ == nullptr)
		tester_ = new Tester();
	return tester_;
}

bool Tester::isCorrectEmail(const std::string& email)
{
	emailUnchecked = false;
	std::regex re(R"(^[^\\#$%]+@[^\#$%]+.[^\#$%]+$)"); //any symbols except given
	correctEmail = std::regex_match(email, re);
	return correctEmail;
}

bool Tester::isCorrectName(const std::string& name)
{
	nameUnchecked = false;
	std::regex re(R"([a-zA-Zà-ÿÀ-ÿ0-9]+)"); //any symbols except spec
	correctName = name.size() == 0 || std::regex_match(name, re); //either blank or correct
	return correctName; 
}

bool Tester::isCorrectSurname(const std::string& surname)
{
	surnameUnchecked = false;
	std::regex re(R"([a-zA-Zà-ÿÀ-ÿ0-9]+)"); //any symbols except spec
	correctSurname = surname.size() == 0 || std::regex_match(surname, re); //either blank or correct
	return correctSurname;
}

bool Tester::isCorrectPassword(const std::string& password)
{
	passwordUnchecked = false;
	std::regex re(R"((?=.*[0-9])(?=.*[!@#$%^&*]).{8,})"); //at least 1 num, 1 spec, 8 of any
	correctPassword = std::regex_match(password, re);
	return correctPassword;
}

bool Tester::passwordsMatched(const std::string& password, const std::string& passwordConfirmation)
{
	confirmPasswordUnchecked = false;
	if (password == passwordConfirmation && passwordConfirmation != "")
	{
		this->passwordConfirmed = true;
		return true;
	}
	return false;
}


void Tester::changeLicenceAgreement()
{
	licenceAgreed = !licenceAgreed;
}

bool Tester::allFieldsCorrect() const
{
	return (this->correctEmail && this->correctName && this->correctSurname && this->correctPassword && this->passwordConfirmed);
}