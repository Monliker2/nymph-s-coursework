#pragma once
#include "ForXml.h"

namespace mart {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ FormForArtist1
	/// </summary>
	public ref class FormForArtist1 : public System::Windows::Forms::Form
	{
	public:
		FormForArtist1(String^ nameOfArtist, String^ typeOfArtist, String^ path)
		{
			NameOfArtist = nameOfArtist;
			Path = path;
			TypeOfArtist = typeOfArtist;
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
	private: System::Windows::Forms::Label^ NameLabel;
	public:

	private: System::Windows::Forms::Label^ DiscriptionLabel;
	public:

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: String^ NameOfArtist;
	private: String^ Path;
	private: String^ TypeOfArtist;
	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~FormForArtist1()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->NameLabel = (gcnew System::Windows::Forms::Label());
			this->DiscriptionLabel = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// NameLabel
			// 
			this->NameLabel->AutoSize = true;
			this->NameLabel->Location = System::Drawing::Point(46, 48);
			this->NameLabel->Name = L"NameLabel";
			this->NameLabel->Size = System::Drawing::Size(61, 13);
			this->NameLabel->TabIndex = 0;
			this->NameLabel->Text = L"NameLabel";
			// 
			// DiscriptionLabel
			// 
			this->DiscriptionLabel->AutoSize = true;
			this->DiscriptionLabel->Location = System::Drawing::Point(12, 287);
			this->DiscriptionLabel->MaximumSize = System::Drawing::Size(500, 1000);
			this->DiscriptionLabel->Name = L"DiscriptionLabel";
			this->DiscriptionLabel->Size = System::Drawing::Size(82, 13);
			this->DiscriptionLabel->TabIndex = 1;
			this->DiscriptionLabel->Text = L"DiscriptionLabel";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(264, 119);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(100, 50);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// FormForArtist1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(598, 510);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->DiscriptionLabel);
			this->Controls->Add(this->NameLabel);
			this->Name = L"FormForArtist1";
			this->Text = L"FormForArtist1";
			this->Load += gcnew System::EventHandler(this, &FormForArtist1::FormForArtist1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void FormForArtist1_Load(System::Object^ sender, System::EventArgs^ e) {
		DiscriptionLabel->Text = GetDiscriptionByAttribute(TypeOfArtist, NameOfArtist, Path);
		NameLabel->Text = NameOfArtist;

		pictureBox1->Image = Image::FromFile(GetImageByAttribute(TypeOfArtist, NameOfArtist, Path));
	}
	};
}
