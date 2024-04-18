#pragma once

namespace SmartX {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Exam5
	/// </summary>
	public ref class Exam5 : public System::Windows::Forms::Form
	{
	public:
		Exam5(void)
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
		~Exam5()
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
			"What is the primary purpose of a function in C++?",
				"How are parameters passed into a function in C++?",
				"Why are functions important in programming?",
				"When are declared functions executed in C++?",
				"How do you call a function in C++?"
		};
		// Static 2D array of answers for each question
		static array<array<System::String^>^>^ answers = gcnew array<array<System::String^>^>{
			gcnew array<System::String^>{"To execute code immediately upon declaration", "To store data for later use", "To perform certain actions when called (True)", "To define variables with specific data types"},
				gcnew array<System::String^>{"Inside single quotes", "Separated by commas", "Enclosed in parentheses", "Separated by semicolons"},
				gcnew array<System::String^>{"To confuse the compiler", "To define code once and reuse it many times (True)", "To execute code only once"},
				gcnew array<System::String^>{"Immediately upon declaration", "When the program starts", "When they are called (True)", "After the main() function"},
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
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.