#pragma once

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
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
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
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->SuspendLayout();
			// 
			// backgroundWorker1
			// 
			this->backgroundWorker1->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &HTMLCssTheory::backgroundWorker1_DoWork);
			// 
			// HTMLCssTheory
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(453, 379);
			this->Name = L"HTMLCssTheory";
			this->Text = L"HTMLCssTheory";
			this->Load += gcnew System::EventHandler(this, &HTMLCssTheory::HTMLCssTheory_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void backgroundWorker1_DoWork(System::Object^ sender, System::ComponentModel::DoWorkEventArgs^ e) {
	}
	private: System::Void HTMLCssTheory_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
