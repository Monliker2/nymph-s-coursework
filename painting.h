
#pragma once
#include <msclr\marshal_cppstd.h>
#include <iostream>
#include <vector>

#define XML_UNICODE

namespace mart {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	//List<String^>^ ImportColumnFromXLSX(std::string filename, int columnIndex) {
	//	List<String^>^ columnData = gcnew List<String^>();

	//	xlsxioreader reader = xlsxioread_open(filename.c_str());
	//	if (reader == NULL) {
	//		std::cerr << "Failed to open XLSX file" << std::endl;
	//		return columnData;
	//	}

	//	xlsxioreadersheet sheet = xlsxioread_sheet_open(reader, NULL, XLSXIOREAD_SKIP_EMPTY_ROWS);
	//	if (sheet == NULL) {
	//		std::cerr << "Failed to open XLSX sheet" << std::endl;
	//		xlsxioread_close(reader);
	//		return columnData;
	//	}

	//	while (xlsxioread_sheet_next_row(sheet)) {
	//		xlsxioread_sheet_next_cell(sheet);
	//		const char* cell_value = xlsxioread_sheet_read_str(sheet, NULL, NULL);
	//		if (cell_value != NULL) {
	//			columnData->Add(gcnew String(cell_value));
	//		}
	//	}

	//	xlsxioread_sheet_close(sheet);
	//	xlsxioread_close(reader);

	//	return columnData;
	//}

	/// <summary>
	/// Сводка для painting
	/// </summary>
	public ref class painting : public System::Windows::Forms::Form
	{
	public:
		painting(void)
		{
		/*	InitializeComponent();*/
			//LoadData();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~painting()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	protected:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(128, 153);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(1014, 452);
			this->listBox1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(59, 56);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &painting::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Kudry Weird Headline", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(499, 45);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(155, 34);
			this->label1->TabIndex = 2;
			this->label1->Text = L"ЖИВОПИСЬ";
			// 
			// painting
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1262, 673);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listBox1);
			this->Name = L"painting";
			this->Text = L"Живопись";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
		   //void LoadData() {
			  // std::string filename = "C:\\Users\\Arina\\OneDrive\\Рабочий стол\\живопись.xlsx"; // Замените на путь к вашему файлу
			  // List<String^>^ columnData = ImportColumnFromXLSX(filename, 0); // Импортировать первый столбец

			  // for each (String ^ item in columnData) {
				 //  listBox1->Items->Add(item); // Добавить элементы в ListBox
			  // }
		   //}
	};
}
