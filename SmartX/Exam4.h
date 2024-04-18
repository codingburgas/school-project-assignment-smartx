#pragma once
#include "Globals.h"
//#include "Exam5.h"
namespace SmartX {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Exam4
	/// </summary>
	public ref class Exam4 : public System::Windows::Forms::Form
	{
	public:
		Exam4(void)
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
		~Exam4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::RadioButton^ radioAnswer1;
	private: System::Windows::Forms::RadioButton^ radioAnswer2;
	private: System::Windows::Forms::RadioButton^ radioAnswer3;
	private: System::Windows::Forms::RadioButton^ radioAnswer4;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		static array<System::String^>^ questions = gcnew array<System::String^>{
			    "What is the primary purpose of using structures (structs) in C++?",
				"How are the members of a structure declared in C++?",
				"Can a structure in C++ contain variables of different data types?",
				"What keyword is used to create a structure in C++ ?",
				"How can you treat a structure in C++ ?"
		};

		// Static 2D array of answers for each question
		static array<array<System::String^>^>^ answers = gcnew array<array<System::String^>^>{
			gcnew array<System::String^>{"To group unrelated variables together", "To create functions that operate on multiple variables", "To store several related variables into one place", "To enforce encapsulation of data"},
				gcnew array<System::String^>{"Inside parentheses", "Inside square brackets", "Inside angle brackets", "Inside curly braces"},
				gcnew array<System::String^>{"No, a structure can only contain variables of the same data type", "Yes, a structure can contain variables of different data types", "Only if the structure is declared as a class", "Only if the variables are all integers"},
				gcnew array<System::String^>{"class", "struct", "union", "typedef"},
				gcnew array<System::String^>{"As a loop construct", "As a function definition", "As a data type", "As a library function"}
		};

		// Static array of indices for the correct answer of each question
		static array<int>^ correctAnswers = gcnew array<int>{2, 3, 2, 1, 2};

		// Fields for tracking the current question and number of right answers
		static int currentQuestionIndex = 0;
		static int rightAnswersCount = 0;
		static const int questionCount = 5;
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Exam4::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->radioAnswer1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioAnswer2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioAnswer3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioAnswer4 = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(503, 75);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(317, 207);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 17;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Exam4::pictureBox1_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button1->Location = System::Drawing::Point(470, 294);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 46);
			this->button1->TabIndex = 16;
			this->button1->Text = L"Отговори";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Exam4::button1_Click_1);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Lavender;
			this->button2->Location = System::Drawing::Point(226, 293);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(127, 49);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Откажи се";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Exam4::button2_Click);
			// 
			// radioAnswer1
			// 
			this->radioAnswer1->AutoSize = true;
			this->radioAnswer1->Location = System::Drawing::Point(44, 99);
			this->radioAnswer1->Name = L"radioAnswer1";
			this->radioAnswer1->Size = System::Drawing::Size(103, 20);
			this->radioAnswer1->TabIndex = 11;
			this->radioAnswer1->TabStop = true;
			this->radioAnswer1->Text = L"radioButton1";
			this->radioAnswer1->UseVisualStyleBackColor = true;
			// 
			// radioAnswer2
			// 
			this->radioAnswer2->AutoSize = true;
			this->radioAnswer2->Location = System::Drawing::Point(44, 145);
			this->radioAnswer2->Name = L"radioAnswer2";
			this->radioAnswer2->Size = System::Drawing::Size(103, 20);
			this->radioAnswer2->TabIndex = 12;
			this->radioAnswer2->TabStop = true;
			this->radioAnswer2->Text = L"radioButton1";
			this->radioAnswer2->UseVisualStyleBackColor = true;
			// 
			// radioAnswer3
			// 
			this->radioAnswer3->AutoSize = true;
			this->radioAnswer3->Location = System::Drawing::Point(44, 189);
			this->radioAnswer3->Name = L"radioAnswer3";
			this->radioAnswer3->Size = System::Drawing::Size(103, 20);
			this->radioAnswer3->TabIndex = 13;
			this->radioAnswer3->TabStop = true;
			this->radioAnswer3->Text = L"radioButton1";
			this->radioAnswer3->UseVisualStyleBackColor = true;
			// 
			// radioAnswer4
			// 
			this->radioAnswer4->AutoSize = true;
			this->radioAnswer4->Location = System::Drawing::Point(44, 232);
			this->radioAnswer4->Name = L"radioAnswer4";
			this->radioAnswer4->Size = System::Drawing::Size(103, 20);
			this->radioAnswer4->TabIndex = 14;
			this->radioAnswer4->TabStop = true;
			this->radioAnswer4->Text = L"radioButton1";
			this->radioAnswer4->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(40, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(53, 20);
			this->label1->TabIndex = 10;
			this->label1->Text = L"label1";
			// 
			// Exam4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(832, 392);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->radioAnswer4);
			this->Controls->Add(this->radioAnswer3);
			this->Controls->Add(this->radioAnswer2);
			this->Controls->Add(this->radioAnswer1);
			this->Controls->Add(this->label1);
			this->Name = L"Exam4";
			this->Text = L"Exam4";
			this->Load += gcnew System::EventHandler(this, &Exam4::Exam4_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Exam4_Load(System::Object^ sender, System::EventArgs^ e) {
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
							Globals::ModulesCompleted = 4;
						}
						this->Hide();
						//Exam5^ nextForm = gcnew Exam5();
						//nextForm->Show();
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

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
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
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
