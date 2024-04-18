#pragma once
#include "Exam2.h"

namespace SmartX {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for HTMLCssTheory
	/// </summary>
	public ref class HTMLCssTheory : public System::Windows::Forms::Form
	{
	public:
		HTMLCssTheory(void)
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
		~HTMLCssTheory()
		{
			if (components)
			{
				delete components;
			}
		}



	private: System::Windows::Forms::Button^ buttonTest;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;







	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::RichTextBox^ richTextBox7;
	private: System::Windows::Forms::RichTextBox^ richTextBox6;
	private: System::Windows::Forms::RichTextBox^ richTextBox5;
	private: System::Windows::Forms::RichTextBox^ richTextBox4;
	private: System::Windows::Forms::RichTextBox^ richTextBox3;
	private: System::Windows::Forms::RichTextBox^ richTextBox8;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(HTMLCssTheory::typeid));
			this->buttonTest = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->richTextBox7 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox6 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox5 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox4 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox8 = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// buttonTest
			// 
			this->buttonTest->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->buttonTest->Location = System::Drawing::Point(386, 441);
			this->buttonTest->Name = L"buttonTest";
			this->buttonTest->Size = System::Drawing::Size(135, 47);
			this->buttonTest->TabIndex = 0;
			this->buttonTest->Text = L"Към теста";
			this->buttonTest->UseVisualStyleBackColor = false;
			this->buttonTest->Click += gcnew System::EventHandler(this, &HTMLCssTheory::buttonTest_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->buttonTest);
			this->groupBox2->Controls->Add(this->pictureBox1);
			this->groupBox2->Controls->Add(this->richTextBox2);
			this->groupBox2->Location = System::Drawing::Point(636, 10);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(527, 488);
			this->groupBox2->TabIndex = 5;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Примерен код";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(6, 218);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(374, 256);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// richTextBox2
			// 
			this->richTextBox2->Font = (gcnew System::Drawing::Font(L"Lucida Console", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox2->Location = System::Drawing::Point(6, 21);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(515, 191);
			this->richTextBox2->TabIndex = 0;
			this->richTextBox2->Text = L"#include <iostream>\nusing namespace std;\n\nint main() {\n\n  int myNum = 15;  // Now"
				L" myNum is 15\n  myNum = 10;   // Now myNum is 10\n  cout << myNum;\n  return 0;\n\n}";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(69, 10);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(496, 104);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 13;
			this->pictureBox2->TabStop = false;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->richTextBox7);
			this->groupBox3->Controls->Add(this->richTextBox6);
			this->groupBox3->Controls->Add(this->richTextBox5);
			this->groupBox3->Controls->Add(this->richTextBox4);
			this->groupBox3->Controls->Add(this->richTextBox3);
			this->groupBox3->Controls->Add(this->richTextBox8);
			this->groupBox3->Location = System::Drawing::Point(28, 118);
			this->groupBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox3->Size = System::Drawing::Size(583, 420);
			this->groupBox3->TabIndex = 14;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Кратка теория";
			// 
			// richTextBox7
			// 
			this->richTextBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox7->Location = System::Drawing::Point(15, 349);
			this->richTextBox7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->richTextBox7->Name = L"richTextBox7";
			this->richTextBox7->Size = System::Drawing::Size(546, 62);
			this->richTextBox7->TabIndex = 7;
			this->richTextBox7->Text = L"bool - stores values with two states: true or false\n";
			// 
			// richTextBox6
			// 
			this->richTextBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox6->Location = System::Drawing::Point(15, 283);
			this->richTextBox6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->richTextBox6->Name = L"richTextBox6";
			this->richTextBox6->Size = System::Drawing::Size(546, 62);
			this->richTextBox6->TabIndex = 6;
			this->richTextBox6->Text = L"string - stores text, such as \"Hello World\". String values are surrounded by doub"
				L"le quotes";
			// 
			// richTextBox5
			// 
			this->richTextBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox5->Location = System::Drawing::Point(15, 217);
			this->richTextBox5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->richTextBox5->Name = L"richTextBox5";
			this->richTextBox5->Size = System::Drawing::Size(546, 62);
			this->richTextBox5->TabIndex = 5;
			this->richTextBox5->Text = L"char - stores single characters, such as \'a\' or \'B\'. Char values are surrounded b"
				L"y single quotes";
			// 
			// richTextBox4
			// 
			this->richTextBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox4->Location = System::Drawing::Point(15, 151);
			this->richTextBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->richTextBox4->Name = L"richTextBox4";
			this->richTextBox4->Size = System::Drawing::Size(546, 62);
			this->richTextBox4->TabIndex = 4;
			this->richTextBox4->Text = L"double - stores floating point numbers, with decimals, such as 19.99 or -19.99";
			// 
			// richTextBox3
			// 
			this->richTextBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox3->Location = System::Drawing::Point(15, 85);
			this->richTextBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->Size = System::Drawing::Size(546, 62);
			this->richTextBox3->TabIndex = 3;
			this->richTextBox3->Text = L"int - stores integers (whole numbers), without decimals, such as 123 or -123";
			// 
			// richTextBox8
			// 
			this->richTextBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox8->Location = System::Drawing::Point(15, 19);
			this->richTextBox8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->richTextBox8->Name = L"richTextBox8";
			this->richTextBox8->Size = System::Drawing::Size(546, 62);
			this->richTextBox8->TabIndex = 2;
			this->richTextBox8->Text = L"In C++, there are different types of variables (defined with different keywords),"
				L" for example:\n";
			// 
			// HTMLCssTheory
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Lavender;
			this->ClientSize = System::Drawing::Size(1175, 510);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->groupBox2);
			this->Name = L"HTMLCssTheory";
			this->Text = L"HTMLCssTheory";
			this->Load += gcnew System::EventHandler(this, &HTMLCssTheory::HTMLCssTheory_Load);
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void backgroundWorker1_DoWork(System::Object^ sender, System::ComponentModel::DoWorkEventArgs^ e) {
	}
	private: System::Void HTMLCssTheory_Load(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void buttonTest_Click(System::Object^ sender, System::EventArgs^ e) {
	// Create an instance of the Exam form
	Exam2^ exam2Form = gcnew Exam2();

	// Show the Exam form
	exam2Form->Show();
}
private: System::Void richTextBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void richTextBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
