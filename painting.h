
#pragma once
#include "FormForArtist1.h"

//#define XML_UNICODE

namespace mart {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace System::Xml;
	/// <summary>
	/// Сводка для painting
	/// </summary>
	public ref class painting : public System::Windows::Forms::Form
	{
	
	public:
		painting(String^ typeOfArtist, String^ path)
		{
			TypeOfArtist = typeOfArtist;
			Path = path;
			InitializeComponent();
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
	private: String^ TypeOfArtist;
	private: String^ Path;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(44, 46);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(56, 19);
			this->button1->TabIndex = 1;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &painting::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(374, 37);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(120, 24);
			this->label1->TabIndex = 2;
			this->label1->Text = L"ЖИВОПИСЬ";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(224, 81);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->Size = System::Drawing::Size(407, 363);
			this->dataGridView1->TabIndex = 3;
			this->dataGridView1->Click += gcnew System::EventHandler(this, &painting::dataGridView1_Click);
			// 
			// painting
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(946, 547);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"painting";
			this->Text = L"Живопись";
			this->Load += gcnew System::EventHandler(this, &painting::painting_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: DataTable^ Table;
	private: System::Void painting_Load(System::Object^ sender, System::EventArgs^ e) {
		dataGridView1->SelectionMode = DataGridViewSelectionMode::FullRowSelect;
		String^ PathOfFile = Path + "\\Art.xml";
		/*isSelect = false;
		ChangeButton->Enabled = false;
		DeleteButton->Enabled = false;*/
		Table = gcnew DataTable();
		
		if (IO::File::Exists(PathOfFile) == false) {
			//XmlDocument^ doc = gcnew XmlDocument();
			//XmlDeclaration^ declaration = doc->CreateXmlDeclaration("1.0", "utf-8", nullptr);
			//doc->AppendChild(declaration);

			//XmlElement^ tasksElement = doc->CreateElement("Tasks");
			//doc->AppendChild(tasksElement);

			//XmlElement^ emptyElement = doc->CreateElement("empty");
			//emptyElement->SetAttribute("id", "0");
			//tasksElement->AppendChild(emptyElement);

			//array<String^>^ nodeNames = { "Название", "Примечание", "Приоритет", "Статус" };
			//for each (String ^ nodeName in nodeNames)
			//{
			//	XmlElement^ childElement = doc->CreateElement(nodeName);
			//	emptyElement->AppendChild(childElement);
			//}
			//doc->Save("table.xml");
			//String^ applicationPath = Process::GetCurrentProcess()->MainModule->FileName;
			//Process::Start(applicationPath);
			//Process::GetCurrentProcess()->Kill();
		}
		else {
			DataSet^ Set = gcnew DataSet();
			XmlDocument^ doc = gcnew XmlDocument();
			doc->Load(PathOfFile);
			Set->ReadXml(PathOfFile);
			String^ StringXML = Set->GetXml();
			
			if (TypeOfArtist == "Artist") dataGridView1->DataMember = ("Artist");
			else if (TypeOfArtist == "Photographe") dataGridView1->DataMember = ("Photographe");
			else if (TypeOfArtist == "Sculptor") dataGridView1->DataMember = ("Sculptor");
			else if (TypeOfArtist == "Street") dataGridView1->DataMember = ("Street");
			
			//dataGridView1->DataMember = ("Artist");
			dataGridView1->DataSource = Set;
			
		}
		dataGridView1->ReadOnly = true;
		dataGridView1->Columns[1]->Visible = false;
		dataGridView1->Columns[2]->Visible = false;

		dataGridView1->ClearSelection();
		/*isSelect = false;
		ChangeButton->Enabled = false;
		DeleteButton->Enabled = false;*/

		dataGridView1->Refresh();
	}
private: System::Void dataGridView1_Click(System::Object^ sender, System::EventArgs^ e) {


	Object^ cellValue = dataGridView1->Rows[dataGridView1->CurrentCell->RowIndex]->Cells[dataGridView1->CurrentCell->ColumnIndex]->Value;

	if (cellValue != nullptr && cellValue != "") {
		Object^ cellValue1 = dataGridView1->Rows[dataGridView1->CurrentCell->RowIndex]->Cells[0]->Value;
		FormForArtist1^ a = gcnew FormForArtist1(cellValue1->ToString(), TypeOfArtist, Path);
		a->Show();
	}

}
};
}
