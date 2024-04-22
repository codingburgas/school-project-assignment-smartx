#pragma once
#include "Users.h"
#include "Registration.h"
#include "MainForm.h"


namespace SmartX {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
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
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
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
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(297, 236);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 16);
			this->label1->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28, System::Drawing::FontStyle::Bold));
			this->label2->Location = System::Drawing::Point(426, 79);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(142, 54);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Login";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold));
			this->label3->Location = System::Drawing::Point(228, 220);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(102, 36);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Email:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold));
			this->label4->Location = System::Drawing::Point(166, 286);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(164, 36);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Password:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(369, 220);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(309, 36);
			this->textBox1->TabIndex = 9;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(369, 286);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(309, 36);
			this->textBox2->TabIndex = 10;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->button1->Location = System::Drawing::Point(548, 377);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(130, 49);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Login";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Login::button1_Click_1);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button2->Location = System::Drawing::Point(580, 432);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(98, 25);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Registration";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Login::button2_Click);
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Lavender;
			this->ClientSize = System::Drawing::Size(1067, 578);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"Login";
			this->Text = L"Login";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
		{
			/*this->Hide();
			Registration^ reg = gcnew Registration();
			reg->Show();*/
		}

public: Users^ user = nullptr;

private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) 
{
	String^ email = this->textBox1->Text;
	String^ password = this->textBox2->Text;

	if (email->Length == 0 || password->Length == 0)
	{
		MessageBox::Show("Please enter your email and your password");
		return;
	}

	try
	{
		String^ connect = "Data Source=smartx.database.windows.net;Initial Catalog=SmartX;User ID=MIDimova21;Password=Gam14402;Encrypt=True";

		SqlConnection sqlConn(connect);
		sqlConn.Open();

		String^ sqlQuery = "SELECT * FROM Users WHERE Email=@Email AND Password=@Password;";
		SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@Email", email);
		command.Parameters->AddWithValue("@Password", password);
	
		SqlDataReader^ reader = command.ExecuteReader();
		if (reader->Read())
		{
			user = gcnew Users;
			user->Id = reader->GetInt32(0);
			user->FirstName = reader->GetString(1);
			user->LastName = reader->GetString(2);
			user->Email = reader->GetString(3);
			user->Password = reader->GetString(4);

			this->Hide();
			MainForm^ mainForm = gcnew MainForm();
			mainForm->Show();

		}
		else
		{
			MessageBox::Show("Email or password is incorrect");
		}
	}
	catch (Exception^ e)
	{
		MessageBox::Show("Failed to connect database");
	}
}
};
}
