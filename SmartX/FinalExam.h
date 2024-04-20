#pragma once
#include "Globals.h"
#include "Lesson5.h"
#include "MainForm.h"
namespace SmartX {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FinalExam
	/// </summary>
	public ref class FinalExam : public System::Windows::Forms::Form
	{
	public:
		FinalExam(void)
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
		~FinalExam()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::RadioButton^ radioAnswer1;
	private: System::Windows::Forms::RadioButton^ radioAnswer2;
	private: System::Windows::Forms::RadioButton^ radioAnswer3;
	private: System::Windows::Forms::RadioButton^ radioAnswer4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		// Static array of questions
		static array<System::String^>^ questions = gcnew array<System::String^>{
			"What is the primary purpose of a function in C++?",
				"How are parameters passed into a function in C++?",
				"Why are functions important in programming?",
				"When are declared functions executed in C++?",
				"How do you call a function in C++?"
		};

		// Static 2D array of answers for each question
		static array<array<System::String^>^>^ answers = gcnew array<array<System::String^>^>{
			gcnew array<System::String^>{"To execute code immediately upon declaration", "To store data for later use", "To perform certain actions when called", "To define variables with specific data types"},
				gcnew array<System::String^>{"Inside single quotes", "Separated by commas", "Enclosed in parentheses", "Separated by semicolons"},
				gcnew array<System::String^>{"To confuse the compiler", "To increase program complexity", "To define code once and reuse it many times", "To execute code only once"},
				gcnew array<System::String^>{"Immediately upon declaration", "When the program starts", "When they are called", "After the main() function"},
				gcnew array<System::String^>{"By using the 'execute' keyword", "By using curly braces {}", "By writing the function's name followed by two parentheses () and a semicolon ;", "By using the 'invoke' keyword"}
		};

		// Static array of indices for the correct answer of each question
		static array<int>^ correctAnswers = gcnew array<int>{2, 3, 2, 2, 2};

		// Fields for tracking the current question and number of right answers
		static int currentQuestionIndex = 0;
		static int rightAnswersCount = 0;
		static const int questionCount = 5;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FinalExam::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->radioAnswer4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioAnswer3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioAnswer2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioAnswer1 = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(548, 83);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(317, 207);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 25;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &FinalExam::pictureBox1_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button1->Location = System::Drawing::Point(457, 296);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 46);
			this->button1->TabIndex = 24;
			this->button1->Text = L"Отговори";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &FinalExam::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Lavender;
			this->button2->Location = System::Drawing::Point(213, 295);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(127, 49);
			this->button2->TabIndex = 23;
			this->button2->Text = L"Откажи се";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &FinalExam::button2_Click);
			// 
			// radioAnswer4
			// 
			this->radioAnswer4->AutoSize = true;
			this->radioAnswer4->Location = System::Drawing::Point(31, 234);
			this->radioAnswer4->Name = L"radioAnswer4";
			this->radioAnswer4->Size = System::Drawing::Size(103, 20);
			this->radioAnswer4->TabIndex = 22;
			this->radioAnswer4->TabStop = true;
			this->radioAnswer4->Text = L"radioButton1";
			this->radioAnswer4->UseVisualStyleBackColor = true;
			// 
			// radioAnswer3
			// 
			this->radioAnswer3->AutoSize = true;
			this->radioAnswer3->Location = System::Drawing::Point(31, 191);
			this->radioAnswer3->Name = L"radioAnswer3";
			this->radioAnswer3->Size = System::Drawing::Size(103, 20);
			this->radioAnswer3->TabIndex = 21;
			this->radioAnswer3->TabStop = true;
			this->radioAnswer3->Text = L"radioButton1";
			this->radioAnswer3->UseVisualStyleBackColor = true;
			// 
			// radioAnswer2
			// 
			this->radioAnswer2->AutoSize = true;
			this->radioAnswer2->Location = System::Drawing::Point(31, 147);
			this->radioAnswer2->Name = L"radioAnswer2";
			this->radioAnswer2->Size = System::Drawing::Size(103, 20);
			this->radioAnswer2->TabIndex = 20;
			this->radioAnswer2->TabStop = true;
			this->radioAnswer2->Text = L"radioButton1";
			this->radioAnswer2->UseVisualStyleBackColor = true;
			// 
			// radioAnswer1
			// 
			this->radioAnswer1->AutoSize = true;
			this->radioAnswer1->Location = System::Drawing::Point(31, 101);
			this->radioAnswer1->Name = L"radioAnswer1";
			this->radioAnswer1->Size = System::Drawing::Size(103, 20);
			this->radioAnswer1->TabIndex = 19;
			this->radioAnswer1->TabStop = true;
			this->radioAnswer1->Text = L"radioButton1";
			this->radioAnswer1->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(27, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(53, 20);
			this->label1->TabIndex = 18;
			this->label1->Text = L"label1";
			// 
			// FinalExam
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(877, 391);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->radioAnswer4);
			this->Controls->Add(this->radioAnswer3);
			this->Controls->Add(this->radioAnswer2);
			this->Controls->Add(this->radioAnswer1);
			this->Controls->Add(this->label1);
			this->Name = L"FinalExam";
			this->Text = L"Lesson5";
			this->Load += gcnew System::EventHandler(this, &FinalExam::Lesson5_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void FinalExam_Load(System::Object^ sender, System::EventArgs^ e) {
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
						   Globals::ModulesCompleted = 2;
					   }
					   this->Hide();
					   MainForm^ nextForm = gcnew MainForm();
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
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}

