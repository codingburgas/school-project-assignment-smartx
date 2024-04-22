#pragma once
#include "Globals.h"
#include"Exam3.h"
#include "Lesson3.h"
namespace SmartX {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Lesson2
	/// </summary>
	public ref class Exam2 : public System::Windows::Forms::Form
	{
	public:
		Exam2(void)
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
		~Exam2()
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
		/// My private fields
		/// </summary>
		// Static array of questions
		static array<System::String^>^ questions = gcnew array<System::String^>{
			"What type of variable is used to store whole numbers without decimals?",
				"Which variable type is suitable for storing single characters like 'x' or '5'?",
				"Which variable type is appropriate for storing true/false values?",
				"What is the correct variable type to store floating-point numbers with decimals?",
				"Which variable type is used to store sequences of characters, such as Hello?"
		};

		// Static 2D array of answers for each question
		static array<array<System::String^>^>^ answers = gcnew array<array<System::String^>^>{
			gcnew array<System::String^>{"float", "double", "int", "char"},
				gcnew array<System::String^>{"bool", "string", "int", "char"},
				gcnew array<System::String^>{"int", "double", "bool", "string"},
				gcnew array<System::String^>{"char", "bool", "double", "int"},
				gcnew array<System::String^>{"int", "char", "string", "bool"}
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Exam2::typeid));
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
			this->label1->Location = System::Drawing::Point(38, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(53, 21);
			this->label1->TabIndex = 1;
			this->label1->Text = L"label1";
			// 
			// radioAnswer1
			// 
			this->radioAnswer1->AutoSize = true;
			this->radioAnswer1->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 10.2F));
			this->radioAnswer1->Location = System::Drawing::Point(42, 97);
			this->radioAnswer1->Name = L"radioAnswer1";
			this->radioAnswer1->Size = System::Drawing::Size(125, 25);
			this->radioAnswer1->TabIndex = 2;
			this->radioAnswer1->TabStop = true;
			this->radioAnswer1->Text = L"radioButton1";
			this->radioAnswer1->UseVisualStyleBackColor = true;
			// 
			// radioAnswer2
			// 
			this->radioAnswer2->AutoSize = true;
			this->radioAnswer2->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 10.2F));
			this->radioAnswer2->Location = System::Drawing::Point(42, 143);
			this->radioAnswer2->Name = L"radioAnswer2";
			this->radioAnswer2->Size = System::Drawing::Size(125, 25);
			this->radioAnswer2->TabIndex = 3;
			this->radioAnswer2->TabStop = true;
			this->radioAnswer2->Text = L"radioButton1";
			this->radioAnswer2->UseVisualStyleBackColor = true;
			// 
			// radioAnswer3
			// 
			this->radioAnswer3->AutoSize = true;
			this->radioAnswer3->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 10.2F));
			this->radioAnswer3->Location = System::Drawing::Point(42, 188);
			this->radioAnswer3->Name = L"radioAnswer3";
			this->radioAnswer3->Size = System::Drawing::Size(125, 25);
			this->radioAnswer3->TabIndex = 4;
			this->radioAnswer3->TabStop = true;
			this->radioAnswer3->Text = L"radioButton1";
			this->radioAnswer3->UseVisualStyleBackColor = true;
			// 
			// radioAnswer4
			// 
			this->radioAnswer4->AutoSize = true;
			this->radioAnswer4->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 10.2F));
			this->radioAnswer4->Location = System::Drawing::Point(42, 230);
			this->radioAnswer4->Name = L"radioAnswer4";
			this->radioAnswer4->Size = System::Drawing::Size(125, 25);
			this->radioAnswer4->TabIndex = 5;
			this->radioAnswer4->TabStop = true;
			this->radioAnswer4->Text = L"radioButton1";
			this->radioAnswer4->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 10.2F));
			this->button1->Location = System::Drawing::Point(458, 292);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 46);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Answer it";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Exam2::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Lavender;
			this->button2->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 10.2F));
			this->button2->Location = System::Drawing::Point(215, 291);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(127, 49);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Give up";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Exam2::button2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(472, 62);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(317, 207);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Exam2::pictureBox1_Click);
			// 
			// Exam2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(801, 376);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->radioAnswer4);
			this->Controls->Add(this->radioAnswer3);
			this->Controls->Add(this->radioAnswer2);
			this->Controls->Add(this->radioAnswer1);
			this->Controls->Add(this->label1);
			this->Name = L"Exam2";
			this->Text = L"Lesson2";
			this->Load += gcnew System::EventHandler(this, &Exam2::Lesson2_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Lesson2_Load(System::Object^ sender, System::EventArgs^ e) {
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
					   Lesson3^ nextForm = gcnew Lesson3();
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
