#pragma once
#include "Tester.h"
#include "Borders.h"

namespace RegistrationForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для RegistrationForm
	/// </summary>
	public ref class RegistrationForm : public System::Windows::Forms::Form
	{
	public:
		RegistrationForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//			
		}


	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~RegistrationForm()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::TextBox^ textBox_name;
	private: System::Windows::Forms::TextBox^ textBox_surname;
	private: System::Windows::Forms::TextBox^ textBox_confirmPassword;
	private: System::Windows::Forms::CheckBox^ checkBox_licenceAgreement;
	private: System::Windows::Forms::Button^ button_registration;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox_email;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label_incorrectFields;
	private: System::Windows::Forms::TextBox^ textBox_password;

	protected:


	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox_name = (gcnew System::Windows::Forms::TextBox());
			this->textBox_surname = (gcnew System::Windows::Forms::TextBox());
			this->textBox_confirmPassword = (gcnew System::Windows::Forms::TextBox());
			this->checkBox_licenceAgreement = (gcnew System::Windows::Forms::CheckBox());
			this->button_registration = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox_email = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label_incorrectFields = (gcnew System::Windows::Forms::Label());
			this->textBox_password = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// textBox_name
			// 
			this->textBox_name->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox_name->Location = System::Drawing::Point(58, 110);
			this->textBox_name->Name = L"textBox_name";
			this->textBox_name->Size = System::Drawing::Size(221, 13);
			this->textBox_name->TabIndex = 2;
			this->textBox_name->GotFocus += gcnew System::EventHandler(this, &RegistrationForm::textBox_name_GotFocus);
			this->textBox_name->LostFocus += gcnew System::EventHandler(this, &RegistrationForm::textBox_name_LostFocus);
			// 
			// textBox_surname
			// 
			this->textBox_surname->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox_surname->Location = System::Drawing::Point(58, 163);
			this->textBox_surname->Name = L"textBox_surname";
			this->textBox_surname->Size = System::Drawing::Size(221, 13);
			this->textBox_surname->TabIndex = 5;
			this->textBox_surname->GotFocus += gcnew System::EventHandler(this, &RegistrationForm::textBox_surname_GotFocus);
			this->textBox_surname->LostFocus += gcnew System::EventHandler(this, &RegistrationForm::textBox_surname_LostFocus);
			// 
			// textBox_confirmPassword
			// 
			this->textBox_confirmPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox_confirmPassword->Location = System::Drawing::Point(58, 269);
			this->textBox_confirmPassword->Name = L"textBox_confirmPassword";
			this->textBox_confirmPassword->PasswordChar = '.';
			this->textBox_confirmPassword->Size = System::Drawing::Size(221, 13);
			this->textBox_confirmPassword->TabIndex = 9;
			this->textBox_confirmPassword->GotFocus += gcnew System::EventHandler(this, &RegistrationForm::textBox_confirmPassword_GotFocus);
			this->textBox_confirmPassword->LostFocus += gcnew System::EventHandler(this, &RegistrationForm::textBox_confirmPassword_LostFocus);
			// 
			// checkBox_licenceAgreement
			// 
			this->checkBox_licenceAgreement->AutoSize = true;
			this->checkBox_licenceAgreement->Location = System::Drawing::Point(58, 327);
			this->checkBox_licenceAgreement->Name = L"checkBox_licenceAgreement";
			this->checkBox_licenceAgreement->Size = System::Drawing::Size(277, 17);
			this->checkBox_licenceAgreement->TabIndex = 11;
			this->checkBox_licenceAgreement->TabStop = false;
			this->checkBox_licenceAgreement->Text = L"Я принимаю условия лицензионного соглашения";
			this->checkBox_licenceAgreement->UseVisualStyleBackColor = true;
			this->checkBox_licenceAgreement->Click += gcnew System::EventHandler(this, &RegistrationForm::checkBox_licenceAgreement_Click);
			// 
			// button_registration
			// 
			this->button_registration->Location = System::Drawing::Point(58, 480);
			this->button_registration->Name = L"button_registration";
			this->button_registration->Size = System::Drawing::Size(159, 33);
			this->button_registration->TabIndex = 12;
			this->button_registration->TabStop = false;
			this->button_registration->Text = L"Зарегистрироваться";
			this->button_registration->UseVisualStyleBackColor = true;
			this->button_registration->Click += gcnew System::EventHandler(this, &RegistrationForm::button_registration_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(55, 72);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 13);
			this->label1->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::Color::Red;
			this->label2->Location = System::Drawing::Point(55, 126);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 13);
			this->label2->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::Red;
			this->label3->Location = System::Drawing::Point(55, 179);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 13);
			this->label3->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::Red;
			this->label4->Location = System::Drawing::Point(55, 233);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 13);
			this->label4->TabIndex = 8;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::Color::Red;
			this->label5->Location = System::Drawing::Point(55, 285);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 13);
			this->label5->TabIndex = 10;
			// 
			// textBox_email
			// 
			this->textBox_email->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox_email->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_email->Location = System::Drawing::Point(58, 56);
			this->textBox_email->MaxLength = 128;
			this->textBox_email->Name = L"textBox_email";
			this->textBox_email->Size = System::Drawing::Size(221, 13);
			this->textBox_email->TabIndex = 0;
			this->textBox_email->GotFocus += gcnew System::EventHandler(this, &RegistrationForm::textBox_email_GotFocus);
			this->textBox_email->LostFocus += gcnew System::EventHandler(this, &RegistrationForm::textBox_email_LostFocus);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(55, 40);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(32, 13);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Email";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(55, 94);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(29, 13);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Имя";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(55, 147);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(56, 13);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Фамилия";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(55, 253);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(127, 13);
			this->label9->TabIndex = 16;
			this->label9->Text = L"Подтверждение пароля";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(55, 201);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(45, 13);
			this->label10->TabIndex = 17;
			this->label10->Text = L"Пароль";
			// 
			// label_incorrectFields
			// 
			this->label_incorrectFields->AllowDrop = true;
			this->label_incorrectFields->AutoSize = true;
			this->label_incorrectFields->ForeColor = System::Drawing::Color::Red;
			this->label_incorrectFields->Location = System::Drawing::Point(55, 388);
			this->label_incorrectFields->Name = L"label_incorrectFields";
			this->label_incorrectFields->Size = System::Drawing::Size(0, 13);
			this->label_incorrectFields->TabIndex = 18;
			// 
			// textBox_password
			// 
			this->textBox_password->BackColor = System::Drawing::SystemColors::Window;
			this->textBox_password->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox_password->Location = System::Drawing::Point(58, 217);
			this->textBox_password->Name = L"textBox_password";
			this->textBox_password->PasswordChar = '.';
			this->textBox_password->Size = System::Drawing::Size(221, 13);
			this->textBox_password->TabIndex = 7;
			this->textBox_password->GotFocus += gcnew System::EventHandler(this, &RegistrationForm::textBox_password_GotFocus);
			this->textBox_password->LostFocus += gcnew System::EventHandler(this, &RegistrationForm::textBox_password_LostFocus);
			// 
			// RegistrationForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->ClientSize = System::Drawing::Size(654, 525);
			this->Controls->Add(this->textBox_password);
			this->Controls->Add(this->textBox_name);
			this->Controls->Add(this->textBox_email);
			this->Controls->Add(this->textBox_surname);
			this->Controls->Add(this->label_incorrectFields);
			this->Controls->Add(this->textBox_confirmPassword);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button_registration);
			this->Controls->Add(this->checkBox_licenceAgreement);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->DoubleBuffered = true;
			this->Name = L"RegistrationForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Форма регистрации";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	protected: System::Void OnPaint(PaintEventArgs^ e) override;


	private: System::Void textBox_email_GotFocus(System::Object^ sender, System::EventArgs^ e);
	private: System::Void textBox_name_GotFocus(System::Object^ sender, System::EventArgs^ e);
	private: System::Void textBox_surname_GotFocus(System::Object^ sender, System::EventArgs^ e);
	private: System::Void textBox_password_GotFocus(System::Object^ sender, System::EventArgs^ e);
	private: System::Void textBox_confirmPassword_GotFocus(System::Object^ sender, System::EventArgs^ e);
	private: System::Void textBox_email_LostFocus(System::Object^ sender, System::EventArgs^ e);
	private: System::Void textBox_name_LostFocus(System::Object^ sender, System::EventArgs^ e);
	private: System::Void textBox_surname_LostFocus(System::Object^ sender, System::EventArgs^ e);
	private: System::Void textBox_password_LostFocus(System::Object^ sender, System::EventArgs^ e);
	private: System::Void textBox_confirmPassword_LostFocus(System::Object^ sender, System::EventArgs^ e);

	private: System::Void checkBox_licenceAgreement_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_registration_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void drawBorders();


};
}
