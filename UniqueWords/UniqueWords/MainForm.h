#pragma once
#include "AnalysisSolver.h"

namespace UniqueWords {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label_VolOfSymb;
	private: System::Windows::Forms::CheckBox^ chckB_Space;


	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ tb_VolOfSymb;

	private: System::Windows::Forms::Label^ label_VolOfWords;
	private: System::Windows::Forms::TextBox^ tb_VolOfWords;
	private: System::Windows::Forms::CheckBox^ chckB_OnlyLetter;






	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::CheckBox^ checkBox4;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label_VolOfSymb = (gcnew System::Windows::Forms::Label());
			this->chckB_Space = (gcnew System::Windows::Forms::CheckBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->chckB_OnlyLetter = (gcnew System::Windows::Forms::CheckBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tb_VolOfSymb = (gcnew System::Windows::Forms::TextBox());
			this->label_VolOfWords = (gcnew System::Windows::Forms::Label());
			this->tb_VolOfWords = (gcnew System::Windows::Forms::TextBox());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(294, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(229, 20);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Введите исследуемый текст";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(53, 76);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(583, 267);
			this->textBox1->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(340, 363);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(163, 46);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Рассчитать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// label_VolOfSymb
			// 
			this->label_VolOfSymb->AutoSize = true;
			this->label_VolOfSymb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_VolOfSymb->Location = System::Drawing::Point(90, 376);
			this->label_VolOfSymb->Name = L"label_VolOfSymb";
			this->label_VolOfSymb->Size = System::Drawing::Size(160, 20);
			this->label_VolOfSymb->TabIndex = 6;
			this->label_VolOfSymb->Text = L"Количество знаков ";
			this->label_VolOfSymb->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label_VolOfSymb->Visible = false;
			// 
			// chckB_Space
			// 
			this->chckB_Space->AutoSize = true;
			this->chckB_Space->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->chckB_Space->Location = System::Drawing::Point(12, 57);
			this->chckB_Space->Name = L"chckB_Space";
			this->chckB_Space->Size = System::Drawing::Size(140, 20);
			this->chckB_Space->TabIndex = 8;
			this->chckB_Space->Text = L"Считать пробелы";
			this->chckB_Space->UseVisualStyleBackColor = true;
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->checkBox4);
			this->panel1->Controls->Add(this->chckB_OnlyLetter);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->chckB_Space);
			this->panel1->Location = System::Drawing::Point(642, 76);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(181, 267);
			this->panel1->TabIndex = 9;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox4->Location = System::Drawing::Point(12, 166);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(161, 36);
			this->checkBox4->TabIndex = 13;
			this->checkBox4->Text = L"Процент \r\nповторяющихся слов\r\n";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// chckB_OnlyLetter
			// 
			this->chckB_OnlyLetter->AutoSize = true;
			this->chckB_OnlyLetter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->chckB_OnlyLetter->Location = System::Drawing::Point(12, 83);
			this->chckB_OnlyLetter->Name = L"chckB_OnlyLetter";
			this->chckB_OnlyLetter->Size = System::Drawing::Size(116, 20);
			this->chckB_OnlyLetter->TabIndex = 11;
			this->chckB_OnlyLetter->Text = L"Только буквы\r\n";
			this->chckB_OnlyLetter->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(17, 135);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(145, 16);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Уникальные слова";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(60, 17);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(52, 16);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Знаки";
			// 
			// tb_VolOfSymb
			// 
			this->tb_VolOfSymb->Location = System::Drawing::Point(53, 412);
			this->tb_VolOfSymb->Multiline = true;
			this->tb_VolOfSymb->Name = L"tb_VolOfSymb";
			this->tb_VolOfSymb->ReadOnly = true;
			this->tb_VolOfSymb->Size = System::Drawing::Size(224, 62);
			this->tb_VolOfSymb->TabIndex = 10;
			this->tb_VolOfSymb->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->tb_VolOfSymb->Visible = false;
			// 
			// label_VolOfWords
			// 
			this->label_VolOfWords->AutoSize = true;
			this->label_VolOfWords->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_VolOfWords->Location = System::Drawing::Point(566, 376);
			this->label_VolOfWords->Name = L"label_VolOfWords";
			this->label_VolOfWords->Size = System::Drawing::Size(232, 20);
			this->label_VolOfWords->TabIndex = 11;
			this->label_VolOfWords->Text = L"Количество уникальных слов\r\n";
			this->label_VolOfWords->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label_VolOfWords->Visible = false;
			// 
			// tb_VolOfWords
			// 
			this->tb_VolOfWords->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tb_VolOfWords->Location = System::Drawing::Point(570, 412);
			this->tb_VolOfWords->Multiline = true;
			this->tb_VolOfWords->Name = L"tb_VolOfWords";
			this->tb_VolOfWords->ReadOnly = true;
			this->tb_VolOfWords->Size = System::Drawing::Size(224, 62);
			this->tb_VolOfWords->TabIndex = 12;
			this->tb_VolOfWords->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->tb_VolOfWords->Visible = false;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(835, 535);
			this->Controls->Add(this->tb_VolOfWords);
			this->Controls->Add(this->label_VolOfWords);
			this->Controls->Add(this->tb_VolOfSymb);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label_VolOfSymb);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"MainForm";
			this->Text = L"Подсчет уникальных слов и букв";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->label_VolOfSymb->Visible = true;
		this->label_VolOfWords->Visible = true;
		this->tb_VolOfSymb->Visible = true;
		this->tb_VolOfWords->Visible = true;

		String^ text = textBox1->Text;

		AnalysisSolver^ as = gcnew AnalysisSolver();

		array<String^>^ vol = as->countUniqueWords(text, chckB_OnlyLetter->Checked, chckB_Space->Checked)->Split(';');

		tb_VolOfWords->Text = vol[0];
		tb_VolOfSymb->Text = vol[1];




	}
};
}
