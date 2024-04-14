#pragma once
#include "Exam.h"

namespace SmartX {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Register
	/// </summary>
	public ref class Register : public System::Windows::Forms::Form
	{
	public:
		Register(void)
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
		~Register()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonTest;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	protected:


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
			this->buttonTest = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// buttonTest
			// 
			this->buttonTest->Location = System::Drawing::Point(469, 400);
			this->buttonTest->Name = L"buttonTest";
			this->buttonTest->Size = System::Drawing::Size(135, 47);
			this->buttonTest->TabIndex = 0;
			this->buttonTest->Text = L"Към теста";
			this->buttonTest->UseVisualStyleBackColor = true;
			this->buttonTest->Click += gcnew System::EventHandler(this, &Register::button1_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox1->Location = System::Drawing::Point(20, 21);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(584, 364);
			this->richTextBox1->TabIndex = 2;
			this->richTextBox1->Text = L"Това е теорията на нещата, на които ще се научите.\nТя е много важна, защото трябв"
				L"а да разбирате тези неща.";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->richTextBox1);
			this->groupBox1->Controls->Add(this->buttonTest);
			this->groupBox1->Location = System::Drawing::Point(12, 21);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(625, 453);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Кратка теория";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->richTextBox2);
			this->groupBox2->Location = System::Drawing::Point(643, 21);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(527, 453);
			this->groupBox2->TabIndex = 4;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Примерен код";
			// 
			// richTextBox2
			// 
			this->richTextBox2->Font = (gcnew System::Drawing::Font(L"Lucida Console", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox2->Location = System::Drawing::Point(23, 21);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(483, 364);
			this->richTextBox2->TabIndex = 0;
			this->richTextBox2->Text = L"#include <iostream>\n\nusing namespace std;\n\nint main() {\n   cout << \"Hello world!!"
				L"!\";\n   return 0;\n}";
			// 
			// Register
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1180, 497);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"Register";
			this->Text = L"Теория";
			this->Load += gcnew System::EventHandler(this, &Register::Register_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		// Create an instance of the Exam form
		Exam^ examForm = gcnew Exam();

		// Show the Exam form
		examForm->Show();
	}
	private: System::Void Register_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
