#pragma once
#include "TText.h"
#include "Stack.h"
std::string current;
std::string edit;
std::string add;
TText t;
namespace TTextForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(90, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(94, 19);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Навигация:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(64, 46);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(46, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Next";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(116, 46);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(46, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Down";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(168, 46);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(46, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Back";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(18, 87);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 19);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Текст:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(18, 106);
			this->label3->MinimumSize = System::Drawing::Size(250, 300);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(250, 300);
			this->label3->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(296, 27);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(76, 19);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Текущее:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(296, 46);
			this->label5->MinimumSize = System::Drawing::Size(150, 60);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(150, 60);
			this->label5->TabIndex = 7;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(296, 165);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(132, 19);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Редактирование:";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(296, 187);
			this->textBox1->MinimumSize = System::Drawing::Size(150, 60);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(150, 26);
			this->textBox1->TabIndex = 9;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(331, 250);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 10;
			this->button4->Text = L"Изменить";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(296, 295);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(101, 19);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Добавление:";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(296, 317);
			this->textBox2->MinimumSize = System::Drawing::Size(150, 60);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(150, 26);
			this->textBox2->TabIndex = 12;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(296, 383);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(56, 23);
			this->button5->TabIndex = 13;
			this->button5->Text = L"Next";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(390, 383);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(56, 23);
			this->button6->TabIndex = 14;
			this->button6->Text = L"Down";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(663, 442);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
