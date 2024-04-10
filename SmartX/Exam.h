#pragma once

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

	private:
		/// <summary>
		/// My private fields
		/// </summary>
		// Static array of questions
		static array<System::String^>^ questions = gcnew array<System::String^>{
			"What is the size of an int data type in C++?",
			"Which keyword is used to check a condition in C++?",
			"How do you start a for loop that iterates from 1 to 5 inclusive?",
			"What is the default value of an uninitialized int array in C++?",
			"Which of the following is a correct way to declare an array of 10 integers?"
		};

		// Static 2D array of answers for each question
		static array<array<System::String^>^>^ answers = gcnew array<array<System::String^>^>{
			gcnew array<System::String^>{"2 bytes", "4 bytes", "8 bytes", "Depends on the compiler"},
			gcnew array<System::String^>{"if", "check", "test", "examine"},
			gcnew array<System::String^>{"for (int i = 1; i <= 5; i++)", "for (int i = 1; i < 5; i++)", "for (int i = 0; i <= 5; i++)", "for (int i = 0; i < 5; i++)"},
			gcnew array<System::String^>{"0", "-1", "Garbage value", "None of the above"},
			gcnew array<System::String^>{"int array[10];", "int array[] = {10};", "int array[10] = {};", "array int[10];"}
		};

		// Static array of indices for the correct answer of each question
		static array<int>^ correctAnswers = gcnew array<int>{1, 0, 0, 2, 0};

		// Fields for tracking the current question and number of right answers
		static int currentQuestionIndex = 0;
		static int rightAnswersCount = 0;

	private: System::Windows::Forms::Label^ labelQuestion;
	private: System::Windows::Forms::RadioButton^ radioAnswer1;
	private: System::Windows::Forms::RadioButton^ radioAnswer2;
	private: System::Windows::Forms::RadioButton^ radioAnswer3;
	private: System::Windows::Forms::RadioButton^ radioAnswer4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;


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
			this->labelQuestion = (gcnew System::Windows::Forms::Label());
			this->radioAnswer1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioAnswer2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioAnswer3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioAnswer4 = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// labelQuestion
			// 
			this->labelQuestion->AutoSize = true;
			this->labelQuestion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelQuestion->Location = System::Drawing::Point(12, 29);
			this->labelQuestion->Name = L"labelQuestion";
			this->labelQuestion->Size = System::Drawing::Size(53, 20);
			this->labelQuestion->TabIndex = 0;
			this->labelQuestion->Text = L"label1";
			// 
			// radioAnswer1
			// 
			this->radioAnswer1->AutoSize = true;
			this->radioAnswer1->Location = System::Drawing::Point(15, 116);
			this->radioAnswer1->Name = L"radioAnswer1";
			this->radioAnswer1->Size = System::Drawing::Size(103, 20);
			this->radioAnswer1->TabIndex = 1;
			this->radioAnswer1->TabStop = true;
			this->radioAnswer1->Text = L"radioButton1";
			this->radioAnswer1->UseVisualStyleBackColor = true;
			// 
			// radioAnswer2
			// 
			this->radioAnswer2->AutoSize = true;
			this->radioAnswer2->Location = System::Drawing::Point(15, 164);
			this->radioAnswer2->Name = L"radioAnswer2";
			this->radioAnswer2->Size = System::Drawing::Size(103, 20);
			this->radioAnswer2->TabIndex = 2;
			this->radioAnswer2->TabStop = true;
			this->radioAnswer2->Text = L"radioButton1";
			this->radioAnswer2->UseVisualStyleBackColor = true;
			// 
			// radioAnswer3
			// 
			this->radioAnswer3->AutoSize = true;
			this->radioAnswer3->Location = System::Drawing::Point(15, 215);
			this->radioAnswer3->Name = L"radioAnswer3";
			this->radioAnswer3->Size = System::Drawing::Size(103, 20);
			this->radioAnswer3->TabIndex = 3;
			this->radioAnswer3->TabStop = true;
			this->radioAnswer3->Text = L"radioButton1";
			this->radioAnswer3->UseVisualStyleBackColor = true;
			// 
			// radioAnswer4
			// 
			this->radioAnswer4->AutoSize = true;
			this->radioAnswer4->Location = System::Drawing::Point(15, 257);
			this->radioAnswer4->Name = L"radioAnswer4";
			this->radioAnswer4->Size = System::Drawing::Size(103, 20);
			this->radioAnswer4->TabIndex = 4;
			this->radioAnswer4->TabStop = true;
			this->radioAnswer4->Text = L"radioButton1";
			this->radioAnswer4->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(299, 313);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 46);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Отговори";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(15, 310);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(127, 49);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Откажи се";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// Exam
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(440, 371);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->radioAnswer4);
			this->Controls->Add(this->radioAnswer3);
			this->Controls->Add(this->radioAnswer2);
			this->Controls->Add(this->radioAnswer1);
			this->Controls->Add(this->labelQuestion);
			this->Name = L"Exam";
			this->Text = L"Изпит";
			this->Load += gcnew System::EventHandler(this, &Exam::Exam_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Exam_Load(System::Object^ sender, System::EventArgs^ e) {
		// Set the question
		labelQuestion->Text = questions[currentQuestionIndex];

		// Set the answer choices
		radioAnswer1->Text = answers[currentQuestionIndex][0];
		radioAnswer2->Text = answers[currentQuestionIndex][1];
		radioAnswer3->Text = answers[currentQuestionIndex][2];
		radioAnswer4->Text = answers[currentQuestionIndex][3];
	}
};
}
