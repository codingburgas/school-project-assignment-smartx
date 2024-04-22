#pragma once

#include "HTMLCssTheory.h"

namespace SmartX {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Exam
	/// </summary>
	public ref class Exam : public System::Windows::Forms::Form
	{
	public:
		Exam(void)
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
		~Exam()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ lBox;
	protected:
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::RadioButton^ radioAnswer1;
	private: System::Windows::Forms::RadioButton^ radioAnswer2;
	private: System::Windows::Forms::RadioButton^ radioAnswer3;
	private: System::Windows::Forms::RadioButton^ radioAnswer4;



	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

	private:
		/// <summary>
		/// My private fields
		/// </summary>
		// Static array of questions
		static array<System::String^>^ questions = gcnew array<System::String^>{
			"What does #include <iostream> allow us to do?",
			"What does using namespace std; do?",
			"What is the purpose of int main() in C++?",
			"How is cout typically used in C++?",
			"What does return 0; signify in the main function?"
		};

		// Static 2D array of answers for each question
		static array<array<System::String^>^>^ answers = gcnew array<array<System::String^>^>{
			gcnew array<System::String^>{"Work with mathematical functions", "Work with input and output objects", "Define custom data types", "Manage memory allocation"},
			gcnew array<System::String^>{"Imports a custom namespace for variable declarations", "Allows the use of objects and variables from the standard library", "Restricts the scope of variables to the main function", "Defines a new namespace for output operations"},
			gcnew array<System::String^>{"Declares a custom function for mathematical operations", "Starts the execution of the program", "Defines a class for object-oriented programming", "Represents a placeholder for variable declarations"},
			gcnew array<System::String^>{"To input data from the user", "To declare variables", "To perform mathematical operations", "To output/print text to the console"},
			gcnew array<System::String^>{"To output/print text to the console", "Terminates the program abruptly", "Prompts the user for further input", "Starts an infinite loop"}
		};

		// Static array of indices for the correct answer of each question
		static array<int>^ correctAnswers = gcnew array<int>{1, 1, 1, 3, 0};

		// Fields for tracking the current question and number of right answers
		static int currentQuestionIndex = 0;
		static int rightAnswersCount = 0;
		static const int questionCount = 5;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Exam::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->radioAnswer1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioAnswer2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioAnswer3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioAnswer4 = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 10.2F));
			this->label1->Location = System::Drawing::Point(12, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(53, 21);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			// 
			// radioAnswer1
			// 
			this->radioAnswer1->AutoSize = true;
			this->radioAnswer1->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 10.2F));
			this->radioAnswer1->Location = System::Drawing::Point(15, 116);
			this->radioAnswer1->Name = L"radioAnswer1";
			this->radioAnswer1->Size = System::Drawing::Size(125, 25);
			this->radioAnswer1->TabIndex = 1;
			this->radioAnswer1->TabStop = true;
			this->radioAnswer1->Text = L"radioButton1";
			this->radioAnswer1->UseVisualStyleBackColor = true;
			this->radioAnswer1->CheckedChanged += gcnew System::EventHandler(this, &Exam::radioAnswer1_CheckedChanged);
			// 
			// radioAnswer2
			// 
			this->radioAnswer2->AutoSize = true;
			this->radioAnswer2->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 10.2F));
			this->radioAnswer2->Location = System::Drawing::Point(15, 164);
			this->radioAnswer2->Name = L"radioAnswer2";
			this->radioAnswer2->Size = System::Drawing::Size(125, 25);
			this->radioAnswer2->TabIndex = 2;
			this->radioAnswer2->TabStop = true;
			this->radioAnswer2->Text = L"radioButton1";
			this->radioAnswer2->UseVisualStyleBackColor = true;
			this->radioAnswer2->CheckedChanged += gcnew System::EventHandler(this, &Exam::radioAnswer2_CheckedChanged);
			// 
			// radioAnswer3
			// 
			this->radioAnswer3->AutoSize = true;
			this->radioAnswer3->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 10.2F));
			this->radioAnswer3->Location = System::Drawing::Point(15, 215);
			this->radioAnswer3->Name = L"radioAnswer3";
			this->radioAnswer3->Size = System::Drawing::Size(125, 25);
			this->radioAnswer3->TabIndex = 3;
			this->radioAnswer3->TabStop = true;
			this->radioAnswer3->Text = L"radioButton1";
			this->radioAnswer3->UseVisualStyleBackColor = true;
			this->radioAnswer3->CheckedChanged += gcnew System::EventHandler(this, &Exam::radioAnswer3_CheckedChanged);
			// 
			// radioAnswer4
			// 
			this->radioAnswer4->AutoSize = true;
			this->radioAnswer4->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 10.2F));
			this->radioAnswer4->Location = System::Drawing::Point(15, 257);
			this->radioAnswer4->Name = L"radioAnswer4";
			this->radioAnswer4->Size = System::Drawing::Size(125, 25);
			this->radioAnswer4->TabIndex = 4;
			this->radioAnswer4->TabStop = true;
			this->radioAnswer4->Text = L"radioButton1";
			this->radioAnswer4->UseVisualStyleBackColor = true;
			this->radioAnswer4->CheckedChanged += gcnew System::EventHandler(this, &Exam::radioAnswer4_CheckedChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 10.2F));
			this->button1->Location = System::Drawing::Point(471, 311);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 46);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Answer it";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Exam::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Lavender;
			this->button2->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 10.2F));
			this->button2->Location = System::Drawing::Point(200, 311);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(127, 49);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Give up";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Exam::button2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(457, 85);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(317, 207);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// Exam
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(795, 386);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->radioAnswer4);
			this->Controls->Add(this->radioAnswer3);
			this->Controls->Add(this->radioAnswer2);
			this->Controls->Add(this->radioAnswer1);
			this->Controls->Add(this->label1);
			this->Name = L"Exam";
			this->Text = L"�����";
			this->Load += gcnew System::EventHandler(this, &Exam::Exam_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Exam_Load(System::Object^ sender, System::EventArgs^ e) {
		loadQuestions();
	}

	private: System::Void loadQuestions() {
		// Check last question
		if (currentQuestionIndex == questionCount) {
			MessageBox::Show("Right answers: " + rightAnswersCount);
			if (rightAnswersCount < questionCount) {
				MessageBox::Show("You do not have enough points to proceed.");
				rightAnswersCount = 0;
				currentQuestionIndex = 0;
			}
			else {
				MessageBox::Show("Congratulations, you can now proceed to the next tutorial.");
				// TODO Show main form!!!
				if (Globals::ModulesCompleted == 0) {
					Globals::ModulesCompleted = 1;
				}

			
				//Globals::mainForm->refreshButtons();

				this->Hide();
				HTMLCssTheory^ nextForm = gcnew HTMLCssTheory();
				nextForm->Show();
				return;
			}
		}

		// Set the question
		label1->Text = questions[currentQuestionIndex];

		// Set the answer choices
		radioAnswer1->Text = answers[currentQuestionIndex][0];
		radioAnswer2->Text = answers[currentQuestionIndex][1];
		radioAnswer3->Text = answers[currentQuestionIndex][2];
		radioAnswer4->Text = answers[currentQuestionIndex][3];

	}

	private: System::Int32 getAnswer() {
		if (radioAnswer1->Checked) {
			return 0;
		}
		else if (radioAnswer2->Checked) {
			return 1;
		}
		else if (radioAnswer3->Checked) {
			return 2;
		}
		else if (radioAnswer4->Checked) {
			return 3;
		}
		return -1;
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (getAnswer() == correctAnswers[currentQuestionIndex]) {
			rightAnswersCount++;
		}

		currentQuestionIndex++;
		loadQuestions();
	}
	private: void LoadCurrentQuestion() {
		label1->Text = questions[currentQuestionIndex];
		radioAnswer1->Text = answers[currentQuestionIndex][0];
		radioAnswer2->Text = answers[currentQuestionIndex][1];
		radioAnswer3->Text = answers[currentQuestionIndex][2];
		radioAnswer4->Text = answers[currentQuestionIndex][3];
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void radioAnswer1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

	}
private: System::Void radioAnswer2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void radioAnswer3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void radioAnswer4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

}
};
}
