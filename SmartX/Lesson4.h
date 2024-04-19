#pragma once
#include "Exam4.h"

namespace SmartX {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Lesson4
	/// </summary>
	public ref class Lesson4 : public System::Windows::Forms::Form
	{
	public:
		Lesson4(void)
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
		~Lesson4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Button^ buttonTest;
	private: System::Windows::Forms::GroupBox^ groupBox2;

	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::RichTextBox^ richTextBox4;
	private: System::Windows::Forms::RichTextBox^ richTextBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;

	private: System::Windows::Forms::RichTextBox^ richTextBox6;
	private: System::Windows::Forms::RichTextBox^ richTextBox5;
	private: System::Windows::Forms::RichTextBox^ richTextBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox3;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Lesson4::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->buttonTest = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox4 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox5 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox6 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox7 = (gcnew System::Windows::Forms::RichTextBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->richTextBox7);
			this->groupBox1->Controls->Add(this->richTextBox6);
			this->groupBox1->Controls->Add(this->richTextBox5);
			this->groupBox1->Controls->Add(this->richTextBox4);
			this->groupBox1->Controls->Add(this->richTextBox3);
			this->groupBox1->Controls->Add(this->richTextBox1);
			this->groupBox1->Location = System::Drawing::Point(12, 105);
			this->groupBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Size = System::Drawing::Size(583, 420);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"������ ������";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox1->Location = System::Drawing::Point(15, 19);
			this->richTextBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(546, 62);
			this->richTextBox1->TabIndex = 2;
			this->richTextBox1->Text = L"Structures (also called structs) are a way to group several related variables int"
				L"o one place. ";
			// 
			// buttonTest
			// 
			this->buttonTest->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->buttonTest->Location = System::Drawing::Point(369, 457);
			this->buttonTest->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonTest->Name = L"buttonTest";
			this->buttonTest->Size = System::Drawing::Size(135, 47);
			this->buttonTest->TabIndex = 0;
			this->buttonTest->Text = L"��� �����";
			this->buttonTest->UseVisualStyleBackColor = false;
			this->buttonTest->Click += gcnew System::EventHandler(this, &Lesson4::buttonTest_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->pictureBox3);
			this->groupBox2->Controls->Add(this->buttonTest);
			this->groupBox2->Controls->Add(this->richTextBox2);
			this->groupBox2->Location = System::Drawing::Point(600, -3);
			this->groupBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Size = System::Drawing::Size(527, 528);
			this->groupBox2->TabIndex = 7;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"�������� ���";
			// 
			// richTextBox2
			// 
			this->richTextBox2->Font = (gcnew System::Drawing::Font(L"Lucida Console", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox2->Location = System::Drawing::Point(23, 21);
			this->richTextBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(498, 164);
			this->richTextBox2->TabIndex = 0;
			this->richTextBox2->Text = resources->GetString(L"richTextBox2.Text");
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(54, -3);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(496, 104);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 9;
			this->pictureBox2->TabStop = false;
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
			this->richTextBox3->Text = L"Each variable in the structure is known as a member of the structure.";
			this->richTextBox3->TextChanged += gcnew System::EventHandler(this, &Lesson4::richTextBox3_TextChanged);
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
			this->richTextBox4->Text = L"Unlike an array, a structure can contain many different data types (int, string, "
				L"bool, etc.).\n";
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
			this->richTextBox5->Text = L"To create a structure, use the struct keyword and declare each of its members ins"
				L"ide curly braces.\n";
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
			this->richTextBox6->Text = L"By giving a name to the structure, you can treat it as a data type. This means th"
				L"at you can create";
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
			this->richTextBox7->Text = L"Variables with this structure anywhere in the program at any time.";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(6, 204);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(361, 315);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 9;
			this->pictureBox3->TabStop = false;
			// 
			// Lesson4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Lavender;
			this->ClientSize = System::Drawing::Size(1149, 530);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox2);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Lesson4";
			this->Text = L"Lesson4";
			this->Load += gcnew System::EventHandler(this, &Lesson4::Lesson4_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Lesson4_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void buttonTest_Click(System::Object^ sender, System::EventArgs^ e) {
		// Create an instance of the Exam form
		this->Hide();
		Exam4^ exam4Form = gcnew Exam4();

		// Show the Exam form
		exam4Form->Show();
	}
 private: System::Void pictureBox1_Click(System::Object ^ sender, System::EventArgs ^ e) {
}
private: System::Void richTextBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}