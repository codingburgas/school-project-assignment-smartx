#pragma once
#include "Users.h"
#include "MainForm.h"
#include "Login.h"

namespace SmartX {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for Registration
	/// </summary>
	public ref class Registration : public System::Windows::Forms::Form
	{
	public:
		Registration(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Registration()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Registration::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 11);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(193, 48);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28, System::Drawing::FontStyle::Bold));
			this->label2->Location = System::Drawing::Point(376, 64);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(285, 54);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Registration";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold));
			this->label3->Location = System::Drawing::Point(260, 307);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(102, 36);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Email:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold));
			this->label4->Location = System::Drawing::Point(201, 370);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(164, 36);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Password:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(396, 182);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(309, 36);
			this->textBox1->TabIndex = 10;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(197, 182);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(168, 36);
			this->label1->TabIndex = 11;
			this->label1->Text = L"FirstName:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold));
			this->label5->Location = System::Drawing::Point(197, 245);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(165, 36);
			this->label5->TabIndex = 12;
			this->label5->Text = L"LastName:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(396, 245);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(309, 36);
			this->textBox2->TabIndex = 13;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(396, 307);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(309, 36);
			this->textBox3->TabIndex = 14;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(396, 370);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->PasswordChar = '*';
			this->textBox4->Size = System::Drawing::Size(309, 36);
			this->textBox4->TabIndex = 15;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold));
			this->label6->Location = System::Drawing::Point(85, 427);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(280, 36);
			this->label6->TabIndex = 16;
			this->label6->Text = L"Confirm password:";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(396, 427);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->PasswordChar = '*';
			this->textBox5->Size = System::Drawing::Size(309, 36);
			this->textBox5->TabIndex = 17;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->button1->Location = System::Drawing::Point(575, 494);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(130, 49);
			this->button1->TabIndex = 18;
			this->button1->Text = L"Regist";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Registration::button1_Click);
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(665, 546);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(40, 16);
			this->linkLabel1->TabIndex = 19;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Login";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Registration::linkLabel1_LinkClicked);
			// 
			// Registration
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Lavender;
			this->ClientSize = System::Drawing::Size(1067, 578);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"Registration";
			this->Text = L"Registration";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) 
	{
		this->Hide();
		Login ^log = gcnew Login();
		log->Show();
		
	}

		   public: Users^ user = nullptr;
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	String^ firstName = textBox1->Text;
	String^ lastName = textBox2->Text;
	String^ email = textBox3->Text;
	String^ password = textBox4->Text;
	String^ confirmPassword = textBox5->Text;

	if (firstName->Length == 0 || lastName->Length == 0 || email->Length == 0 || password->Length == 0 || confirmPassword->Length == 0)
	{
		MessageBox::Show("Please enter your email and your password");
		return;
	}

	if (String::Compare(password, confirmPassword) != 0)
	{
		MessageBox::Show("Password and confirmPassword are not match");
		return;
	}

	try
	{
		String^ connect = "Data Source=smartx.database.windows.net;Initial Catalog=SmartX;User ID=MIDimova21;Password=Gam14402;Encrypt=True";

		

		SqlConnection sqlConn(connect);
		sqlConn.Open();

		String^ sqlQuery = "INSERT INTO Users " + "(FirstName, LastName, Email, Password) VALUES " + "(@FirstName, @LastName, @Email, @Password);";
		SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@FirstName", firstName);
		command.Parameters->AddWithValue("@LastName", lastName);
		command.Parameters->AddWithValue("@Email", email);
		command.Parameters->AddWithValue("@Password", password);

		command.ExecuteNonQuery();
		user = gcnew Users;
		user->FirstName = firstName;
		user->LastName = lastName;
		user->Email = email;
		user->Password = password;

		this->Hide();
		MainForm^ mainForm = gcnew MainForm();
		mainForm->Show();

		//this->Close();
	}
	catch (Exception^ e)
	{
		MessageBox::Show("Failed to connect database");
	}
}
};
}
