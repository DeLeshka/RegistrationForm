#pragma once

#include <string>
#include <regex>



//singleton class for tests
class Tester
{
protected:
	Tester(){}
	static Tester* tester_;

	bool correctEmail      = false;
	bool correctName       = true;
	bool correctSurname    = true;
	bool correctPassword   = false;
	bool passwordConfirmed = false;
	bool licenceAgreed     = false;
	
	bool emailUnchecked			 	= true;
	bool nameUnchecked			 	= true;
	bool surnameUnchecked		 	= true;
	bool passwordUnchecked		 	= true;
	bool confirmPasswordUnchecked	= true;

public:
	Tester(Tester& other) = delete;
	void operator=(const Tester&) = delete;

	static Tester* GetInstance();

	bool getEmailStatus()             const { return correctEmail; }
	bool getNameStatus()              const { return correctName; }
	bool getSurnameStatus()           const { return correctSurname; }
	bool getPasswordStatus()          const { return correctPassword; }
	bool getPasswordConfirmedStatus() const { return passwordConfirmed; }
	
	 
	bool isEmailUnchecked()           const { return emailUnchecked; }
	bool isNameUnchecked()            const { return nameUnchecked; }
	bool isSurnameUnchecked()         const { return surnameUnchecked; }
	bool isPasswordUnchecked()        const { return passwordUnchecked; }
	bool isConfirmPasswordUnchecked() const { return confirmPasswordUnchecked; }

	bool isCorrectEmail(const std::string& email);
	bool isCorrectName(const std::string& name);
	bool isCorrectSurname(const std::string& surname);
	bool isCorrectPassword(const std::string& password);
	bool passwordsMatched(const std::string& password, const std::string& passwordConfirmation);
	bool allFieldsCorrect() const;

	void changeLicenceAgreement();
};