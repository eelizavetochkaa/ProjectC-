#pragma once
#include "LinkMessageBox.h"
namespace попытканепытка {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Person
	/// </summary>
	public ref class Person : public System::Windows::Forms::Form
	{
	public:
		Person(void)
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
		~Person()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DateTimePicker^ date;
	private: System::Windows::Forms::Button^ done;

	private: System::Windows::Forms::PictureBox^ matrixOfPerson;
	private: System::Windows::Forms::Label^ A;
	private: System::Windows::Forms::Label^ B;
	private: System::Windows::Forms::Label^ C;
	private: System::Windows::Forms::Label^ D;
	private: System::Windows::Forms::Label^ E;
	private: System::Windows::Forms::Button^ personalityMinus;

	private: System::Windows::Forms::Button^ personalityPlus;


	private: System::Windows::Forms::Button^ zoneOfComfort;
	private: System::Windows::Forms::Button^ soul;

	private: System::Windows::Forms::Label^ enter;
	private: System::Windows::Forms::Label^ nameOfArcana;



	private: System::Windows::Forms::Button^ exit;
	private: System::Windows::Forms::Button^ previous2;
	private: System::Windows::Forms::TextBox^ description;
	private: System::Windows::Forms::Button^ other;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Person::typeid));
			this->date = (gcnew System::Windows::Forms::DateTimePicker());
			this->done = (gcnew System::Windows::Forms::Button());
			this->matrixOfPerson = (gcnew System::Windows::Forms::PictureBox());
			this->A = (gcnew System::Windows::Forms::Label());
			this->B = (gcnew System::Windows::Forms::Label());
			this->C = (gcnew System::Windows::Forms::Label());
			this->D = (gcnew System::Windows::Forms::Label());
			this->E = (gcnew System::Windows::Forms::Label());
			this->personalityMinus = (gcnew System::Windows::Forms::Button());
			this->personalityPlus = (gcnew System::Windows::Forms::Button());
			this->zoneOfComfort = (gcnew System::Windows::Forms::Button());
			this->soul = (gcnew System::Windows::Forms::Button());
			this->enter = (gcnew System::Windows::Forms::Label());
			this->nameOfArcana = (gcnew System::Windows::Forms::Label());
			this->exit = (gcnew System::Windows::Forms::Button());
			this->previous2 = (gcnew System::Windows::Forms::Button());
			this->description = (gcnew System::Windows::Forms::TextBox());
			this->other = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->matrixOfPerson))->BeginInit();
			this->SuspendLayout();
			// 
			// date
			// 
			this->date->CalendarFont = (gcnew System::Drawing::Font(L"Arial", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->date->CalendarForeColor = System::Drawing::Color::SaddleBrown;
			this->date->CalendarMonthBackground = System::Drawing::Color::LavenderBlush;
			this->date->CalendarTitleBackColor = System::Drawing::Color::LavenderBlush;
			this->date->CalendarTitleForeColor = System::Drawing::Color::SaddleBrown;
			this->date->Cursor = System::Windows::Forms::Cursors::Hand;
			this->date->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->date->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->date->Location = System::Drawing::Point(240, 198);
			this->date->Name = L"date";
			this->date->Size = System::Drawing::Size(340, 62);
			this->date->TabIndex = 0;
			// 
			// done
			// 
			this->done->BackColor = System::Drawing::Color::Transparent;
			this->done->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->done->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->done->ForeColor = System::Drawing::Color::LavenderBlush;
			this->done->Location = System::Drawing::Point(279, 292);
			this->done->Name = L"done";
			this->done->Size = System::Drawing::Size(243, 57);
			this->done->TabIndex = 1;
			this->done->Text = L"готово";
			this->done->UseVisualStyleBackColor = false;
			this->done->Click += gcnew System::EventHandler(this, &Person::button1_Click);
			// 
			// matrixOfPerson
			// 
			this->matrixOfPerson->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"matrixOfPerson.BackgroundImage")));
			this->matrixOfPerson->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->matrixOfPerson->Location = System::Drawing::Point(152, 443);
			this->matrixOfPerson->Name = L"matrixOfPerson";
			this->matrixOfPerson->Size = System::Drawing::Size(493, 493);
			this->matrixOfPerson->TabIndex = 2;
			this->matrixOfPerson->TabStop = false;
			this->matrixOfPerson->Click += gcnew System::EventHandler(this, &Person::matrixOfPerson_Click);
			// 
			// A
			// 
			this->A->AutoEllipsis = true;
			this->A->AutoSize = true;
			this->A->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(221)), static_cast<System::Int32>(static_cast<System::Byte>(210)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->A->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->A->ForeColor = System::Drawing::SystemColors::ControlText;
			this->A->Location = System::Drawing::Point(170, 680);
			this->A->Name = L"A";
			this->A->Size = System::Drawing::Size(20, 24);
			this->A->TabIndex = 3;
			this->A->Text = L"0";
			this->A->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->A->Click += gcnew System::EventHandler(this, &Person::A_Click);
			// 
			// B
			// 
			this->B->AutoEllipsis = true;
			this->B->AutoSize = true;
			this->B->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(221)), static_cast<System::Int32>(static_cast<System::Byte>(210)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->B->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->B->Location = System::Drawing::Point(392, 464);
			this->B->Name = L"B";
			this->B->Size = System::Drawing::Size(20, 24);
			this->B->TabIndex = 4;
			this->B->Text = L"0";
			this->B->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// C
			// 
			this->C->AutoEllipsis = true;
			this->C->AutoSize = true;
			this->C->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(165)));
			this->C->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->C->Location = System::Drawing::Point(607, 679);
			this->C->Name = L"C";
			this->C->Size = System::Drawing::Size(20, 24);
			this->C->TabIndex = 5;
			this->C->Text = L"0";
			this->C->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->C->Click += gcnew System::EventHandler(this, &Person::C_Click);
			// 
			// D
			// 
			this->D->AutoEllipsis = true;
			this->D->AutoSize = true;
			this->D->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(165)));
			this->D->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->D->Location = System::Drawing::Point(390, 895);
			this->D->Name = L"D";
			this->D->Size = System::Drawing::Size(20, 24);
			this->D->TabIndex = 6;
			this->D->Text = L"0";
			this->D->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->D->Click += gcnew System::EventHandler(this, &Person::D_Click);
			// 
			// E
			// 
			this->E->AutoEllipsis = true;
			this->E->AutoSize = true;
			this->E->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(205)), static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->E->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->E->Location = System::Drawing::Point(392, 680);
			this->E->Name = L"E";
			this->E->Size = System::Drawing::Size(20, 24);
			this->E->TabIndex = 7;
			this->E->Text = L"0";
			this->E->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// personalityMinus
			// 
			this->personalityMinus->BackColor = System::Drawing::Color::Transparent;
			this->personalityMinus->Cursor = System::Windows::Forms::Cursors::Hand;
			this->personalityMinus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->personalityMinus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->personalityMinus->ForeColor = System::Drawing::Color::LavenderBlush;
			this->personalityMinus->Location = System::Drawing::Point(1032, 78);
			this->personalityMinus->Name = L"personalityMinus";
			this->personalityMinus->Size = System::Drawing::Size(194, 91);
			this->personalityMinus->TabIndex = 8;
			this->personalityMinus->Text = L"Характер человека в плюсе";
			this->personalityMinus->UseVisualStyleBackColor = false;
			this->personalityMinus->Click += gcnew System::EventHandler(this, &Person::personalityPlus_Click);
			// 
			// personalityPlus
			// 
			this->personalityPlus->BackColor = System::Drawing::Color::Transparent;
			this->personalityPlus->Cursor = System::Windows::Forms::Cursors::Hand;
			this->personalityPlus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->personalityPlus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->personalityPlus->ForeColor = System::Drawing::Color::LavenderBlush;
			this->personalityPlus->Location = System::Drawing::Point(1414, 78);
			this->personalityPlus->Name = L"personalityPlus";
			this->personalityPlus->Size = System::Drawing::Size(190, 91);
			this->personalityPlus->TabIndex = 9;
			this->personalityPlus->Text = L"Характер человека в минусе";
			this->personalityPlus->UseVisualStyleBackColor = false;
			this->personalityPlus->Click += gcnew System::EventHandler(this, &Person::personalityMinus_Click);
			// 
			// zoneOfComfort
			// 
			this->zoneOfComfort->BackColor = System::Drawing::Color::Transparent;
			this->zoneOfComfort->Cursor = System::Windows::Forms::Cursors::Hand;
			this->zoneOfComfort->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->zoneOfComfort->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->zoneOfComfort->ForeColor = System::Drawing::Color::LavenderBlush;
			this->zoneOfComfort->Location = System::Drawing::Point(1414, 212);
			this->zoneOfComfort->Name = L"zoneOfComfort";
			this->zoneOfComfort->Size = System::Drawing::Size(190, 92);
			this->zoneOfComfort->TabIndex = 10;
			this->zoneOfComfort->Text = L"Зона комфорта и гармонии";
			this->zoneOfComfort->UseVisualStyleBackColor = false;
			this->zoneOfComfort->Click += gcnew System::EventHandler(this, &Person::zoneOfComfort_Click);
			// 
			// soul
			// 
			this->soul->BackColor = System::Drawing::Color::Transparent;
			this->soul->Cursor = System::Windows::Forms::Cursors::Hand;
			this->soul->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->soul->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->soul->ForeColor = System::Drawing::Color::LavenderBlush;
			this->soul->Location = System::Drawing::Point(1032, 212);
			this->soul->Name = L"soul";
			this->soul->Size = System::Drawing::Size(194, 92);
			this->soul->TabIndex = 11;
			this->soul->Text = L"Главная проработка души";
			this->soul->UseVisualStyleBackColor = false;
			this->soul->Click += gcnew System::EventHandler(this, &Person::button2_Click);
			// 
			// enter
			// 
			this->enter->BackColor = System::Drawing::Color::Transparent;
			this->enter->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->enter->ForeColor = System::Drawing::Color::LavenderBlush;
			this->enter->Location = System::Drawing::Point(105, 26);
			this->enter->Name = L"enter";
			this->enter->Size = System::Drawing::Size(621, 149);
			this->enter->TabIndex = 12;
			this->enter->Text = L"Для расчёта матрицы судьбы введите дату рождения";
			this->enter->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// nameOfArcana
			// 
			this->nameOfArcana->AutoSize = true;
			this->nameOfArcana->BackColor = System::Drawing::Color::Transparent;
			this->nameOfArcana->Font = (gcnew System::Drawing::Font(L"Arial", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->nameOfArcana->ForeColor = System::Drawing::Color::LavenderBlush;
			this->nameOfArcana->Location = System::Drawing::Point(1090, 337);
			this->nameOfArcana->Name = L"nameOfArcana";
			this->nameOfArcana->Size = System::Drawing::Size(429, 56);
			this->nameOfArcana->TabIndex = 15;
			this->nameOfArcana->Text = L"Название аркана";
			// 
			// exit
			// 
			this->exit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->exit->BackColor = System::Drawing::Color::Transparent;
			this->exit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->exit->FlatAppearance->BorderSize = 0;
			this->exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->exit->Font = (gcnew System::Drawing::Font(L"Soledago", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->exit->ForeColor = System::Drawing::Color::White;
			this->exit->Location = System::Drawing::Point(1873, 11);
			this->exit->Margin = System::Windows::Forms::Padding(2);
			this->exit->Name = L"exit";
			this->exit->Size = System::Drawing::Size(56, 56);
			this->exit->TabIndex = 16;
			this->exit->Text = L"Х";
			this->exit->UseVisualStyleBackColor = false;
			this->exit->Click += gcnew System::EventHandler(this, &Person::exit_Click);
			// 
			// previous2
			// 
			this->previous2->BackColor = System::Drawing::Color::Transparent;
			this->previous2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->previous2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->previous2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->previous2->ForeColor = System::Drawing::Color::LavenderBlush;
			this->previous2->Location = System::Drawing::Point(1, 1);
			this->previous2->Name = L"previous2";
			this->previous2->Size = System::Drawing::Size(124, 76);
			this->previous2->TabIndex = 17;
			this->previous2->Text = L"<";
			this->previous2->UseVisualStyleBackColor = false;
			this->previous2->Click += gcnew System::EventHandler(this, &Person::previous2_Click);
			// 
			// description
			// 
			this->description->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->description->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->description->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->description->ForeColor = System::Drawing::Color::LavenderBlush;
			this->description->Location = System::Drawing::Point(902, 443);
			this->description->Multiline = true;
			this->description->Name = L"description";
			this->description->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->description->Size = System::Drawing::Size(832, 564);
			this->description->TabIndex = 18;
			// 
			// other
			// 
			this->other->BackColor = System::Drawing::Color::Transparent;
			this->other->Cursor = System::Windows::Forms::Cursors::Hand;
			this->other->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->other->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->other->ForeColor = System::Drawing::Color::LavenderBlush;
			this->other->Location = System::Drawing::Point(303, 971);
			this->other->Name = L"other";
			this->other->Size = System::Drawing::Size(194, 91);
			this->other->TabIndex = 19;
			this->other->Text = L"Другие характеристики";
			this->other->UseVisualStyleBackColor = false;
			this->other->Click += gcnew System::EventHandler(this, &Person::other_Click);
			// 
			// Person
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1940, 1100);
			this->Controls->Add(this->other);
			this->Controls->Add(this->description);
			this->Controls->Add(this->previous2);
			this->Controls->Add(this->exit);
			this->Controls->Add(this->nameOfArcana);
			this->Controls->Add(this->enter);
			this->Controls->Add(this->soul);
			this->Controls->Add(this->zoneOfComfort);
			this->Controls->Add(this->personalityPlus);
			this->Controls->Add(this->personalityMinus);
			this->Controls->Add(this->E);
			this->Controls->Add(this->D);
			this->Controls->Add(this->C);
			this->Controls->Add(this->B);
			this->Controls->Add(this->A);
			this->Controls->Add(this->done);
			this->Controls->Add(this->date);
			this->Controls->Add(this->matrixOfPerson);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Person";
			this->Text = L"Person";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Person::Person_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->matrixOfPerson))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		DateTime selectedDate = this->date->Value;
		int day = selectedDate.Day;
		int sum = 0;
		if (day < 23)  {
			sum = day;  
		}
		else {
			int tempDay = day;
			while (tempDay > 0) {
				sum += tempDay % 10;
				tempDay /= 10;
			}
			if (sum >= 22) {
				int newSum = 0;
				int tempSum = sum;
				while (tempSum > 0) {
					newSum += tempSum % 10;
					tempSum /= 10;
				}
				sum = newSum;
			}
		}
		int month = selectedDate.Month;
		int sum2 =  month;
		int year = selectedDate.Year;
		int sum3 = 0;
		int sum4 = 0;
		int year1 = year / 100;
		int year2 = year % 100;
		if (year1<23) {
			sum3 = year1;
		}
		else {
			int tempYear1 = year1;
			while (tempYear1 > 0) {
				sum3 += tempYear1 % 10;
				tempYear1 /= 10;
			}
			if (sum3 >= 23) {
				int newSum3 = 0;
				int tempSum3 = sum3;
				while (tempSum3 > 0) {
					newSum3 += tempSum3 % 10;
					tempSum3 /= 10;
				}
				sum3 = newSum3;
			}
		}
		if (year2<23) {
			sum4 = year2;
		}
		else {
			int tempYear2 = year2;
			while (tempYear2 > 0) {
				sum4 += tempYear2 % 10;
				tempYear2 /= 10;
			}
			if (sum4 >= 23) {
				int newSum4 = 0;
				int tempSum4 = sum4;
				while (tempSum4 > 0) {
					newSum4 += tempSum4 % 10;
					tempSum4 /= 10;
				}
				sum4 = newSum4;
			}
		}
		int year3 = sum3+sum4;
		int sum5 = 0;
		if (year3 <23) {
			sum5 = year3;
		}
		else {
			int tempYear3 = year3;
			while (tempYear3 > 0) {
				sum5 += tempYear3 % 10;
				tempYear3 /= 10;
			}
			if (sum5 >= 23) {
				int newSum5 = 0;
				int tempSum5 = sum5;
				while (tempSum5 > 0) {
					newSum5 += tempSum5 % 10;
					tempSum5 /= 10;
				}
				sum5 = newSum5;
			}
		}
		int sum6 = sum + sum2 + sum5;
		int sum7 = 0;
		if (sum6<23) {
			sum7 = sum6;
		}
		else {
			int temp = sum6;
			while (temp> 0) {
				sum7 += temp % 10;
				temp /= 10;
			}
			if (sum7 >= 23) {
				int newSum = 0;
				int tempSum = sum7;
				while (tempSum > 0) {
					newSum += tempSum % 10;
					tempSum /= 10;
				}
				sum7 = newSum;
			}
		}
		int sumE = sum + sum2 + sum5 + sum7;
		int result = 0;
		if (sumE<23) {
			result = sumE;
		}
		else {
			int temp = sumE;
			while (temp > 0) {
				result += temp % 10;
				temp /= 10;
			}
			if (result >= 23) {
				int newSum = 0;
				int tempSum = result;
				while (tempSum > 0) {
					newSum += tempSum % 10;
					tempSum /= 10;
				}
				result = newSum;
			}
		}
		this->A->Text = sum.ToString();
		this->B->Text = sum2.ToString();
		this->C->Text = sum5.ToString();
		this->D->Text = sum7.ToString();
		this->E->Text = result.ToString();
	}
private: System::Void Person_Load(System::Object^ sender, System::EventArgs^ e) {
	
	System::Drawing::Drawing2D::GraphicsPath^ path = gcnew System::Drawing::Drawing2D::GraphicsPath();
	path->AddEllipse(0, 0, matrixOfPerson->Width, matrixOfPerson->Height);
	matrixOfPerson->Region = gcnew System::Drawing::Region(path);
}
private: System::Void matrixOfPerson_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void D_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void A_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void C_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void zoneOfComfort_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->E->Text == "1") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("Обладатель 1 аркана привык ставить себе амбициозные цели и умеет достигать их любой ценой. Такой человек, безусловно, талантлив и умеет управлять ресурсами, которые даёт ему судьба. Однако максимально комфортно он себя чувствует не в момент достижения цели, а в процессе движения к ней.");
		sb->AppendLine();
		sb->AppendLine("Для перехода в точку гармонии нужно:");
		sb->AppendLine("• Не бойтесь строить глобальные планы, чем больше цель — тем лучше.");
		sb->AppendLine("• Будьте активны, верьте в свои силы, не бойтесь совершить ошибку.");
		sb->AppendLine("• Помните, что путь к любой цели начинается с чёткого плана.");
		sb->AppendLine("• Ресурсы, которые вам необходимы — непременно появятся в процессе движения.");
		sb->AppendLine("• Только рациональное мышление поможет вам достичь высоких результатов.");
		sb->AppendLine("• Лучшая сфера для реализации — созидание чего-то нового.");
		sb->AppendLine("• Познавайте мир, изучайте всё, что может помочь вам на пути к вершине.");
		sb->AppendLine("• Смело берите на себя ответственность за людей и процессы, вы справитесь.");
		sb->AppendLine("• Достигнув промежуточной цели — не останавливайтесь, ставьте новую цель и двигайтесь дальше.");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "1 аркан - Маг";
	}
	else if (this->E->Text == "2") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("Обладатель 2 аркана обладает врождённой интуицией, мудр в словах и поступках, не склонен проявлять эмоции, всегда окутан ореолом некой тайны. Достигнуть гармонии такой человек может, если станет действительно самодостаточным, будет постоянно развиваться духовно и обретёт внутреннее спокойствие.");
		sb->AppendLine();
		sb->AppendLine("Что нужно сделать для перехода в точку гармонии:");
		sb->AppendLine("• Примите и раскройте женскую сторону своей натуры.");
		sb->AppendLine("• Доверяйте интуиции, в поиске ответов обращайте свой взгляд внутрь, а не наружу.");
		sb->AppendLine("• Будьте терпеливы и выдержаны, больше доверяйте людям. Помогайте советом всем, кто просит об этом.");
		sb->AppendLine("• По возможности придерживайтесь нейтральной позиции, не вмешивайтесь в процессы, которые не инициировали.");
		sb->AppendLine("• Освойте любые духовные практики, займитесь йогой.");
		sb->AppendLine("• Проанализируйте свой жизненный опыт, выработайте свою жизненную позицию и кредо.");
		sb->AppendLine("• Больше слушайте, не ведите пустых разговоров, старайтесь меньше лгать, прекратите сплетничать.");
		sb->AppendLine("• Примите собственную уникальность, поймите, что некоторые знания доступны лишь избранным.");
		sb->AppendLine("• Набирайтесь опыта, накапливайте и осмысляйте всю поступающую информацию.");
		sb->AppendLine("• Старайтесь реализовывать творческие идеи, они достойны, чтобы воплотить их в жизнь!");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "2 аркан - Верховная жрица";
	}
	else if (this->E->Text == "3") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("Обладатель 3 аркана на протяжении всей жизни стремится к комфортной и счастливой жизни. Такой человек хочет добиться высокого социального статуса, жить в роскоши и богатстве. Даже власть, которой они рано или поздно добиваются, нужна им для того, чтобы получить материальные плоды, а не из простого честолюбия.");
		sb->AppendLine();
		sb->AppendLine("Для перехода в точку гармонии нужно:");
		sb->AppendLine("• Принять женскую сущность в себе и в окружающих женщинах, наладить отношения с матерью.");
		sb->AppendLine("• Найти достойного партнёра, завести крепкую патриархальную семью, родить детей.");
		sb->AppendLine("• Старайтесь содержать дом в идеальной чистоте и порядке.");
		sb->AppendLine("• Поставить цель, совместно с партнёром, обеспечить семью всем необходимым, повысить уровень жизни.");
		sb->AppendLine("• Научиться доверять супругу, разрешить ему принимать решения и нести ответственность за семью.");
		sb->AppendLine("• Не давить на детей, не навязывать им собственное мнение, разрешить жить своей жизнью.");
		sb->AppendLine("• Попробовать жить, как хочется: не экономить деньги, покупать престижные вещи, путешествовать и т.п.");
		sb->AppendLine("• Добиться руководящей должности на работе, принять на себя ответственность за подчинённых.");
		sb->AppendLine("• Начать помогать нуждающимся, взять под опеку достойного человека, реализовав тягу к наставничеству.");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "3 аркан - Императрица";
	}
	else if (this->E->Text == "4") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("4 аркан – наделён властью, уважает порядок, имеет талант управления людьми, может принимать важные и ответственные решения. Максимально комфортной для такого человека будет ситуация, где он будет в полной мере реализовывать заложенный потенциал.");
		sb->AppendLine();
		sb->AppendLine("Что нужно сделать для перехода в точку гармонии:");
		sb->AppendLine("• Император – отличный руководитель, не только в профессиональной деятельности, но и дома. Всё, что ему нужно сделать, чтобы стать лидером — захотеть этого и начать движение в этом направлении.");
		sb->AppendLine("• Если 4 энергия выпадает женщине, она не должна становиться «мужчиной в юбке». Своих целей нужно достигать, используя женскую силу: ум, красоту и хитрость.");
		sb->AppendLine("• Человек 4 аркана имеет критическое логическое мышление, может легко выстраивать стратегию развития, предусмотрителен в выборе пути. Ему нельзя руководствоваться эмоциями, только планирование и чистый расчёт.");
		sb->AppendLine("• Человеку с энергией Императора, нужно постоянно действовать, только активность принесёт хорошие плоды. Наметив план — сразу приступайте к его выполнению.");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "4 аркан - Импператор";
	}
	if (this->E->Text == "5") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("\tОбладатель 5 аркана всей душой стремится к истине и знаниям. Считается, что он может открыть величайшие тайны и постичь божественное откровение. Достигнуть гармонии такой человек может только совершив долгий и трудный путь своего становления и передав накопленную мудрость ученикам. Иерофант символизирует знания, доступные каждому, знания которые помогут людям постичь Вселенную.");
		sb->AppendLine();
		sb->AppendLine("Для перехода в точку гармонии нужно:");
		sb->AppendLine("• Постоянно учиться и развиваться в выбранном направлении.");
		sb->AppendLine("• Применять полученные знания на практике, объединяя материю и дух.");
		sb->AppendLine("• Найти последователей, а во второй половине жизни и учеников.");
		sb->AppendLine("• С чистым сердцем нести свет истины всем желающим.");
		sb->AppendLine("• Вести людей к свету, поднимая их до своего уровня.");
		sb->AppendLine("• Придерживаться человеческих и божественных законов.");
		sb->AppendLine("• Развиваясь духовно, не забывать о своём теле.");
		sb->AppendLine("• Наладить отношения в семье, иметь духовную связь с предками.");
		sb->AppendLine("• Блюсти семейные традиции и традиционное мировоззрение.");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "5 аркан - Иерофант";
	}
	if (this->E->Text == "6") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("Обладатель 6 аркана всю жизнь будет стремиться к любви и красоте. Буквально всё в их жизни будет делаться из любви и ради любви. Обрести истинную гармонию и комфорт такой человек сможет в тот момент, когда сможет полюбить себя и весь окружающий мир. Постарайтесь постоянно улучшать окружающий мир и по мере сил наполняйте его красотой. Однако не забывайте, что на этом пути вас ждёт немало искушений и мук выбора.");
		sb->AppendLine();
		sb->AppendLine("Для перехода в точку гармонии нужно:");
		sb->AppendLine("• Полюбите себя, свою жизнь, своих врагов, друзей и весь окружающий мир.");
		sb->AppendLine("• Примите любовь Вселенной, поймите, что бог вас действительно любит.");
		sb->AppendLine("• Правильно выберите спутника жизни, не будьте идеалистом и не жертвуйте собой ради отношений.");
		sb->AppendLine("• Расширяйте свой круг общения, заводите новые знакомства, дружите с теми, кто замкнут и одинок.");
		sb->AppendLine("• Выбирайте профессию по сердцу, смело меняйте работу, если в душе её ненавидите.");
		sb->AppendLine("• Чаще собирайте у себя гостей, людям всегда не хватает ощущения праздника.");
		sb->AppendLine("• Будьте терпимее к себе и окружающим, никто в этом мире несовершенен.");
		sb->AppendLine("• Разрешайте любые конфликты путём переговоров, силовые решения не принесут вам результата.");
		sb->AppendLine("• Окружите себя комфортом и уютом, не пренебрегайте деньгами, постарайтесь полюбить и их.");
		sb->AppendLine("• Всегда помните чего хотите, научитесь отделять фантазию от реальности.");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "6 аркан - Влюблённые";
	}
	else if (this->E->Text == "7") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("Обладатель 7 аркана всё время стремится двигаться и развиваться. На пути к цели он собран и дисциплинирован, старается контролировать обстановку и принимать верные решения. Однако настоящий душевный комфорт и гармонию он обретает только в момент победы.");
		sb->AppendLine();
		sb->AppendLine("Для перехода в точку гармонии нужно:");
		sb->AppendLine("• Наметить множество второстепенных и одну-две главных цели, так у вас постоянно будет мотивация не останавливаться в развитии.");
		sb->AppendLine("• Непременно нужно отмечать все значимые достижения.");
		sb->AppendLine("• Правильно выберите спутника жизни, не будьте идеалистом и не жертвуйте собой ради отношений.");
		sb->AppendLine("• Бороться с внутренним страхом поражения.");
		sb->AppendLine("• Стараться контролировать обстановку, а главное, самого себя.");
		sb->AppendLine("• Брать на себя ответственность за подчинённых и семью.");
		sb->AppendLine("• Выработать распорядок дня и неуклонно его придерживаться как в части работы, так и в части отдыха.");
		sb->AppendLine("• Развивать тело и дух. Заниматься спортом, обязательно участвовать в соревнованиях.");
		sb->AppendLine("• Найти хобби, больше путешествовать, крайне полезными будут конные прогулки.");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "7 аркан - Колесница";
	}
	else if (this->E->Text == "8") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("Обладатель 8 аркана всю свою жизнь стремится к справедливости и балансу во всём. Считается, что у такого человека есть все способности, чтобы достичь истинной гармонии, обрести душевное равновесие и покой.");
		sb->AppendLine();
		sb->AppendLine("Для перехода в точку гармонии нужно:");
		sb->AppendLine("• Удерживайте равновесие между духовным и материальным, не впадайте в крайности, не теряйте себя как бы плохо или хорошо не обстояли ваши дела.");
		sb->AppendLine("• Воздержитесь от необдуманных импульсивных поступков, спокойно и уверенно идите своей дорогой.");
		sb->AppendLine("• Исполняйте все юридические, моральные или религиозные законы, которые вы приняли. За любой противозаконный поступок вы будете наказаны Вселенной.");
		sb->AppendLine("• Находите и принимайте правильные решения, не убегая от проблем. Ситуация будет неоднократно повторяться, пока вы не пройдёте этот кармический урок.");
		sb->AppendLine("• Важно не подавлять эмоции, а научиться их контролировать. Иначе в критической ситуации эмоции возьмут над вами верх и не дадут трезво мыслить.");
		sb->AppendLine("• Следуйте советам голоса справедливости внутри вас. Замечайте знаки судьбы, они помогут вам при принятии решения и выбора нужной дороги.");
		sb->AppendLine("• Старайтесь оставаться на правильном пути и поступать справедливо, независимо от собственных желаний, личной выгоды и общественного осуждения.");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "8 аркан - Справедливость";
	}
	else if (this->E->Text == "9") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("Человек с 9 энергией в Матрице судьбы всю свою жизнь стремиться получать знания, исследовать и узнавать что-то новое. Этот человек любит находиться наедине с самим собой, и в одиночестве вести поиск истины.");
		sb->AppendLine();
		sb->AppendLine("Для перехода в точку гармонии нужно:");
		sb->AppendLine("• Вы самый настоящий мудрец и должны постоянно собирать в свою копилку новые знания и опыт. Применяйте их в реальной жизни, увеличивайте свой авторитет в глазах окружающих.");
		sb->AppendLine("• Регулярное пребывание в одиночестве подпитает вас силами. Находясь наедине с собой, вы гораздо будете гораздо быстрее усваивать информацию и осмыслять полученный опыт.");
		sb->AppendLine("• Попробуйте себя в роли учителя или наставника. Обратите внимание, что порой после разговора с вами человеку становится легче. Больше общайтесь - вас очень воодушевит возможность делиться своим опытом.");
		sb->AppendLine("• Научитесь соблюдать баланс духовного и физического развития. Не замыкайтесь в одиночестве.");
		sb->AppendLine("• Вы не слишком эмоциональны от природы, однако это идёт вам на пользу. Не торопитесь с принятием решений, будьте спокойны и никогда не идите силовым путём.");
		sb->AppendLine("• У вас есть незаурядные творческие способности, обязательно попробуйте их реализовать. Не так важно чем вы займётесь, важен сам факт творения и самовыражения.");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "9 аркан - Отшельник";
	}
	else if (this->E->Text == "10") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("Человек с 10 арканом обычно верит в свою судьбу и удачу, никогда не унывает в случае неприятностей, всегда готов действовать и двигаться. Именно тогда, когда удача на стороне 10 аркана, а он находится в самой гуще событий, этот человек обретает истинную гармонию и счастье.");
		sb->AppendLine();
		sb->AppendLine("Для перехода в точку гармонии нужно:");
		sb->AppendLine("• Не забывайте, вы находитесь в руках судьбы, помните, это она вас ведёт, а не вы её.");
		sb->AppendLine("• Верьте в удачу, но не забывайте активно действовать, Колесо фортуны не любит пассивных.");
		sb->AppendLine("• Следите за знаками, не упускайте возможности, которые будут вам предоставлены.");
		sb->AppendLine("• Научитесь соблюдать баланс духовного и физического развития. Не замыкайтесь в одиночестве.");
		sb->AppendLine("• Не торопитесь с принятием решений, будьте спокойны и никогда не идите силовым путём.");
		sb->AppendLine("• Следуйте советам голоса справедливости внутри вас. Замечайте знаки судьбы.");
		sb->AppendLine("• У вас есть незаурядные творческие способности, обязательно попробуйте их реализовать.");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "10 аркан - Колесо фортуны";
	}
	else if (this->E->Text == "11") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("Только баланс между духовной и физической силой дарит обладателю 11 аркана душевный комфорт и ощущение гармонии. Начиная постигать все аспекты своей силы равновесия с детства, этот человек постепенно движется к намеченной цели, становясь всё более уверенным в себе, спокойным и доброжелательным.");
		sb->AppendLine();
		sb->AppendLine("Для перехода в точку гармонии нужно:");
		sb->AppendLine("• Принять внутреннего «зверя», обуздать своё животное естество, не подавляя и не заключая в клетку.");
		sb->AppendLine("• Углублять свои знания, чтобы вложенная в вас энергия направлялась в верное русло.");
		sb->AppendLine("• Заботиться о теле правильно, не истощая, а укрепляя его.");
		sb->AppendLine("• Регулярно заниматься спортом, участвовать в соревнованиях.");
		sb->AppendLine("• Научиться отдыхать и делать перерывы, найти себе хобби.");
		sb->AppendLine("• Бороться с физическими слабостями, подталкивающими к распущенности, насилию.");
		sb->AppendLine("• Развивать стойкость, преодолевать все тяготы и лишения.");
		sb->AppendLine("• Помнить о помощи высших сил, поддерживающих тех, кто нашёл призвание.");
		sb->AppendLine("• Относиться к своему дарованию, как к возможности помогать окружающим.");
		sb->AppendLine("• Установить связь с окружающим миром через природу, духовные практики.");
		sb->AppendLine("• Набравшись опыта, помогать слабым, делиться с ними силой и опытом.");
		sb->AppendLine("• Достигнув богатства и успеха, использовать эти блага для добрых целей.");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "11 аркан - Сила";
	}
	else if (this->E->Text == "12") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("Обладатель 12 аркана прекрасно понимает людей, умеет сопереживать и сочувствовать, принимая на себя часть груза ближнего. Собственно именно в момент помощи такой человек действительно счастлив и достигает истинной гармонии.");
		sb->AppendLine();
		sb->AppendLine("Для перехода в точку гармонии нужно:");
		sb->AppendLine("• Старайтесь всё время развиваться духовно, это наполнит вас силой и уверенностью.");
		sb->AppendLine("• У вас есть своё мнение по любому вопросу и собственный взгляд на происходящее.");
		sb->AppendLine("• Вы отлично понимаете окружающих и умеете подбирать нужные слова для поддержки.");
		sb->AppendLine("• Если у вас нет материальных проблем — займитесь благотворительностью.");
		sb->AppendLine("• Почаще вспоминайте о своих потребностях, вы тоже достойны любви и сострадания.");
		sb->AppendLine("• Ухаживайте за собой, регулярно отдыхайте, больше бывайте на природе.");
		this->nameOfArcana->Text = "12 аркан - Повешенный";

		this->description->Text = sb->ToString();
	}
	else if (this->E->Text == "13") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("Обладатель 13 энергии всей душой стремится к переменам в жизни и личной духовной трансформации. Быстро адаптируется к любым изменениям сам и помогает в этом остальным.");
		sb->AppendLine();
		sb->AppendLine("Для перехода в точку гармонии нужно:");
		sb->AppendLine("• Поймите, что все перемены, которые несёт вам жизнь — к лучшему.");
		sb->AppendLine("• Решительно отпускайте прошлое, завершайте начатые дела.");
		sb->AppendLine("• Наряду с переменами в жизни, вы должны меняться и сами.");
		sb->AppendLine("• Занимайтесь духовным саморазвитием, следите за новыми технологиями.");
		sb->AppendLine("• Временами будет сложно, однако это ваш путь, доверьтесь судьбе.");
		sb->AppendLine("• Если ваша профессия не связана с риском, попробуйте экстремальное хобби.");
		this->nameOfArcana->Text = "13 аркан - Смерть";

		this->description->Text = sb->ToString();
	}
	else if (this->E->Text == "14") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("Человек с 14 энергией ищет и рано или поздно находит ту самую золотую середину и идеальный баланс во всём. Именно тогда, когда вы сможете привести в состояние равновесия все свои дела и чувства — вы достигните истинной гармонии.");
		sb->AppendLine();
		sb->AppendLine("Для перехода в точку гармонии нужно:");
		sb->AppendLine("• Научиться управлять своими эмоциями, быть спокойным и умиротворённым.");
		sb->AppendLine("• Никогда не торопите события, вряд ли что-то будет происходить быстро.");
		sb->AppendLine("• Перед принятием решений оценивайте ситуацию с разных сторон.");
		sb->AppendLine("• Будьте скромны во всём, добившись успеха — не хвастайте этим.");
		sb->AppendLine("• В любых проблемах избегайте полярных решений, ищите компромисс.");
		sb->AppendLine("• В итоге вы должны прийти к балансу во всех сферах.");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "14 аркан - Умеренность";
	}
	else if (this->E->Text == "15") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("15 энергия олицетворяет неизбежное зло, живущее в каждом человеке. Обладатели приходят к гармонии только при полном принятии себя, сумев подчинить своей воле все тайные желания.");
		sb->AppendLine();
		sb->AppendLine("Для перехода в точку гармонии нужно:");
		sb->AppendLine("• Контролировать свои желания и страсти.");
		sb->AppendLine("• Разорвать цепи зависимостей (отношения, вещи, привычки).");
		sb->AppendLine("• Понять, что абсолютной независимости достичь нереально.");
		sb->AppendLine("• Отказаться от послаблений в самодисциплине.");
		sb->AppendLine("• Взять ситуацию под контроль, сосредоточиться на себе.");
		sb->AppendLine("• Мудро пользоваться властью, не подавлять окружающих.");
		sb->AppendLine("• Завершить отношения, которые склоняют к дурным поступкам.");
		sb->AppendLine("• Окружить себя добрыми людьми.");
		sb->AppendLine("• Научиться прощать — себя и других.");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "15 аркан - Дьявол";
	}
	else if (this->E->Text == "16") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("Носителя 16 аркана всю жизнь будут преследовать различные испытания, победы будут сменяться поражениями. Причём именно в момент успешного преодоления испытания он обретает истинную гармонию.");
		sb->AppendLine();
		sb->AppendLine("Для перехода в точку гармонии нужно:");
		sb->AppendLine("• Не бояться бед, предательства и материальных потерь.");
		sb->AppendLine("• Быть твёрдым и решительным, не прогибаться под ударами судьбы.");
		sb->AppendLine("• Отбросить всё, что не даёт развиваться и тормозит в пути.");
		sb->AppendLine("• Мыслить конструктивно, побороть деструктивные мысли.");
		sb->AppendLine("• Помогать нуждающимся в вашей помощи.");
		sb->AppendLine("• Никогда не переоценивать себя, избегать гордыни.");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "16 аркан - Башня";
	}
	else if (this->E->Text == "17") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("Обладатель 17 аркана всю свою жизнь стремится к некой мечте или цели всей жизни. Гармония воцаряется при выполнении промежуточных шагов на пути к мечте.");
		sb->AppendLine();
		sb->AppendLine("Для перехода в точку гармонии нужно:");
		sb->AppendLine("• Иметь главную мечту и цель своей жизни.");
		sb->AppendLine("• Мечтать в конструктивном ключе (например, карта желаний).");
		sb->AppendLine("• Раскрыть свой главный талант.");
		sb->AppendLine("• Верить в свои способности, но не переоценивать себя.");
		sb->AppendLine("• Терпеливо трудиться самому и помогать окружающим.");
		sb->AppendLine("• Общаться с достойными, талантливыми людьми.");
		sb->AppendLine("• Не стесняться проявлять свою уникальность.");
		sb->AppendLine("• Заниматься саморазвитием, получать новые знания.");
		sb->AppendLine("• Не забывать развиваться духовно.");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "17 аркан - Звезда";
	}
	else if (this->E->Text == "18") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("18 аркан наделяет человека богатой фантазией, живым умом, творческим талантом, а главное, способностью материализовать в реальности свои мысли.");
		sb->AppendLine();
		sb->AppendLine("Для перехода в точку гармонии нужно:");
		sb->AppendLine("• Сформировать свой внутренний мир.");
		sb->AppendLine("• Мыслить позитивно, бороться со страхами.");
		sb->AppendLine("• Заниматься самообразованием.");
		sb->AppendLine("• Выражать мысли через искусство.");
		sb->AppendLine("• Научиться доверять своему внутреннему голосу.");
		sb->AppendLine("• Больше общаться с окружающими.");
		sb->AppendLine("• Все мечты направлять в конструктивное русло.");
		sb->AppendLine("• Постоянно тренировать дар материализатора.");
		sb->AppendLine("• Ставить перед собой разумные цели.");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "18 аркан - Луна";
	}
	else if (this->E->Text == "19") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("Обладатель 19 аркана всегда энергичен, излучает тепло и позитив, предпочитает ставить себе амбициозные цели. Именно в процессе движения к целям такой человек чувствует себя комфортно.");
		sb->AppendLine();
		sb->AppendLine("Для перехода в точку гармонии нужно:");
		sb->AppendLine("• Ставить себе несколько целей в разных направлениях.");
		sb->AppendLine("• Фиксировать достигнутый прогресс.");
		sb->AppendLine("• Не допускать хаоса в работе.");
		sb->AppendLine("• Создать семью, завести детей.");
		sb->AppendLine("• Заниматься спортом, следить за здоровьем.");
		sb->AppendLine("• Быть добрее с окружающими.");
		sb->AppendLine("• Сдерживать сильные эмоции.");
		sb->AppendLine("• Не хвалиться своим положением.");
		sb->AppendLine("• Стараться не быть жадным.");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "19 аркан - Солнце";
	}
	else if (this->E->Text == "20") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("Обладатель 20 аркана может достичь полного комфорта, если ему удастся решить все проблемы своего рода, а также найти свой личный путь и добиться успеха.");
		sb->AppendLine();
		sb->AppendLine("Для перехода в точку гармонии нужно:");
		sb->AppendLine("• Решить все задачи рода.");
		sb->AppendLine("• Учесть ошибки предков.");
		sb->AppendLine("• Уважительно относиться к памяти предков.");
		sb->AppendLine("• Регулярно устраивать семейные встречи.");
		sb->AppendLine("• В какой-то момент пробудить собственное сознание.");
		sb->AppendLine("• Заниматься духовным развитием.");
		sb->AppendLine("• Обретя власть — решительно принимать решения.");
		sb->AppendLine("• Начать семейный бизнес.");
		sb->AppendLine("• Смотреть на мир позитивно.");
		sb->AppendLine("• Продолжать учиться, получать образование.");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "20 аркан - Страшный суд";
	}
	else if (this->E->Text == "21") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("Человек с 21 энергией стремится охватить своим вниманием весь мир. Гармония воцаряется, когда он чувствует себя частью глобального проекта, цель которого сделать мир лучше.");
		sb->AppendLine();
		sb->AppendLine("Для перехода в точку гармонии нужно:");
		sb->AppendLine("• Сформулировать личную философию.");
		sb->AppendLine("• Определить главную цель в жизни.");
		sb->AppendLine("• Быть толерантным к другим культурам.");
		sb->AppendLine("• Поддерживать высокий темп развития.");
		sb->AppendLine("• Ломать стереотипы и привычные рамки.");
		sb->AppendLine("• Стремиться расширить свой кругозор.");
		sb->AppendLine("• Больше путешествовать.");
		sb->AppendLine("• Изучать новые языки.");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "21 аркан - Мир";
	}
	else if (this->E->Text == "22") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("Владельца 22 энергии ничто не может остановить на дороге к мечте. Такой человек обладает настоящей внутренней свободой. Его путь проходит по краю пропасти.");
		sb->AppendLine();
		sb->AppendLine("Что нужно сделать для перехода в точку гармонии:");
		sb->AppendLine("• Принять данную от природы свободу.");
		sb->AppendLine("• Снять внутренние барьеры.");
		sb->AppendLine("• Быть открытым людям.");
		sb->AppendLine("• Искать новые ощущения, больше путешествовать.");
		sb->AppendLine("• Завести экстремальное хобби.");
		sb->AppendLine("• Иметь настоящего друга и соратника.");

		this->description->Text = sb->ToString();
	}
}
	private: System::Void exit_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();}
	private: System::Void previous2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void personalityMinus_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->B->Text == "1") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
		sb->AppendLine("Состояние человека «в минусе»:");
		sb->AppendLine();
		sb->AppendLine("• Неверие себе. Худшее, что может произойти с 1 арканом — он перестаёт верить в свои силы и возможности. И действительно, чем больше он себя будет убеждать в этом, тем меньше будет энергии, тем меньше возможностей будет давать ему Вселенная. В результате у человека не получается завершить начатое, он не принимает советы и отрицает любую конструктивную критику.");
		sb->AppendLine("• Отсутствие цели. Если Маг не ставит себе цель, не ищет точку приложения сил и мотивацию двигаться — он неминуемо деградирует. Из жизнерадостного человека, любящего жизнь, превращается в брюзгу, который всем недоволен и крайне раздражителен. Может пуститься «во все тяжкие», прожигая жизнь и разменивая талант «по рублю».");
		sb->AppendLine("• Тщеславие и беспринципность. В некоторых случаях люди с 1 энергией болезненно тщеславны, эгоистичны, жаждут признания во власти. Они готовы добиваться этого любой ценой и не сковывают себя какими-то предрассудками, пустить в ход могут любые средства.");
		sb->AppendLine("• Потребительское отношение к людям. Как в личных, так и в рабочих отношениях, в погоне за результатом может крайне потребительски относиться к людям. Очень категоричен и требователен, не умеет прощать и уступать, не стесняется оказывать моральное давление. Лишается друзей, любви, ругается с родственниками и коллегами.");
		sb->AppendLine("• Депрессия достижений. Энергия первого аркана даёт человеку силы и возможности, но когда он достигает задуманного, вместо чувства удовлетворения это приносит разочарование. Такое состояния будет длиться ровно до тех пор, пока не появится новая цель.");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "1 аркан - Маг";
	}
	else if (this->B->Text == "2") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
		sb->AppendLine("Состояние человека «в минусе»:");
		sb->AppendLine();
		sb->AppendLine("• Примитивный взгляд. Мудрость в минусе превращается в глупость. Человек упрощает модель мира, деля его на хорошее и плохое, принимает крайне спорные или вовсе абсурдные решения.");
		sb->AppendLine("• Пассивность. Даже если знает решение, может долго следить за ситуацию и не вмешиваться. Зачем так делает не может объяснить даже себе. Любит прокрастинировать, предпочитает дать проблеме «отлежаться», нежели сразу приступит к её реализации. Смиряется с несправедливостью, апеллируя к воле высших сил.");
		sb->AppendLine("• Переменчивость. Часто меняет всё в своей жизни: причёску, одежду, настроение, модели поведения. Не имеют своего мнения ни по какому вопросу или также меняют его ежедневно. Окружающие это замечают, не понимают, что происходит, и прекращают общаться.");
		sb->AppendLine("• Лишние эмоции. В минусе самодостаточность превращается в излишнюю эмоциональность. Человек становится без меры болтлив, постоянно чем-то недоволен, много сплетничает, часто лжёт без веской причины.");
		sb->AppendLine("• Одиночество. Со временем между обладателем 2 аркана и окружающими образуется незримая стена, препятствующая нормальным отношениям. Такому человеку сложно найти спутника жизни, отношения либо «зависают» либо люди расстаются.");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "2 аркан - Верховная жрица";
	}
	else if (this->B->Text == "3") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
		sb->AppendLine("Состояние человека «в минусе»:");
		sb->AppendLine();
		sb->AppendLine("• Непринятие женского начала. (для женщин). Такая женщина не хочет взрослеть и не желает брать на себя ответственность. Не желает развиваться, учиться, двигаться по карьерной лестнице. Постоянно скандалит с сёстрами, матерью, бабушкой. В молодости может открыто презирать семейные ценности, сознательно отказываясь от рождения детей и замужества. В зрелом возрасте предъявляет заведомо невыполнимые требования к партнёру, находится в вечном пассивном поиске. В итоге заводит кошку и смиряется со статусом старой девы.");
		sb->AppendLine("• Инфантильность (для мужчин). В минусе это очень инфантильный или «забитый» мужчина. Может всю жизнь жить за счёт жены или матери. У него нет стремления к развитию, он всегда надеется на авось и плывёт по течению. У такого человека может в принципе не быть семейной жизни, а если и будет, то станет для него скорее обременением. Из-за этого он может впадать в агрессию, виня женщин во всех своих бедах.");
		sb->AppendLine("• Нетерпение. Крайнее нетерпение и непунктуальность — самые частые негативные черты Императрицы, хоть и не самые страшные. Их высочество может пренебрегать временем или, наоборот, быть особо требовательной ко всем окружающим. За малейшее несоответствие её требованиям вы получите скандал.");
		sb->AppendLine("• Гордыня и заносчивость. Два других не менее частых минуса этой энергии. Достигнув определённого достатка и социального статуса, Императрица ставит себя выше других и становится недосягаемой для обычных простолюдинов. В таком состоянии может игнорировать старых друзей, родственников и коллег. Много хвастается, кичась своим положением и деньгами.");
		sb->AppendLine("• Злоупотребление властью. При отсутствии более честолюбивых людей, например, Императора, Императрица может получить в свои руки всю власть. Вседозволенность может вскружить ей голову, и тогда она переходит все границы дозволенного. Как правило, становясь меркантильной, агрессивной и беспринципной стервой. В результате женщина теряет свою суть и становится предельно несчастлива.");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "3 аркан - Императрица";
	}
	else if (this->B->Text == "4") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
		sb->AppendLine("Состояние человека «в минусе»:");
		sb->AppendLine();
		sb->AppendLine("• Контроль или тирания. Если энергия развивается в минусе, авторитетный лидер превращается в тирана или контролёра. Человек начинает требовать от окружающих безупречного выполнения своей воли, невзирая на личные цели и интересы. В первую очередь это сказывается на членах семьи. Чем больше его терпят, тем хуже становится поведение.");
		sb->AppendLine("• Высокомерие. Если такой человек добивается определённых успехов и не занимается саморазвитием, то становится крайне высокомерным. Он завышает собственную важность, предвзято оценивает окружающих, ему сложно угодить и тем более донести свою точку зрения. В подростковом возрасте скандалит с родителями, особенно с отцом.");
		sb->AppendLine("• Страх потерпеть неудачу. В некоторых случаях этого человека обуревает страх потерпеть неудачу. Он боится, что какое-то внезапное вмешательство, навредит идеальному плану. Постепенно страх перерастает в фобию, забирает много сил, и наносит серьёзный удар по авторитету и высокому положению человека.");
		sb->AppendLine("• Женское начало. В тех случаях, когда аркан достаётся женщине, она легко может потерять своё женское начало и стать настоящим «мужиком в юбке». Может найти себе заведомо слабого, ведомого партнёра, которым будет манипулировать и помыкать.");
		sb->AppendLine("• Напряжённость в отношениях. Близкое общение с Императором, который уходит в минус, со временем становится невозможным. С годами его характер становится хуже, требования всё жёстче. Развивается мания величия, общение становится крайне неприятным.");
		sb->AppendLine("• Худший вариант. При уходе в «глубокий минус» такие люди могут потерять все положительные черты характера и скатываются в противоположную крайность. Боятся брать на себя ответственность, постоянно болеют, лишаются стабильного дохода.");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "4 аркан - Император";
	}
	else if (this->B->Text == "5") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
		sb->AppendLine("Состояние человека «в минусе»:");
		sb->AppendLine();
		sb->AppendLine("• Внутренний конфликт. Следуя принятым правилам и традициям, такому человеку бывает невозможно получать знания и идти к истине. Каждый раз, упираясь в тупик непонимания, он вынужден страдать, так как нет никакой возможности избавиться от внутреннего давления. Вместе с тем нельзя поделиться с кем-то, чтобы не поставить под удар свой авторитет. Классический пример — все мужчины в семье традиционно кузнецы, а человек с 5 арканом в душе хочет быть химиком.");
		sb->AppendLine("• Контролёр. Контроль за тем, чтобы всё вокруг происходило правильно — одно из любимых занятий такого человека. Он ревностно и кропотливо будет контролировать всё и всех вокруг, чтобы добиться соблюдения идеального порядка и традиций. В минусе эта черта выражена сильно и человек буквально доводит до истерики членов семьи и коллег своим занудством.");
		sb->AppendLine("• Инквизитор. Этот аркан бывает буквально одержим собственным понятием истины, что может навредить окружающим. В минусе он объявляет «охоту на ведьм» и благодаря своему авторитету собирает значительную армию, готовую «жечь на костре» всех неугодных. Может придерживаться ортодоксальных течений, проповедовать нетрадиционные религии, агрессивно вербуя сторонников.");
		sb->AppendLine("• Бедный мудрец. Если энергия находится в минусе, человек может не раскрыться как признанный специалист или не будет обращать внимание на достойное вознаграждение своего труда. В результате он скатывается в нищету, и втайне даже гордится этим.");
		sb->AppendLine("• Отчаявшийся. Находясь в минусе, 5 аркан расходует массу сил, чтобы раскрыть людям истину и передать свои знания. Однако, если вокруг только неблагодарные ученики, никакой подпитки у него не будет. Чаще всего такой человек отчаивается или выгорает. Отказывается от своего признания, теряет авторитет, уходит от людей, оставаясь наедине и со своими знаниями.");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "5 аркан - Иерофант";
	}
	else if (this->B->Text == "6") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
		sb->AppendLine("Состояние человека «в минусе»");
		sb->AppendLine();
		sb->AppendLine("• Неприятный человек. В минусе любовь превращается в сухой расчёт и такой человек отталкивает от себя окружающих. Может стать мнительным и высокомерным, воспринимать любые проблемы излишне остро. Завышает требования к близким, часто обижается, не умеет прощать, мстит за нанесённые обиды.");
		sb->AppendLine("• Неправильный выбор. Остаётся в уверенности, что всё делает правильно, однако через какое-то время понимает, что совершил ошибку, однако что-то исправить уже невозможно. Зачастую такой неправильный выбор в корне меняет жизнь человека.");
		sb->AppendLine("• Пессимизм. Со временем проблемы накапливаются, и минусовой аркан всей тяжестью ложится на плечи своего обладателя. В результате человек становится угрюмым пессимистом, перестаёт верить людям, искренне считает, что не в силах поменять свою жизнь.");
		sb->AppendLine("• Не от мира сего. Зачастую 6 аркан живёт в собственном придуманном мире, где хорошо и ничего не угрожает. Например: с головой уходит в своё хобби, переносит общение в социальные сети, погружается в виртуальные игры.");
		sb->AppendLine("• Дискриминация по внешним признакам. Искренне считает, что его внимания достойны только такие же прекрасные люди как он сам. Оценивает окружающих по внешности, делает акцент на статусных атрибутах. Хотя точно так же придирчиво относится и к собственной внешности.");
		sb->AppendLine("• Глупые траты. Не умеет копить и контролировать траты, часто совершает необдуманные спонтанные покупки. Отказывается заниматься элементарным финансовым планированием, может потратить всю зарплату за неделю, а дальше жить в кредит.");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "6 аркан - Влюблённые";
	}
	else if (this->B->Text == "7") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
		sb->AppendLine("Состояние человека «в минусе»:");
		sb->AppendLine();
		sb->AppendLine("• Застой. Если жизнь заставляет такого человека остановиться, ему очень сложно вновь начать движение вперёд. Поэтому любые достаточно серьёзные препятствия на пути Колесницы — могут стать фатальными. В некоторых случаях неудачи бывают случайными, а обстоятельства приведшие к остановке мелкими и несущественными.");
		sb->AppendLine("• Внутренние страхи. В минусе такого человека постоянно преследуют различные внутренние страхи. Он боится не справиться и проиграть, думает о том, верный ли путь выбран, страшится совершить ошибку и подвести доверившихся людей.");
		sb->AppendLine("• Беспорядочные действия. При отсутствии дисциплины, чёткого плана этот человек начинает совершать энергичные, но беспорядочные действия. Такое поведение непременно приводит их к остановке и дальнейшей стагнации.");
		sb->AppendLine("• Злой погонщик. Вступив в «битву» и не достигнув успеха, 7 аркан может утратить моральные ориентиры и озлобиться на весь мир. В таком случае он срывает злобу на близких, становится буквально невыносимым. Хуже всего, что злоба не даёт ему желанной победы.");
		sb->AppendLine("• Загнанный конь. В других случаях он обрушивает силу гнева не на посторонних, а на себя. Ругая себя за совершённые ошибки, он пытается всеми силами исправить ситуацию, постепенно теряя силы и, в конце концов, совершенно лишаясь сил.");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "7 аркан - Колесница";
	}
	else if (this->B->Text == "8") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
		sb->AppendLine("Состояние человека «в минусе»:");
		sb->AppendLine();
		sb->AppendLine("• Отстранённость и эгоизм. В минусе это может быть закрытый, замкнутый или погружённый в себя человек. Больше всего он думает о себе, а значит, ему сложно строить построить здоровые отношения. Втайне может гордиться своей принципиальностью и считать окружающих недостойными себя.");
		sb->AppendLine("• Чрезмерная ответственность. Гипертрофированное чувство ответственности мешает принимать решения и достигать успеха в жизни. Зачастую 8 аркан стремится контролировать таким образом не только себя, но и членов семьи, что, конечно, плохо сказывается на отношениях.");
		sb->AppendLine("• Эмоциональность и агрессия. В глубоком минусе может утратить способность здраво мыслить, перестаёт контролировать эмоции. В погоне за правдой и справедливостью становится крайне агрессивен, совершает массу неразумных поступков.");
		sb->AppendLine("• Наивность. Верит всем подряд, поддаётся чужим манипуляциям, легко обманывается, живёт иллюзиями. Вследствие чего, не имеет веса среди коллег и партнёров, его часто делают крайним в конфликтах. Часто попадается на уловки мошенников.");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "8 аркан - Справедливость";
	}
	else if (this->B->Text == "9") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
		sb->AppendLine("Состояние человека «в минусе»:");
		sb->AppendLine();
		sb->AppendLine("• Замкнутость. Отшельник может настолько погружаться в свой внутренний мир, что разучивается контактировать с окружающими. Совершенствуясь в выбранном направлении, он перестаёт воспринимать внешний мир, семью, житейские проблемы. Со временем такой стиль жизни погружает человека в апатию, из которой ему сложно выйти самостоятельно.");
		sb->AppendLine("• Страх одиночества. Есть и другая крайность минуса 9 энергии, в этом случае человек, наоборот, панически боится остаться один. Возможно, после серьёзной ошибки или из-за страха показаться глупым. В результате окружает себя сомнительными друзьями совершенно несоответствующими его уровню. Постепенно «скатывается» к бездумному существованию, полностью теряя себя.");
		sb->AppendLine("• Невостребованная мудрость. По мере взросления Отшельник копит знания, опыт и мудрость. И в какой-то момент он должен начать передавать накопленное всем желающим. Если этого не случится и Отшельник не найдёт учеников или последователей, избыток энергии постепенно будет разрушать его сущность.");
		sb->AppendLine("• Упрямство и придирчивость. Зачастую этот человек довольно высокомерен, и считает себя умнее всех. Если вы захотите рассказать ему некую альтернативную точку зрения, то, вероятно, ничего не получится. Скорее всего, Отшельник вас выслушает и задаст массу вопросов, пытаясь придраться и найти изъян. Но даже если вы ответите верно, это вряд ли поменяет его точку зрения.");
		sb->AppendLine("• Отсутствие физического развития. В погоне за знаниями и духовным развитием 9 аркан может совершенно забыть о собственном теле и здоровье. Чрезмерное умственное напряжение и слабое тело приводят к болезням и психологическим расстройствам.");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "9 аркан - Отшельник";
	}
	else if (this->B->Text == "10") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
		sb->AppendLine("Состояние человека «в минусе»:");
		sb->AppendLine();
		sb->AppendLine("• Упущенный шанс. В минусе судьба всё так же даёт 10 аркану прекрасные возможности для развития, однако тот неизменно упускает их. Происходить это может по разным причинам, но результат один и тот же — ситуация только ухудшается. В результате у человека просыпается злость на весь мир, ненависть к самому себе и своей жизни.");
		sb->AppendLine("• Неблагодарность судьбе. Какие бы блага ни давало Колесо фортуны, такой человек никогда не бывает доволен. Вечно сетует, что жизнь несправедлива, не умеет довольствоваться тем, что получил. Всё, что происходит, он считает исключительно своей заслугой, думает, будто достиг чего-то не благодаря, а вопреки воле Вселенной.");
		sb->AppendLine("• Пассивность. Ленив и пассивен, не хочет ничего делать, чтобы изменить существующий порядок вещей. Не любит брать на себя ответственность, надеется на авось, ждёт, пока кто-то другой разрешит его проблемы. Не осознаёт своей удаче, не доверяет интуиции, не хочет ставить себе цели, не говоря уже об их достижении.");
		sb->AppendLine("• Изменчивость. Такие люди часто бывают заложниками своего настроения, резко скатываются из позитива в негатив. Утром может признаваться в любви, а вечером быть холодным и равнодушным. Членам семьи и коллегам может быть очень сложно найти с ним общий язык, появляется ощущение, что в этом человеке живут две разных личности.");
		sb->AppendLine("• Опасная беспечность. В глубоком минусе обладатель Колеса фортуны совсем плюёт на жизнь и становится опасно беспечен. Делает что хочет, невзирая на возможные последствия, пренебрежительно относится к деньгам, здоровью и самой жизни. Может увлечься азартными играми или встать на преступный путь.");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "10 аркан - Колесо фортуны";
		}
	else if (this->B->Text == "11") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
		sb->AppendLine("Состояние человека «в минусе»:");
		sb->AppendLine();
		sb->AppendLine("• Трусливый лев. Сила остаётся с вами постоянно, но не приносит пользы из-за постоянных страхов, сомнений и тревог. Вселенная материализует всё, о чём вы думаете — и вот худшие ожидания и предположения, воплощаются в реальности. В результате силы постепенно истощаются, а потенциал остаётся нереализованным. Человек становится апатичным, получает проблемы с лишним весом и здоровьем.");
		sb->AppendLine("• Уставший аскет. Отказ от удовольствий и земных радостей ведёт к однообразной жизни, в которой нет места смеху, любви и отдыху. Эта жизнь изнурительна, вы расходуете всю энергию, не успевая её вовремя пополнять. Вскоре, устав от безрадостных будней, человек полностью замыкается в себе и начинает сторониться общества.");
		sb->AppendLine("• Тиран. Использование силы для разрушения, а не для защиты и поддержки делает путь 11 аркана кривым и небезопасным. Окружающие сторонятся вашей силы, стараются выйти из-под её влияния. Эта энергия подавляет окружающих, лишает их свободы и стремится к установлению главенства. В таком состоянии человек перестаёт подчиняться и делегировать обязанности.");
		sb->AppendLine("• Кающийся грешник. Сожаления о прошлых ошибках действуют как оковы, которые не позволяют вести полноценную жизнь. Человек не может преодолеть барьер вины и останавливается, вместо того чтобы принять урок к сведению и стать ещё сильнее. Итог такого пути – утрата ориентиров в жизни, бесцельное применение силы, часто ведущее к досадным ошибкам.");
		sb->AppendLine("• Утративший веру. Ещё одна крайность – полная потеря веры, отречение от идеалов. В этом смысле человек полностью подчиняется слабостям, которые со временем разрушают тело и душу. Безверие делает жизнь тёмной, ведёт к моральному падению, депрессии.");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "11 аркан - Сила";
	}
	else if (this->A->Text == "12") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
		sb->AppendLine("Состояние человека «в минусе»:");
		sb->AppendLine();
		sb->AppendLine("• Опустошение и разочарование - потеря смысла и мотивации");
		sb->AppendLine("• Отсутствие главной цели - жизнь без четкого направления");
		sb->AppendLine("• Негативный магнит - притягивание проблем и неудач");
		sb->AppendLine("• Пассивная жертва - попадание в роль жертвы обстоятельств");
		sb->AppendLine("• Вредные привычки - склонность к зависимостям как способу бегства от реальности");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "12 аркан - Повешенный";
	}
	else if (this->B->Text == "13") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
		sb->AppendLine("Состояние человека «в минусе»:");
		sb->AppendLine();
		sb->AppendLine("• Застой и страх перемен - сопротивление любым изменениям");
		sb->AppendLine("• Пессимизм и неудачи - негативное восприятие жизни");
		sb->AppendLine("• Давление на окружающих - навязывание своих изменений другим");
		sb->AppendLine("• Мысли о смерти - депрессивные состояния и суицидальные мысли");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "13 аркан - Смерть";
	}
	else if (this->B->Text == "14") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
		sb->AppendLine("Состояние человека «в минусе»:");
		sb->AppendLine();
		sb->AppendLine("• Дисбаланс. В минусе такой человек теряет ощущение баланса, что не позволяет ему жить гармонично. Любые проблемы начинаются именно с этого, дисбаланс может проявляться как в какой-то одной сфере жизни, так и во всех сразу. Например: полностью забывает о здоровье и концентрируется на карьере, много времени уделяет внешнему виду, игнорируя интеллектуальное развитие, становится груб и агрессивен и т. п.");
		sb->AppendLine("• Аскетичность. Это один из частных случаев дисбаланса, однако он бывает чаще других. Обладатель 14 аркана полностью концентрируется на духовном состоянии и совершенно перестаёт интересоваться материальной жизнью. Довольствуется малым, не стремиться улучшить своё положение, в итоге полностью забрасывает работу, дом и семью.");
		sb->AppendLine("• Отрешённость. Чрезмерная скромность и страх нарушить баланс в себе и окружающем мире заставляют уйти в себя и отрешиться от внешних проблем. Человек становится молчалив и скрытен, не хочет делиться своими мыслями и чувствами с членами семьи. Постепенно теряет веру в себя, занимается самобичеванием, живёт прошлыми обидами.");
		sb->AppendLine("• Бесчувственность. Привычка прятать чувства и нежелание развивать творческие способности, превращают такого человека в «бесчувственное бревно». Со временем он перестаёт нуждаться в любви сам и никого не любит в ответ, полностью презирает искусство и игнорирует свои чувственные порывы.");

		this->description->Text = sb->ToString();
	}
	else if (this->B->Text == "15") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
		sb->AppendLine("Состояние человека «в минусе»:");
		sb->AppendLine();
		sb->AppendLine("• Отсутствие контроля. Энергия 15 аркана требует постоянного контроля, управления эмоциями. Если человек пускает своё состояние на самотёк, он лишается всего созидающего и уходит в негативную зону, в которой царит упадок. Затем быстро приходит к депрессии, страдает безудержными вспышками гнева.");
		sb->AppendLine("• Саморазрушение. Вредные привычки, агрессия, бесчувственность – всё это делает человека уязвимым, побуждает рушить своё здоровье, причём как моральное, так и физическое. Это может стать причиной развития болезней, ухудшающих качество жизни, подчиняющих разум.");
		sb->AppendLine("• Диктатор. Ощутив власть над другими, человек стремится сохранить её, утвердиться за счёт окружающих людей. Такое проявление энергии носит ярко выраженный негативный характер, делающий личность более вспыльчивой, восприимчивой к отрицательному влиянию. Возможность управлять другими превращается в навязчивую идею, источник получения самых ярких эмоций.");
		sb->AppendLine("• Зависимый. Человек может зависеть от разных привычек – употребления веществ, алкоголя или получения ярких ощущений. Он также может находиться в зависимом положении в отношениях – повсюду следовать за человеком, подавляющим его волю, стремящимся воспользоваться его даром. Не имея сил обрести свободу, личность ощущает себя слабой, беспомощной.");
		sb->AppendLine("• Проигравший. Опустив руки, этот человек прекращает борьбу со своими слабостями, становится её жертвой. Его начинают преследовать поражения во всём – в профессии, творчестве, личной жизни. Попав в этот порочный круг, человек становится его заложником, чувствует бессилие и опустошение.");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "15 аркан - Дьявол";
	}
	else if (this->B->Text == "16") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
		sb->AppendLine("Состояние человека «в минусе»:");
		sb->AppendLine();
		sb->AppendLine("• Крушение надежд, потрясение. В минусе этот человек прогибается под ударами судьбы и, что называется, «ломается». Может долго стремиться к чему-то значимому и разочароваться, обретя желаемое. При этом испытывает острое чувство потери и полного краха. В зависимости от значимости события может пребывать в растерянности и унынии как несколько дней, так и несколько лет.");
		sb->AppendLine("• Страх и защита. Катастрофически боится перемен и закрывается от всего, что может повлиять на его жизнь и нарушить привычный ход вещей. В результате человек строит вокруг «глухую стену» и полностью перекрывает себе все возможности для развития. Перестаёт общаться с окружающими, остаётся глух к просьбам нуждающихся.");
		sb->AppendLine("• Разрушение. В минусе талант восстанавливать и созидать превращается в проклятье разрушения. Всё, к чему прикасается этот человек, рушится под напором обстоятельств. Иногда 16 аркан прикладывает к этому немалые усилия, причём почему он так делает, не знает и сам.");
		sb->AppendLine("• Гордыня, переоценка себя. После нескольких успехов обладатель 16 аркана может возгордиться собой и начать переоценивать себя и свои реальные возможности. В результате при очередном испытании не выдерживает натиска обстоятельств и терпит поражение со всеми вытекающими последствиями.");
		sb->AppendLine("• Кризис отношений. Зачастую этот человек становится агрессивным тираном, что в первую очередь чувствуют на себе члены семьи. Начинаются проблемы в отношениях с партнёром, дети стараются быстрее покинуть семью, как только достаточно вырастут. В критической ситуации может решиться на отчаянные, аморальные действия, и в итоге остаётся в одиночестве.");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "16 аркан - Башня";
	}
	else if (this->B->Text == "17") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
		sb->AppendLine("Состояние человека «в минусе»:");
		sb->AppendLine();
		sb->AppendLine("• Чужая жизнь. В минусе этот человек забывает о своей мечте и проживает чужую жизнь. Под воздействием членов семьи, обстоятельств или личных страхов забывает об истинной цели и выбирает неверный путь. На этом пути он лишается поддержки Вселенной, идёт тяжело и медленно, ему приходится пробиваться локтями и выгрызать зубами любой успех.");
		sb->AppendLine("• Неверие в себя. Когда идёшь по чужому пути — достичь чего-то стоящего сложно. Постепенно обладатель 17 аркана теряет веру в себя и свой дар. Перестаёт искать свой талант, и прекращает пробовать силы в различных направлениях. В итоге останавливается в развитии и постепенно теряет энергию.");
		sb->AppendLine("• Серая мышь. Такой человек стыдится своей внешности, не хочет выделяться из толпы, боится сказать лишнее. В душе считает себя посредственным ничтожеством и даже не помышляет о том, чтобы начать исполнять свою мечту. Окружающие открыто презирают его, открыто насмехаются и при первой возможности «садятся на шею».");
		sb->AppendLine("• Звёздная болезнь. Это противоположный вариант развития. Человек с завышенной самооценкой, бунтарь и задира, слишком много о себе возомнивший. Обычно «звёздная болезнь» начинается после первого успеха на пути к мечте или на волне неожиданной известности. Как правило, Вселенная быстро наказывает зазнайку. В худшем случае вас ждёт забвение, конец карьеры или творческого пути.");
		sb->AppendLine("• Уныние и пессимизм. В глубоком минусе, вне зависимости от варианта развития, 17 аркан теряет свой неизменный позитивный настрой. Постоянно жалуется на несправедливость судьбы, безденежье, людскую подлость и т. п. Непрерывно копит негатив, впадает в уныние, от него отворачиваются друзья и родственники.");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "17 аркан - Звезда";
	}
	else if (this->B->Text == "18") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
		sb->AppendLine("Состояние человека «в минусе»:");
		sb->AppendLine();
		sb->AppendLine("• Страхи и сомнения. В минусе этот человек находится под властью дурных мыслей. Боится принимать решения, постоянно сомневается в себе. Эти опасения серьёзно мешают ему развиваться и налаживать отношений с окружающими. Всё это пагубно влияет на качество жизни – начинается депрессия, страдает карьера, теряется связь с членами семьи.");
		sb->AppendLine("• Негативный сценарий. Дурные фантазии материализуются в реальности, и жизнь развивается по самому негативному сценарию. Не имея в себе сил бороться с внешним миром, человек быстро сдаётся и предпочитает плыть по течению. Никогда не пользуется дарованной силой и отказывается от решительных действий, сдаётся и старается довольствоваться тем, что есть.");
		sb->AppendLine("• Бегство от реальности. Стремясь уйти от ответственности, обладатель 18 аркана предпочитает сбегать от проблем в свой внутренний мир. А когда обстоятельства не оставляют другого выбора, не может найти верное решение. Ошибается, ищет оправдания и снова бездействует, утверждая, что слишком слаб для активной жизни.");
		sb->AppendLine("• Ожидание разрешения. Для любого важного поступка такому человеку требуется разрешение – он должен быть уверен, что не совершит ошибку. Поэтому он стремится всегда находиться под чьим-то руководством, но при этом всем сердцем желает достичь успеха. Откладывая важные дела и решения, упускает массу возможностей для развития.");
		sb->AppendLine("• Блуждание без цели. Отсутствие цели делает этого человека пассивным, он дрейфует по морю жизни без плана и маршрута – полностью подчиняясь судьбе. Такая жизнь бесплодна и пуста, не приносит удовлетворения, лишена смысла и вдохновения. Конечно, он довольно умён, но понимает, что происходит, только во второй половине жизни, когда исправлять положение гораздо сложнее.");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "18 аркан - Луна";
	}
	else if (this->B->Text == "19") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
		sb->AppendLine("Состояние человека «в минусе»:");
		sb->AppendLine();
		sb->AppendLine("• Одержимость. Когда энергия в минусе этот человек полностью зацикливается на каком-то одном деле и полностью забывает обо всём остальном. Причём предмет интереса будет вытягивать всю энергию без остатка. Например, он может настолько увлечься карьерой, что «сгорит на работе».");
		sb->AppendLine("• Высокомерие. Добившись некоторых результатов, такой человек становится высокомерным гордецом. При любой возможности превозносит собственные заслуги, кичится общественным положением или материальным достатком. Может незаслуженно оскорблять подчинённых и друзей, ставя себя выше остальных.");
		sb->AppendLine("• Бездействие. Когда обладатель 19 аркана долго бездействует, внутренняя энергия постепенно выжигает его изнутри. В результате серьёзно меняется характер и портятся отношения с окружающими. В периоды вынужденного простоя вам необходимо нагружать себя массой различных дел, иначе изменения станут необратимыми.");
		sb->AppendLine("• Регресс. В глубоком минусе эта энергия буквально разваливает жизнь своего владельца, лишая его всех достижений. На практике это выливается в ряд неконтролируемых происшествий, серьёзно понижающих ваш статус, благосостояние и уровень отношений. Например: перевод на нижестоящую должность, банкротство компании, развод с супругом.");
		sb->AppendLine("• Корыстолюбие. В некоторых случаях такой человек ставит во главу угла материальное благосостояние. Становится скуп, старается на всём экономить, даже если хорошо зарабатывает, жёстко контролирует расходы семьи. При этом может выделить некое направление, куда будет тратить всё сэкономленное, например: недвижимость, автомобили, статусные вещи.");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "19 аркан - Солнце";
	}
	else if (this->B->Text == "20") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
		sb->AppendLine("Состояние человека «в минусе»:");
		sb->AppendLine();
		sb->AppendLine("• Отщепенец. Когда энергия уходит в минус, этот человек уходит из семьи, или, наоборот, семья по каким-то причинам его изгоняет. Ситуацию можно исправить, однако для этого потребуется признать свои ошибки, принять ответственность и совершить ряд важных действий.");
		sb->AppendLine("• Нерешительный скептик. Идеи других людей этот человек воспринимает с сомнениями, привык высмеивать чужие надежды и предположения. Не уверен в себе, никогда не строит планы, во всём видит ловушки и угрозы, таким образом, лишая себя всех подарков судьбы.");
		sb->AppendLine("• Мелкая сошка. Каждый день такого человека наполнен однообразными событиями, в которых нет никакой радости. Эта рутина действует удручающе, сбивает с толку, вынуждает ощущать себя слабым и никому не нужным. Отсутствие перемен, глобальных целей, интересной работы, мотивации — отнимает жизненную силу.");
		sb->AppendLine("• Спящий. Любые изменения воспринимаются этим человеком негативно, даже если что-то происходит, он видит только опасности, а не возможности. Не хочет раскрывать свои таланты, всячески избегает судьбоносных решений, намеренно отстраняясь от любых ярких событий. Жизнь его подобна скучному, серому сну, из которого нет выхода.");
		sb->AppendLine("• Несправедливый судья. Этот человек любит вешать ярлыки и осуждать окружающих за любые проступки. Искренне считает, что у него есть такое право, и не стесняется высказывать все претензии в глаза. А вот критику в свой адрес не воспринимает и, что называется, «в своём глазу бревна не замечает».");
		sb->AppendLine("• Противник прогресса. Любые философские течения, инновации, технологии и новые методы работы кажутся человеку чрезмерно сложными. Он отказывается изучать и пользоваться ими. Такое упрямство сужает ваше мировоззрение, ведёт к снижению продуктивности работы, мешает устроить семейную жизнь.");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "20 аркан - Страшный суд";
	}
	else if (this->B->Text == "21") {
			System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
			sb->AppendLine("Состояние человека «в минусе»:");
			sb->AppendLine();
			sb->AppendLine("• Воинственность. Когда аркан в минусе, такой человек становится крайне нетерпим к любой несправедливости или вещам, которые не соответствуют его мировоззрению. Воинственно настроен по отношению к любой власти, готов отстаивать свои идеалы словом и делом. Вполне может стать настоящим революционером, оппозиционером, экологом, борцом за права меньшинств.");
			sb->AppendLine("• Бесконечная рутина. Боится участвовать в больших проектах, не верит в свои силы и преуменьшает возможности. В результате погружается в пучину мелких дел и бытовой суеты, из которой уже не может выбраться. Опасается принимать значимые решения, в любых обстоятельствах идёт по пути наименьшего сопротивления, не любит выходить из зоны комфорта.");
			sb->AppendLine("• Пустые мечты и реальность. Человек полностью погружён в свои фантазии, мечтает о том, чтобы сделать мир идеальным, представляет себя в роли победителя добившего успеха. Однако ничего не делает чтобы воплотить мечты в реальность, считает, что никто не понимает его гениальность. В результате сталкивается с суровой реальностью, ничего не достигает, впадает в депрессию и опускает руки.");
			sb->AppendLine("• Шаблоны и отсталость. Не понимает, что мир непрерывно развивается, игнорирует новые течения и технологии. Предпочитает жить в прошлом и действует по отработанной схеме. Мыслит шаблонно, не проявляет инициативы, предпочитая исполнять прямые указания. Ленится получать дополнительное образование, считая это бесполезным занятием.");
			sb->AppendLine("• Замкнутость. Опасается окружающего мира, не любит бывать в новых местах, избегает живого общения, предпочитая уединение или общение в социальных сетях. Не доверяет новым людям, из-за чего долго не может найти достойного партнёра. В итоге замыкается в своём привычном мире, отказываясь выходить из него под разными предлогами.");

			this->description->Text = sb->ToString();
			this->nameOfArcana->Text = "21 аркан - Мир";
	}
	else if (this->B->Text == "22") {
			System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
			sb->AppendLine("Состояние человека «в минусе»:");
			sb->AppendLine();
			sb->AppendLine("• Маска. Очень часто, у людей с этой энергией, чрезмерная весёлость, скрывает подобно маске весьма напряжённую жизнь и тяжёлые мысли. Вместо того чтобы что-то менять они просто скрывают проблему.");
			sb->AppendLine("• Асоциальность. Любые социальные устои таким людям становятся в тягость: школа, работа — всё, где есть режим и строгий график. Могут всю жизнь оставаться холостяками, чтобы не привязаться к одному человеку на всю жизнь.");
			sb->AppendLine("• Беспомощность. Люди, с 22 энергией, бывают крайне беспомощны. Имея талант, они не могут его использовать, в их жизни больше разрушительного, чем созидательного. Всё, чем от природы наделён человек, может быть использовано в том случае, если рядом будет надёжный партнёр, направляющий в правильное русло.");
			sb->AppendLine("• Зависимость. Люди с такой энергией, часто попадают в зависимость. Это может быть игровая, алкогольная или наркотическая зависимость, что приводит к неприятным последствиям, вплоть до проблем с законом.");
			sb->AppendLine("• Иллюзорность. Иногда такой человек создаёт собственный фантастический мир. Ему кажется, что только там он абсолютно свободен.");
			sb->AppendLine("• Фриковатость. В поведении человека, с этой энергией, есть много моментов, которые отличают его от окружающих. В минусе, чувство стиля и экстравагантность превращает его во фрика. В результате жизнь, такого человека скорее напоминает театральную постановку.");

			this->description->Text = sb->ToString();
			this->nameOfArcana->Text = "22 Аркан - Шут";
	}
}
private: System::Void personalityPlus_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->A->Text == "1") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("Человек с энергией Мага крайне неординарно смотрит на жизнь, он очень амбициозен и уверен в собственных силах. Его невозможно поставить в тупик, умеет находить ответы на все вопросы, инициативен и легко принимает ответственные решения. Такой человек не стесняется ставить перед собой грандиозные цели и уверенно идёт к цели. Природа наделяет его немалыми способностями, а Вселенная отрывает перед ним массу возможностей.");
		sb->AppendLine();
		sb->AppendLine("Состояние человека «в плюсе»:");
		sb->AppendLine();
		sb->AppendLine("• Амбициозность. Первый аркан умеет ставить себе амбициозные цели, нисколько не сомневается в своих силах, никогда не слушает скептиков, игнорируя любой негатив. Впрочем, все амбиции имеют под собой основу и назвать его пустым прожектёром нельзя.");
		sb->AppendLine("• Масса возможностей. Такому человеку удаётся реализовать практически всё задуманное, так как Вселенная даёт ему все возможности. Обстоятельства складываются так, что у 1 аркана по мере необходимости всегда находятся необходимые ресурсы, знания и люди.");
		sb->AppendLine("• Созидательное начало. Этот человек — настоящий творец и никогда не станет что-то разрушать. Он повелевает материей и энергией, соединяя их воедино и созидая нечто новое из ничего.");
		sb->AppendLine("• Познание мира. Первый аркан любит получать новую информацию и расширять картину мира. Это прирождённый путешественник и естествоиспытатель.");
		sb->AppendLine("• Активная позиция. Люди первого аркана обладают неиссякаемой жизненной энергией, никогда не сидят на месте, крайне активны, излучают позитив и мотивируют окружающих. Многие берут пример с таких людей и восхищаются таким подходом к жизни.");
		sb->AppendLine("• Задатки лидера. Острый ум, амбиции и внутренняя энергия буквально заставляют Мага становиться лидером. Он знает, как организовать людей на совместный труд и замотивировать их на достижение намеченных целей. Со временем такие люди становятся опытными и весьма жёсткими руководителями.");
		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "1 аркан - Маг";
	}
	else if (this->A->Text == "2") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("Человек со второй энергией — очень проницателен и мудр, обладает богатым жизненным опытом. Далеко не всё рассказывает о себе и вообще окутан некой тайной. Обладает поразительной интуицией, видит людей насквозь, часто принимает верные, но совсем нелогичные решения. Умеет слушать и многое понимает без слов, даёт очень ценные и своевременные советы.");
		sb->AppendLine();
		sb->AppendLine("Состояние человека «в плюсе»:");
		sb->AppendLine();
		sb->AppendLine("• Мудрость и интуиция. Принимает себя и весь мир таким, какой он есть. Умеет сострадать, а жизненный опыт, позволяет вовремя распознать и понять знаки Вселенной. При принятии решений практически всегда руководствуется интуицией, гораздо меньше доверяет логике.");
		sb->AppendLine("• Ореол тайны. Об этом человеке многое неизвестно, да и он не спешит расставаться со своими секретами. Умеет исцелять словом и делом, видит то, что другим недоступно. Считается, что такие люди имеют особый талант к гаданиям и магии.");
		sb->AppendLine("• Спокойствие и проницательность. 2 аркан всегда зрит в корень и знает, как обрести и удерживать внутренний баланс между внешним и внутренним миром. Умеет отделять сиюминутные эмоции и порывы, от настоящих глубоких чувств. Даже в самой сложной ситуации не теряет лица и сохраняет спокойствие.");
		sb->AppendLine("• Самодостаточность. Такой человек редко кого пускает в свою жизнь. Обладая огромным внутренним миром, 2 аркан не испытывает острой потребности в общении с посторонними, хотя и совсем один быть не любит. Часто носит «маску» и только дома позволяет быть самой собой. Любит читать и знает толк в хорошей литературе.");
		sb->AppendLine("• Теневой дипломат. Человек, обладающий 2 энергией, вызывает необъяснимую симпатию у окружающих. Он умеет находить общий язык с людьми, и его очень любят животные. Однако сама Жрица не любит руководить напрямую, предпочитая занять место теневого лидера и скрытно управлять окружающими. Этот человек умеет мирить спорщиков, неплохо ведёт переговоры.");
		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "2 аркан - Верховная жрица";
	}
	else if (this->A->Text == "3") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("Третья энергия символизирует сильное женское начало, материальный достаток, комфорт и некое покровительство. Если энергия выпадает женщине, она может считаться настоящим воплощением Великой матери – идеальной хозяйки, жены, матери. Кроме того, эта энергия означает заботу об окружающих, помощь слабым и покровительство высших сил. Аркан имеет практически одинаковое значение как для мужчины, так и для женщины, кроме первого пункта.");
		sb->AppendLine();
		sb->AppendLine("Состояние человека «в плюсе»:");
		sb->AppendLine();
		sb->AppendLine("• Женское начало (для женщин). Обладательница 3 аркана — настоящая хранительница семейного очага. Она отличная хозяйка, верная жена и ответственная мать, окружающие стараются брать с неё пример и подражать во всём. Она красива и женственна, искренне любит своего мужа и обеспечивает ему всю необходимую поддержку. Быт и домашние дела являются для Императрицы любимым делом, которое рассматривается не как тяготеющая обязанность, а как любимое и необременительное занятие.");
		sb->AppendLine("• Женское начало (для мужчин). Обладатель 3 аркана прекрасно понимает всех женщин, имеет глубокую духовную связь со всеми женщинами в роду: бабушкой, матерью, сестрой. Женившись, становится прекрасным мужем, очень домовит, всегда помогает супруге по хозяйству, любит порядок и чистоту. Готов брать на себя ответственность и обеспечивать семью.");
		sb->AppendLine("• Изобилие и плодородие. Этому человеку удалось достичь многого, в процессе был получен богатый жизненный опыт и немалые материальные блага. Всё, к чему Императрица прикасается, начинает расти и плодоносить. Она знает, как распоряжаться деньгами, что приобрести в первую очередь, повысив уровень жизни. Имеет чувство вкуса и такта, прививает любовь к прекрасному всем желающим.");
		sb->AppendLine("• Покровительство. Довольно часто обладатель 3 аркана становится наставником или скорее покровителем. Может без всякой выгоды для себя заниматься воспитанием, обучением или оказывать материальную поддержку нуждающимся. Надо сказать, что и Вселенная не остаётся в долгу и покровительствует Императрице во многих начинаниях.");
		sb->AppendLine("• Роскошь и комфорт. Другой важный аспект этой энергии – любовь к роскоши и комфорту. Такой человек хочет иметь всё только самое лучшее и дорогое, его дом всегда «полная чаша» и выглядит как дворец. Любит дарить и получать подарки, по возможности старается делать жизнь интересной, наполненной счастливыми событиями.");
		sb->AppendLine("• Власть и стабильность. Человек с такой энергией привык решать глобальные вопросы и может на каком-то жизненном этапе обрести власть. Однако он не честолюбив, и власть для него не самоцель как для Императора. Скорее Императрице нравится состояние стабильности и уверенности в завтрашнем дне, которое даёт власть. Ну и прилагающая роскошь с комфортом — тоже играют свою роль.");
		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "3 аркан - Императрица";
	}
	else if (this->A->Text == "4") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("Четвёртый аркан символизирует некую влиятельную личность, с довольно серьёзным социальным статусом и мощной харизмой. К главным характеристикам этой энергии можно отнести честолюбие, рациональный подход делам, желание контролировать все происходящие вокруг процессы. Император убеждённый прагматик с крайне стабильным эмоциональным фоном, властный и авторитетный.");
		sb->AppendLine();
		sb->AppendLine("Состояние человека «в плюсе»:");
		sb->AppendLine();
		sb->AppendLine("• Власть и успех. Обычно такой человек, так или иначе, пробивается к власти и достигает успеха. Он по праву заслуживает авторитет в коллективе, последнее слово всегда за ним, как дома, так и на работе. Эта энергия психологически зрелых людей, которые состоялись в жизни и умеют достичь успеха.");
		sb->AppendLine("• Авторитетный лидер. Совсем необязательно, что 4 аркан будет занимать некую официальную высокую должность. Это вполне может быть теневой лидер, обладающий авторитетом. Он умеет руководить, не стесняется делегировать обязанности, контролирует выполнение, всегда доводит начатое до конца.");
		sb->AppendLine("• Рациональность. Такой человек не может позволить себе проявлять эмоции. Даже в самых сложных ситуациях, он спокоен и рационален, все его действия слаженные и чёткие. Умеет распоряжаться деньгами, стремится преумножить капитал.");
		sb->AppendLine("• Порядок. Четвёртый аркан ценит порядок и старается исключить любые случайности, которые могут внести хаос в жизнь. Его идеал: чёткое исполнение обязанностей, строгая иерархия и жёсткая дисциплина. Умеет вести переговоры и выстраивать системы.");
		sb->AppendLine("• Защита. Это довольно мощная энергия, которая дарует своему владельцу неплохую защиту и возможность преодолеть любые преграды на пути к цели. Практически в любой ситуации Император способен защитить себя и отстоять всё, что ему дорого.");
		sb->AppendLine("• Семья, клан. Рано или поздно этот человек становится главой рода, семьи, клана, где устанавливает строгую иерархию. Пол в этом случае значения не имеет. 4 аркан готов сделать всё, чтобы его семья жила в достатке.");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "4 аркан - Император";
	}
	else if (this->A->Text == "5") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("Такой человек всю жизнь ищет истину и знания, придерживается традиционных взглядов. Интересно, что в большинстве случаев знания его почерпнуты не из науки или религии, а даны свыше. Считается, что 5 энергия Иерофанта влияет на человека независимо от того, принадлежит он к какой-то конфессии или нет. Основной акцент здесь на накоплении и передаче знаний, влиянии на умы окружающих и поиске истины.");
		sb->AppendLine();
		sb->AppendLine("Состояние человека «в плюсе»:");
		sb->AppendLine();
		sb->AppendLine("• Просветлённый. Вы уверенно двигаетесь в направлении своих целей, а, возможно, уже смогли дойти до самой вершины. Такой человек стойко принимаете все вызовы и не сдаётся, берёт ответственность на себя, понимает свою миссию. Верит себе и знает, что, пройдя земной путь познаёт Вселенную.");
		sb->AppendLine("• Учитель и ученик. Вы всю жизнь копите, систематизируете и преумножаете знания. Считается, что в молодости ему важно найти Наставника, человека который передаст накопленные ранее знания. А в зрелом возрасте, наоборот, завести учеников, с которыми можно поделиться своими знаниями или опытом.");
		sb->AppendLine("• Авторитетный специалист. Вы обладаете массой знаний по определённому вопросу, что увеличило ваш авторитет в глазах окружающих. Вы неплохой оратор, и смело проповедуете свои принципы, всем желающим. Увлечение и преданность своим идеям заражает окружающих, они с большим удовольствием следуют за вами. Такого человека редко интересуют материальные блага, однако знания зачастую стоят очень дорого.");
		sb->AppendLine("• Хранитель традиций. Человек с 5 энергией чтит все традиции, для него важно находиться в определённой системе ценностей, следовать законам и принципам. Соблюдение и передача семейных традиций — также неотъемлемая часть его жизни. Пятый аркан свято чтит семейное родство и благоприятно влияет на отношения с родственниками.");
		sb->AppendLine("• Справедливый судья. В жизни такого человека, справедливость занимает одно из главных мест. Он чтит и свято верит в принятые им принципы, опираясь на которые определяет свои поступки. В определённый момент жизни, благодаря полученному авторитету -— может стать неким неофициальным судьёй.");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "5 аркан - Иерофант";
	}
	else if (this->A->Text == "6") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("Человек с 6 энергией сознаёт о себе очень приятное впечатление в глазах окружающих. Он красив и обаятелен, имеет отличный вкус, умеет поддержать разговор, искренне любит этот мир и тот отвечает тем же. В то же время шестой аркан подвержен влиянию эмоций и сиюминутных порывов, из-за которых часто оказывается перед непростым выбором. Довольно часто разум и сердце находятся в конфликте, который приходится разрешать. Зачастую живёт в своей личной реальности, старается окружить себя комфортом и атмосферой праздника. Если ему удаётся достичь личной гармонии, то становится по-настоящему успешным во всех сферах жизни.");
		sb->AppendLine();
		sb->AppendLine("Состояние человека «в плюсе»:");
		sb->AppendLine();
		sb->AppendLine("• Любовь ко всему. Всё, что вы будете делать в этой жизни, должно делаться по любви. Не ищите выгоды, не подключайте логику, не думайте, что полюбите потом — сердце самый точный советчик. Ищите любимого человека, учебное заведение, работу, машину и т. п. И первое, что такому человеку нужно научиться сделать — научиться любить себя, а через себя уже весь остальной мир.");
		sb->AppendLine("• Правильный выбор. Нетрудно догадаться, что судьба будет постоянно ставить вас перед выбором, кого слушать: разум или сердце. В каких-то случаях выбор будет сделать просто, в каких-то нет. Впрочем, если вы будете принимать решение из состояния любви — никогда не ошибётесь.");
		sb->AppendLine("• Обаяние и эмоции. Человек с 6 арканом очень обаятельный и всегда симпатичен окружающим. Он умеет понравиться, знает, как поддержать любой разговор, всегда весел и приветлив. Хорошо воспринимает чужие и транслирует свои эмоции.");
		sb->AppendLine("• Душа компании. Обладатель 6 энергии очень дружелюбен, имеет массу приятелей и знакомых. Для него важно быть принятым окружением, поэтому никогда ни с кем не ругается. Умеет мирить друзей и сглаживать конфликтные ситуации.");
		sb->AppendLine("• Ценитель прекрасного. Как у многих эмоциональных людей, у 6 аркана, сильно развито понимание прекрасного. Он хорошо выглядит, со вкусом одевается, ценит предметы искусства. Довольно артистичен, легко перевоплощается в нужный образ.");
		sb->AppendLine("• Радушный хозяин. Такой человек очень любит атмосферу праздника, поэтому с удовольствием принимает гостей у себя, любит ходить в гости к другим. С удовольствием организует праздничные мероприятия, а иногда даже делает это своей профессией.");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "6 аркан - Влюблённые";
	}
	else if (this->A->Text == "7") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("Такой человек постоянно находится в движении, старается контролировать происходящее, быстро реагирует на любое изменение обстоятельств. 7 аркан наделяет своего владельца острым умом, отменной реакцией, силой и ловкостью. Отменная дисциплина и навыки управления людьми делают из него неплохого руководителя.");
		sb->AppendLine();
		sb->AppendLine("Состояние человека «в плюсе»:");
		sb->AppendLine();
		sb->AppendLine("• Движение. Подобно Колеснице этот человек уверенно движется вперёд, умело преодолевая все преграды на пути. Он любит скорость и динамичное развитие событий, любое промедление, а тем более остановка для него неприемлемы.");
		sb->AppendLine("• Сосредоточенность и дисциплина. Седьмой аркан привык концентрироваться на деле, которое выполняет, и это вполне удаётся. Он умеет отстраниться от эмоций и никогда не суетится. Впрочем, внутренняя сосредоточенность не делает его «однозадачным», при необходимости он может делать несколько дел одновременно. Редко нарушает свои обещания, всегда дисциплинирован и ожидает того же от окружающих. Терпеть не может расхлябанности и попустительского отношения к процессу.");
		sb->AppendLine("• Острый ум, реакция и сила. Колесничий умеет быстро реагировать на изменение обстановки. При этом он успевает принять верное, а зачастую, весьма остроумное решение. Его тяжело застать врасплох или смутить глупыми вопросами. Обычно этот человек от природы наделён силой и ловкостью. Не всегда эта сила физическая, зачастую речь идёт о силе воли и «внутреннем стержне».");
		sb->AppendLine("• Воля к победе. Несмотря на возникающие сложности этот человек достаточно оптимистичен и готов побеждать. Для победы он готов сделать всё: работать, развиваться, активно действовать, созидать и разрушать. Колесничий привык быть в самой гуще схватки и может сокрушить любого противника.");
		sb->AppendLine("• Власть и контроль. Решительность и привычка непрерывно контролировать процесс делает этого человека умелым руководителем. Хоть он и не умеет мыслить стратегически, руководство малыми коллективами ему удаётся без труда. Если у такого человека нет амбиций, он становится отличным командным игроком и прекрасно вписывается в любой коллектив.");
		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "7 аркан - Колесница";
	}
	else if (this->A->Text == "8") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("Такой человек не подвержен эмоциям, умеет усмирять свои чувства и спокойно подходить к решению любых проблем. При принятии решений руководствуется логикой и фактами, старается быть максимально справедлив и честен, как с самим собой, так и с окружающими. Всегда соблюдает закон, не любит что-то нарушать.");
		sb->AppendLine();
		sb->AppendLine("Состояние человека «в плюсе»:");
		sb->AppendLine();
		sb->AppendLine("• Проницательность. Такой человек очень проницателен, быстро понимает истинные причины происходящего, хорошо чувствует мотивы и предвидит события. Хочет разобраться в мельчайших подробностях, всегда и всё любит «раскладывать по полочкам», и это обычно ему удаётся.");
		sb->AppendLine("• Баланс. Стремится соблюдать баланс во всём. Работать и заниматься спортом, питаться вкусно, но невредно, строить карьеру и не забывать о семье и т. д. Задача это сложная, но 8 аркан не опускает рук и терпеливо строит систему сдержек и противовесов.");
		sb->AppendLine("• Закон и совесть. Это прямой, открытый человек, беспристрастный. Всегда держит слово, соблюдает юридические и моральные законы, очень переживает, если приходится идти против совести. Очень теряется, когда не может ничего сделать законными методами.");
		sb->AppendLine("• Здравый смысл. Этот человек умеет справляться с эмоциями, здраво смотреть на всё происходящее, руководствуясь логикой. Редко нервничает, умеет сосредоточиться на деле, независим от мнения окружающих.");
		sb->AppendLine("• Поиск правильного пути. Всегда старается найти правильное решение, иногда пренебрегая более выгодными и заманчивыми вариантами. За это окружающие считают его наивным идеалистом.");
		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "8 аркан - Справделивость";
	}
	else if (this->A->Text == "9") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("Для человека с 9 энергией важно время от времени находиться в уединении. Причём, оставаясь наедине со своими мыслями, он не страдает от одиночества, скорее оно доставляет ему удовольствие. Тихий и умиротворённый, мудрый и образованный – вот качества, хорошо описывающие настоящего Отшельника. Обычно это состоявшийся человек с серьёзным жизненным опытом, который всегда берёт на себя ответственность и умеет принимать непростые решения.");
		sb->AppendLine();
		sb->AppendLine("Состояние человека «в плюсе»:");
		sb->AppendLine();
		sb->AppendLine("• Мудрость. Отшельник очень умён и внимателен, любит получать новые знания и осмысливать происходящее вокруг. В результате со временем, его жизнь наполняется глубоким смыслом и мудростью. Он умеет слушать и слышать людей, а в зрелом возрасте к нему часто обращаются окружающие, чтобы получить совет или независимую оценку своих действий.");
		sb->AppendLine("• Знания и опыт. Такой человек любит учиться и применять полученные знания на практике. При этом он, обычно выбирает какое-то одно направление и совершенствуется в нём долгие годы. В процессе он никогда не воспринимает информацию поверхностно, для него важно дойти до самой сути. Зачастую у Отшельника непростой жизненный путь, и в процессе жизни он получает массу ценного и разнообразного опыта. Одна из главных задач 9 аркана — передать накопленные знания и опыт следующим поколениям.");
		sb->AppendLine("• Уединение. Даже занимаясь повседневными делами такому человеку важно время от времени фокусироваться на своём внутреннем мире. Именно в себе самом он черпает силы для дальнейших свершений. Впрочем, это не значит, что Отшельник отстраняется от остальной жизни и готов вечно находиться в одиночестве.");
		sb->AppendLine("• Рассудительность и внимательность. Обладателя 9 аркана вполне можно назвать самым внимательным и рассудительным. Он умеет отринуть эмоции, взглянуть на ситуацию со стороны, не спеша оценить все обстоятельства и принять исчерпывающее решение. Надо сказать, что в делах он также нетороплив и основателен.");
		sb->AppendLine("• Творческий талант. Этот человек имеет ряд несомненных творческих талантов. Он прекрасный оратор, отлично владеет письменной речью, умеет сопоставлять факты и делать прогнозы. Может добиться значительного успеха в любых гуманитарных науках.");
		sb->AppendLine("• Аскетизм и духовная сила. Для Отшельника материальные достижения не играют особой роли, скорее его заинтересует духовный рост иногда общественное признание. Такой человек живёт скромно и даже аскетично, не ориентируется на моду и общественное мнение. У него есть собственные ориентиры и некий личный путь, по которому он следует в течение всей жизни.");
		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "9 аркан - Отшельник";
	}
	else if (this->A->Text == "10") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("Человек с 10 энергией крайне удачлив, любит приключения, всегда весел, не унывает и во всём надеется на судьбу. Интуитивно чувствует, что движется в верном направлении, никогда не загадывает наперёд, но неизменно надеется на положительный исход дела. Надо сказать, что обычно всё именно так и происходит, и окружающие считают его настоящим баловнем судьбы.");
		sb->AppendLine();
		sb->AppendLine("Состояние человека «в плюсе»:");
		sb->AppendLine();
		sb->AppendLine("• Удача. Все происходящие с 10 арканом события складываются весьма удачно, причём без всякого участия с его стороны. И даже если в жизни начинает происходить что-то нехорошее, через какое-то время ситуация обязательно исправляется. Рано или поздно он осуществляет все свои мечты и получает всё, что захочет.");
		sb->AppendLine("• Позитив и активность. Человек с 10 арканом очень позитивен, привык занимать активную жизненную позицию. Неизменно позитивно воспринимает жизнь, никогда не унывает и не опускает руки. Такие люди любят путешествовать, легко меняют место работы и жизни.");
		sb->AppendLine("• Цикличность. Колесо фортуны непрерывно вращается и попеременно поворачивается к вам разными сторонами, посылая испытания и даря подарки. В целом, баланс позитивный и вы в выигрыше, хотя и неприятных моментов избежать не удастся.");
		sb->AppendLine("• Доверие судьбе. Обладатель Колеса фортуны точно знает — судьбе можно доверять, а то что должно произойти, непременно произойдёт. С уверенностью проходит все испытания, а судьба, в свою очередь, не остаётся в долгу и за пройденные урокы награждает человека ещё больше.");
		sb->AppendLine("• Правильный путь. Человек с такой энергией хорошо понимает, какой цели хочет достигнуть и интуитивно чувствует верное направление. Но путь его часто бывает сложен и тернист, а значит, приходится самому «протаптывать» дорогу к успеху. Временами 10 аркан думает, что управляет своей жизнью сам, и легко может всё изменить, но на самом деле именно судьба ведёт его за руку и помогает во всём.");
		sb->AppendLine("• Благодарность. Такой человек умеет принимать подарки судьбы и всегда благодарен Вселенной за то, что у него есть. Никогда не сетует на жизнь и своё положение, даже если дела складываются не лучшим образом. Понимает, что такое карма, и знает, у человека есть определённые задачи, которые он должен выполнить в течение жизни.");
		sb->AppendLine("• Тяга к людям. Обладатель 10 аркана никогда не замыкается в себе и готов делиться своей удачей с окружающими. Он привык постоянно находиться в коллективе, любит шумные компании и весёлое времяпрепровождение.");
		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "10 аркан - Колесо фортуны";
	}
	else if (this->A->Text == "11") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("11 энергия наделяет своего владельца Силой и вместе с тем, налагает большую ответственность. У такого человека большие перспективы, он «под завязку» наполнен энергией и стремится к большим свершениям. Решителен и смел, чувствует ответственность за окружающих, всегда готов встать на их защиту. Впрочем, никогда не отказывается от земных удовольствий, поскольку находит в них дополнительный источник вдохновения. Главная задача такого человека — покорить зверя в себе, завладев его силой.");
		sb->AppendLine();
		sb->AppendLine("Состояние человека «в плюсе»:");
		sb->AppendLine();
		sb->AppendLine("• Энергия. Этот человек очень сильный, как духовно, так и физически. Он буквально переполнен энергией, что видно невооружённым взглядом. Всегда оптимистично настроен, не привык отдыхать и тем более останавливаться, не обращает внимания на проблемы и усталость. Трудолюбив, сообразителен, крайне притягателен для противоположного пола.");
		sb->AppendLine("• Защита. 11 аркан чувствует большую ответственность за тех, кто рядом, в особенности за членов семьи. На его плечи возложена обязанность защищать семью от физических и духовных невзгод. Жизненный путь защитника связан с постоянной борьбой, преодолением собственных слабостей, отказом от эгоизма.");
		sb->AppendLine("• Потенциал. Вы можете добиться серьёзных успехов практически в любой сфере. На вас можно положиться, доверить самое сложное и ответственное дело. Сила поможет полностью погрузиться в выбранное дело и достичь успеха.");
		sb->AppendLine("• Власть. В руках, наделённых силой, рано или поздно сосредоточивается и власть, но помните, что это сложный путь. За вашими решениями постоянно следят – любой промах может быть воспринят как проявление слабости. Такая жизнь воспитывает в человеке лучшие качества, делая уверенным, спокойным, способным противостоять слабостям.");
		sb->AppendLine("• Миротворец. Используя свою силу для установления равновесия, 11 аркан дарит окружающим ощущение безопасности. Всегда оставаясь на страже мира, можно укрепить и духовную силу, лежащую в основе истинного душевного просветления и проявления созидающей энергии. В результате сила раскрывается полностью, делая ваш жизненный путь осмысленным.");
		sb->AppendLine("• Наставник. Добившись успеха и набравшись опыта, вы можете стать отличным наставникам. Ученики будут относиться к вам не только как к учителю, но и как отцу. Близкие отношения с учениками даруют вам мудрость, а ответственность за них не будет восприниматься как груз – скорее, как великий дар.");
		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "11 аркан - Сила";
	}
	else if (this->A->Text == "12") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("12 аркан Повешенный");
		sb->AppendLine("Такой человек, как правило, имеет весьма непростую судьбу, наполненную испытаниями и жертвами. Он по-своему смотрит на мир, а окружающие далеко не всегда могут его понять. 12 аркан готов служить достойному делу и жертвовать второстепенным в пользу важного.");
		sb->AppendLine();
		sb->AppendLine("Состояние человека «в плюсе»:");
		sb->AppendLine();
		sb->AppendLine("• Иной взгляд на мир - уникальное мировоззрение, отличающееся от общепринятого");
		sb->AppendLine("• Сострадание - глубокое понимание чувств других людей, способность к эмпатии");
		sb->AppendLine("• Служение - готовность посвятить себя важной цели или миссии");
		sb->AppendLine("• Осознанная жертва - умение жертвовать малым ради большего");
		sb->AppendLine("• Творческое начало - развитые творческие способности и нестандартное мышление");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "12 аркан - Повешенный";
	}
	else if (this->A->Text == "13") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("13 аркан Смерть и жизнь");
		sb->AppendLine("Обладатель 13 энергии всегда готов к переменам, быстро адаптируется к любой ситуации, да и в течение жизни не раз серьёзно меняет мировоззрение. Даже своим присутствием он инициирует перемены, не привык сидеть на месте.");
		sb->AppendLine();
		sb->AppendLine("Состояние человека «в плюсе»:");
		sb->AppendLine();
		sb->AppendLine("• Перемены - легкость восприятия и инициирования изменений");
		sb->AppendLine("• Трансформация - способность к радикальным изменениям себя");
		sb->AppendLine("• Адаптация - умение приспосабливаться к любым условиям");
		sb->AppendLine("• Риск и экстрим - тяга к острым ощущениям и новому опыту");
		sb->AppendLine("• Духовное развитие - постоянная работа над собой");
		this->nameOfArcana->Text = "13 аркан - Смерть";
	}
	else if (this->A->Text == "14") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("Обладатель 14 аркана обычно спокоен и его довольно тяжело вывести из равновесия. Это самодостаточные личности, к которым тянутся окружающие, людям импонирует их невозмутимость, скромность, вежливость и способность к самоконтролю. В случае необходимости легко находит компромисс и может урегулировать любой конфликт. Хотя в душе это очень чувственный человек, с тонкой душевной организацией.");
		sb->AppendLine();
		sb->AppendLine("Состояние человека «в плюсе»:");
		sb->AppendLine();
		sb->AppendLine("• Спокойствие. Это очень спокойный, размеренный человек, его сложно вывести из равновесия, в любой сложной ситуации находит положительные моменты и не унывает. Он буквально излучает вокруг свет и тепло, окружающим всегда приятно находиться в его обществе. Часто является примером и вдохновляет других, хотя и сам может об этом не знать.");
		sb->AppendLine("• Гармония и баланс. Обладатель 14 аркана стремитесь к гармонии во всех сферах жизни. Старается равномерно развиваться во всех направлениях: соблюдает баланс духовного и материального, помнит о семье, но не забывает о карьере, живёт небогато, но и бедняком его назвать сложно. Именно в таком положении дел он находит своё счастье.");
		sb->AppendLine("• Скромность и самоконтроль. Такого человека нельзя назвать выскочкой, он всегда вежлив, ведёт себя скромно, но с непременным достоинством. Не любит выделяться из коллектива, ни словом, ни делом. Отлично контролирует свою речь, поведение и эмоции, стараются ничем не выдать свои истинные мысли.");
		sb->AppendLine("• Чувствительность. Несмотря на хороший самоконтроль, это очень чувствительные люди. У них тонкая душевная организация, они глубоко переживают всё происходящее вокруг, беспокоятся о, чувствуют ложь и лицемерие. Любят музыку, хорошие книги и фильмы. Такой человек имеет неплохие творческие задатки и вполне может реализовать себя в этом направлении.");
		sb->AppendLine("• Терпение и миролюбие. Обладатель 14 энергии не любит торопиться, очень терпелив и все конфликты предпочитает решать мирным путём. Может примирять окружающих, находя мудрые решения, которые устраивают всех. Столкнувшись со сложной проблемой, не пытается решить её в лоб, а ищет обходные пути.");
		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "14 аркан - Умеренность";
	}
	else if (this->A->Text == "15") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("Человек, связанный с 15 арканом, всю жизнь проводит в борьбе с собственными слабостями и желаниями. Зачастую это противостояние отнимает все силы, блокируя развитие талантов и душевных качеств. Окончательно приняв себя и отказываясь от борьбы, такой человек может стать рабом своих желаний и страстей, однако при полном отрицании слабостей и негативных сторон его ожидает изнурение и пустота. Поэтому для таких людей крайне важен баланс в моральном развитии – необходимо научиться принимать и любить себя в любом состоянии. Но вместе с тем постоянно работать над собой, управляя негативными проявлениями своей натуры.");
		sb->AppendLine();
		sb->AppendLine("Состояние человека «в плюсе»:");
		sb->AppendLine();
		sb->AppendLine("• Желания и страсти. Такой человек не стыдится своих желаний, принимает себя таким какой есть. Не стесняется наслаждаться жизнью, хочет получить всё, что ему причитается. Верит, что жизнь даётся лишь единожды и надо успеть воспользоваться всеми её благами. Однако умеет контролировать свои страсти и никогда не переходит черту разумного.");
		sb->AppendLine("• Независимость. В положительном ключе эта энергия дарует человеку независимость и свободу от собственных недостатков, и тяготящего душу прошлого. При этом речь идёт не о подавлении природных черт характера, а об обретении воли, умении правильно раскрывать и направлять свои побуждения и мотивы.");
		sb->AppendLine("• Решимость. Противостояние собственным минусам требует полной решимости, сомнения здесь недопустимы – они приводят к проигрышу. Когда такой человек развивается правильно, достигает идеального равновесия и не сомневается в верности принятых решений. Твёрдость в моральных принципах позволяет раскрыться в духовной сфере.");
		sb->AppendLine("• Победитель. Несколько побед над собой убеждают 15 аркан в правильности избранного пути, и он продолжает уверенно двигаться вперёд. При этом жизнь постепенно наполняется разными достижениями, моментами преодоления слабостей – всё это даёт основание для гордости, созидания, улучшения.");
		sb->AppendLine("• Мудрец и наставник. Полученный опыт дарит мудрый взгляд на вещи – этот человек не делит мир на чёрное и белое, а умеет видеть его глубину и неоднозначность. Умея принимать себя, он учит других, вкладывая в окружающих любовь к человеческой природе, способность уравновешено к ней относиться. Мудрость этого человека распространяется на все сферы жизни.");
		sb->AppendLine("• Искатель. Поиски истины и гармонии сопровождают человека постоянно, без них он теряет смысл жизни. Такие люди нередко посвящают свою жизнь науке, философии или духовным практикам.");
		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "15 аркан - Дьявол";
	}
	else if (this->A->Text == "16") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("Обладатель 16 аркана уверенный в себе, энергичный, упорядоченный и очень надёжный человек. Он твёрдо уверен в своих убеждениях, мыслит структурно и логично, всегда готов прийти на помощь ближнему. Легко перестраивается под воздействием непредвиденных обстоятельств, но может и сам быть виновником такого поворота событий. В его жизни бывало всякое, судьба никогда не оставляет его в покое и подкидывать немало испытаний и лишений.");
		sb->AppendLine();
		sb->AppendLine("Состояние человека «в плюсе»:");
		sb->AppendLine();
		sb->AppendLine("• Испытания и перемены. В жизни этого человека происходит множество важных событий, победы сменяются потерями, радость сменяют беды. Он не боится перемен и давно привык к ним, во всех невзгодах видит возможности, а не опасности. Часто сам становится причиной или инициатором серьёзных жизненных изменений.");
		sb->AppendLine("• Восстановление и структурирование. Владелец 16 аркана быстро восстанавливается после неудач как в физическом, так и в материальном плане. Благодаря логическому уму, легко структурирует и реанимирует любые процессы, может что-то строить или, наоборот, разрушать.");
		sb->AppendLine("• Твёрдость и устойчивость. Обычно это здоровый, сильный телом и духом человек с активной жизненной позицией. Он крепок духом, уверен в своих убеждениях, устойчиво переносит жизненные трудности, терпит лишения, упорно сопротивляется проблемам.");
		sb->AppendLine("• Освобождение или спасение. Это надёжный товарищ, который всегда будет рядом и непременно придёт вам на помощь. Добрым делом или мудрым советом может вывести человека из любого жизненного тупика. Члены семьи за ним чувствуют себя как за каменной стеной.");
		sb->AppendLine("• Энергия и потенциал. Внешне такой человек может выглядеть медлительным и неуклюжим, однако в этом человеке заключён огромный потенциал и неиссякаемый запас энергии. Он не привык сидеть на месте, всегда находит себе дело, и максимально он раскрывается именно в трудных ситуациях.");
		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "16 аркан - Башня";
	}
	else if (this->A->Text == "17") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("Обладатель 17 аркана идёт к своей мечте, следуя зову сердца, и пока он не сойдёт с этого пути — Вселенная будет во всём ему помогать. Этот человек всегда на позитиве, умён и харизматичен, окружающие неосознанно тянутся к нему. Рано или поздно он обретёт признание и популярность, если будет достаточно амбициозен. Причём совсем необязательно, что этот человек будет работать в сфере искусства. Это может быть талантливый врач, выдающейся учёный и т. п.");
		sb->AppendLine();
		sb->AppendLine("Состояние человека «в плюсе»:");
		sb->AppendLine();
		sb->AppendLine("• Вслед за мечтой. Обладатель 17 аркана с детства знает, кем хочет стать и чего хочет добиться. Конечно, с течением времени детская мечта может корректироваться, обретая новые формы. Важно другое — у такого человека всегда есть цель и он упорно двигается к ней. И до тех пока вы идёте по «пути мечты» — Вселенная будет вас поддерживать.");
		sb->AppendLine("• Талант и харизма. Этот человек нравится всем, он остроумен и харизматичен, умеет завоевать доверие и поддержать беседу, тонко чувствует настроение аудитории. Он, несомненно, талантлив в какой-то области, хотя и не всегда сразу открывает свой дар и довольно поздно учится его применять.");
		sb->AppendLine("• Признание и популярность. Рано или поздно такой человек достигает общественного признания и популярности, становясь «настоящей звездой». Причём сам никому ничего не доказывает, и специально не гонится за этим статусом. Признание приходит само, и 17 аркан принимает его как должное.");
		sb->AppendLine("• Вера в себя. Этот человек не сомневается в своих силах, верит в свою судьбу и талант. НА пути к мечте, его сложно смутить, обидеть или разозлить. Любые негативные эмоции разбиваются о железобетонную уверенность в своей правоте, подкреплённую немалой энергией.");
		sb->AppendLine("• Радость и позитив. Обладатель 17 энергии крайне позитивный и приятный в общении человек. Любит повеселиться, много шутит и искренне радуется по любому поводу. Он не привык думать в негативном ключе, уверен, что начатое им дело обречено на успех. Привык доверять своей интуиции, и она редко его подводит.");
	
		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "17 аркан - Звезда";
	}
	else if (this->A->Text == "18") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("Обладатель 18 аркана чуток и проницателен, и развивает своё мировосприятие через внутренние ощущения и переживания, в основном его поступками и мыслями руководит воображение. Он прекрасно чувствует настроение окружающих, имеет богатую фантазию и дар творца, причём при должном желании вполне может материализовать собственные мысли. Однако этот человек часто игнорирует подсказки Вселенной, боясь принимать самостоятельные решения. Иногда страдает от недостатка уверенности в себе, считая свои способности заурядными, а поступки ошибочными.");
		sb->AppendLine();
		sb->AppendLine("Состояние человека «в плюсе»:");
		sb->AppendLine();
		sb->AppendLine("• Воображение и творчество. Этот человек наделён богатой фантазией и даром творца, может генерировать совершенно новые идеи или значительно улучшать уже известные. Его фантазии способны развиться в любом направлении искусства – живописи, литературе, музыке. 18 аркан обладает огромным потенциалом, но часто может реализовать его лишь при постоянной и бесспорной поддержке окружающих.");
		sb->AppendLine("• Эмпатия и общение. Высокая чувствительность позволяет этому человеку хорошо понимать окружающих. Он умеет сопереживать и принимает эмоции окружающих близко к сердцу. Ценит личное пространство и уважает чувства других, старается не причинять вреда людям, не словом ни делом.");
		sb->AppendLine("• Материализация мыслей. Обладатель 18 энергии тесно связан с Луной и лунными циклами. Ночное Солнце наделяет его способностью материализовать всё задуманное в реальности. Хотя это палка о двух концах, ведь негативные мысли материализуются, точно так же как позитивные.");
		sb->AppendLine("• Внутренний мир. У этого человека богатый внутренний мир, сокрытый от окружающих, где он всегда находит убежище и черпает силы. Скорее всего, это интроверт, он разносторонне развит и весьма эрудирован, любит читать, буквально погружаясь во вселенную книги.");
		sb->AppendLine("• Интуиция и мистицизм. Тонкая душевная организация и чувствительность позволяет такому человеку предчувствовать будущие события. Нередко предсказывает грядущие беды – чувствует тревогу, необъяснимый страх, который позднее подтверждается событиями в реальности. За это окружающие считают его закоренелым пессимистом и мистиком.");
		sb->AppendLine("• Источник мудрости. Во второй половине жизни, справившись с внутренними тревогами и переживаниями, обладатель 18 аркана обретает настоящую мудрость, помогающую ему побеждать любые обстоятельства. Знания хранятся глубоко в сердце, но он щедро делится ими с окружающими, если видит, что те нуждаются в добром совете.");
		
		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "18 аркан - Луна";
	}
	else if (this->A->Text == "19") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("Обладатель 19 аркана, очень активен, крайне амбициозен, не умеет сидеть на месте и быстро добивается значительного прогресса во всех жизненных сферах. Хотя при этом он добр, с теплотой относится к окружающим, искренне любит детей и уважает родителей. Концентрируется в основном на материальной сфере жизни, редко развивается духовно.");
		sb->AppendLine();
		sb->AppendLine("Состояние человека «в плюсе»:");
		sb->AppendLine();
		sb->AppendLine("• Амбиции. Это очень решительный и амбициозный человек, он не привык размениваться на мелочи, ставит перед собой глобальные цели и верит в их достижение. Крайне требователен к себе и подчинённым, быстро двигается по карьерной лестнице. Может завести бизнес и успешно развить своё дело до высокого уровня.");
		sb->AppendLine("• Энергия. Обладатель 19 аркана очень энергичен, вынослив и трудолюбив. К любому делу относится ответственно, привык действовать решительно и активно. Не любит сидеть на месте, предпочитает делать несколько дел сразу, при этом везде успевает и со всем справляется.");
		sb->AppendLine("• Теплота. Несмотря на всю свою активность и амбиции этот человек с искренней теплотой относится к окружающим. Воспринимает мир позитивно, всегда прощает врагов и вообще редко бывает зол на кого-то. Умеет переключаться между карьерой и семьёй, очень любит детей, уважает родителей, имеет много друзей.");
		sb->AppendLine("• Прогресс. Такой человек быстро прогрессирует в любом деле. Быстро учится, впитывая массу новой информации, быстро набирается опыта и развивается. Не любит застоя в делах, отношениях и жизни в целом. Всё время двигается вперёд: заводит детей, меняет квартиры, растёт в должности, увеличивает бизнес и т. п.");
		sb->AppendLine("• Материальная реализация. Владелец 19 энергии в целом сконцентрирован на материальной сфере жизни, и духовное развитие его интересует мало. Этот человек любит зарабатывать и умеет тратить, очень хозяйственный, живёт по принципу «всё в дом». При должном подходе легко добивается любых материальных благ.");
		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "19 аркан - Солнце";
	}
	else if (this->A->Text == "20") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("Такой человек ощущает связь с родом и всем человечеством, от природы мудр и прекрасно понимает законы кармы. Готов принимать сложные решения, влияющие на судьбы множества людей, и главное, нести за них ответственность. Обладатель 20 аркана хорошо оперирует информацией, умеет обобщать, анализировать и выдвигать новые идеи. Хотя до определённого момента может никак не проявлять свои способности.");
		sb->AppendLine();
		sb->AppendLine("Состояние человека «в плюсе»:");
		sb->AppendLine();
		sb->AppendLine("• Глава семьи и рода. Этот человек чувствует связь со своим родом и во много считает себя ответственным за его развитие. Всей душой стремится укрепить связи с близкими и дальними родственниками, отыскать пропавших членов семьи, урегулировать имеющиеся разногласия. Во второй половине жизни он становится главой семьи или всего рода.");
		sb->AppendLine("• Мудрец и философ. Этот человек от рождения мудр и всегда поражает окружающих глубиной своих суждений. Умеет посмотреть на привычные вещи с неожиданного ракурса, может вдохновлять окружающих на свершения. Философски относится к жизни, спокойно принимает любые испытания и награды, посылаемые судьбой. Не боится перемен, принимает их как необходимость.");
		sb->AppendLine("• Вершитель судеб. Обладатель 20 аркана способен на большие свершения в обществе, политике и культуре. Изменения, которые предлагает этот человек, всегда приводят к успеху и влияют на судьбы многих людей. Он всегда видит направления, нуждающиеся в доработке, что позволяет ему вносить рациональные предложения и внедрять их в жизнь.");
		sb->AppendLine("• Пробудившийся. До определённого момента этот человек может находиться в состоянии «сна», когда его силы и таланты остаются неактивными. В какой-то знаковый момент он пробуждается и начинается период бурного развития. События быстро сменяют друг друга, за короткий промежуток времени человек раскрывает свои таланты и добивается успеха.");
		sb->AppendLine("• Учёный и изобретатель. Владелец 20 энергии превосходно оперирует большими объёмами информации. Способен стать автором целого научного направления, совершить революционные открытия в науке, изобретать нечто новое, что принесёт пользу не только ему, но и всему человечеству. Постоянно задумывается о новых путях и возможностях, может стать настоящим изобретателем и новатором.");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "20 аркан - Страшный суд";
		}
	else if (this->A->Text == "21") {
			System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

			sb->AppendLine("Такой человек считает весь мир своим домом, не делит людей на своих и чужих, принимает все религии, национальности и языки. Всегда принимает чужую точку зрения, не любит спорить, крайне миролюбив и уступчив. Верит в некие идеалы, искренне считает, что в его силах сделать мир действительно лучше. С энтузиазмом относится к любым современным технологиям, любит познавать мир, много путешествует и общается с незнакомыми людьми. Участвует в глобальных проектах мирового масштаба, может возглавлять группы единомышленников и увлекать всех своими идеями.");
			sb->AppendLine();
			sb->AppendLine("Состояние человека «в плюсе»:");
			sb->AppendLine();
			sb->AppendLine("• Терпимость и миролюбие. Этот человек принимает мир во всех его проявлениях, терпимо относится к любой культуре, религии и мировоззрению. Не любит спорить, предпочитая находить компромиссы, очень миролюбив, отрицает насилие в любых проявлениях. Чтит и никогда не нарушает юридические и моральные законы.");
			sb->AppendLine("• Глобальные цели. Любит ставить перед собой масштабные цели, мыслит глобально, в масштабах народа, государства или целой планеты. Охотно вступает в некоммерческие, благотворительные или научные организации, объединяющие людей из множества стран. Может увлечь людей своими идеями и стать настоящим духовным лидером.");
			sb->AppendLine("• Вера в идеалы. В целом это очень «правильный» человек, искренне верящий в свои идеалы. Он охотно принимает утопические идеи, искренне верит в людскую доброту и всё время пытается сделать наш мир лучше. Некоторые считают такого человека наивным идеалистом. Но в реальности, только такие люди могут что-то изменить на нашей планете.");
			sb->AppendLine("• Современные технологии. Этот человек легко принимает любые новые технологии и отлично оперирует массивами данных, не может жить без интернета и современных гаджетов. Из него может получиться отличный IT-специалист: программист, сетевой администратор, блогер, разработчик интерфейсов и т. п.");
			sb->AppendLine("• Познание мира. Обладатель 21 аркана любит познавать мир: много путешествует, изучает обычаи и культуру разных стран, учит иностранные языки. Он хочет постоянно расширять свои границы, часто бывает на природе, любит животных. При некотором стечении обстоятельств может переехать в другую страну или вовсе, непрерывно менять место жительства.");

			this->nameOfArcana->Text = "21 аркан - Мир";
			this->description->Text = sb->ToString();
	}
	else if (this->A->Text == "22") {
			System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
			sb->AppendLine("22 аркан выпадает позитивному человеку, который любит жизнь, однако склонен совершать импульсивные и необдуманные поступки. Тем не менее он легко идёт по жизни, черпая из неё вдохновение, всегда открыт новому. Считает, что свобода должна быть во всём: свобода выбора, мысли, слова, свобода прожить эту жизнь так, как хочется. Он принимает мир безусловно, таким, какой он есть. Обычно не протестует против чего-то, ни за что не борется. В нём прекрасно уживаются две составляющие: отсутствие желания быть взрослым, а вместе с тем мудрость и житейский опыт.");
			sb->AppendLine();
			sb->AppendLine("Состояние человека «в плюсе»:");
			sb->AppendLine();
			sb->AppendLine("• Истинная свобода. Отсутствие рамок и границ, освобождают такого человека от условностей, он совершенно не зависит от общественного мнения, наслаждается жизнью в своё удовольствие. Искренне верит, что «было хорошо, а будет ещё лучше».");
			sb->AppendLine("• Оптимизм. В большинстве случаев, это порядочный человек, в котором бурлит энергия. Он полон неиссякаемого оптимизма, идеи всегда неординарны, хотя внешне и не приводит соответствующего впечатления.");
			sb->AppendLine("• Талант. 22 энергия наделяет своего владельца талантом в какой-то сфере. Причём проявляться талант может далеко не сразу и быть совершенно не связан с искусством или артистизмом. Есть скрытые способности к оккультным наукам.");
			sb->AppendLine("• Интуиция. Такой человек хотя и не обладает глубокими познаниями в жизни, на уровне интуиции, разбирается в её законах и принципах.");
			sb->AppendLine("• Удача. Людей с этой энергией, можно назвать любимцами Фортуны. Они редко поддаются унынию, а если не получается справиться с проблемой, они, недолго думая, найдут, как её обойти.");
			this->nameOfArcana->Text = "22 аркан - Шут";
			this->description->Text = sb->ToString();
	}
}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->D->Text == "1") {
			System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
			sb->AppendLine("Маг наделён немалой силой, он достаточно амбициозен, ему дано немало возможностей. При правильном подходе он может реализовать себя практически в любой области. Основная задача такого человека — суметь воспользоваться всем, что дарует ему Вселенная.");
			sb->AppendLine();
			sb->AppendLine("Важно проработать в текущем воплощении:");
			sb->AppendLine();
			sb->AppendLine("• Возможности и ресурсы. У вас есть всё, чтобы достичь внушительного успеха в жизни. Всё, что вам нужно сделать: поверить в свои силы и грамотно использовать возможности и ресурсы, которые будут в вашем распоряжении. Действуйте уверенно и смело, не стоит бояться ошибок, вы с честью можете выйти из любой ситуации.");
			sb->AppendLine("• Перемены и свершения. Смело меняйте свою жизнь, не бойтесь ничего нового. Помните, что любые свершения вам по плечу. Первый аркан наделён мощной созидательной энергией, которая поможет вам менять окружающий мир по своему желанию.");
			sb->AppendLine("• Активность и инициатива. Единственно верная стратегия, которой вы должны придерживаться — быть максимально активным и инициативным. Пассивная позиция, ожидание лучшей возможности совершенно вам не подходят.");
			sb->AppendLine("• Поиск таланта. У первого аркана много скрытых талантов, которые придётся отыскать и развить. Вы обязаны найти истинное призвание, всё время пробуйте себя в разных направлениях.");
			sb->AppendLine("• Руководство и обучение. Рано или поздно, вам придётся руководить людьми. Неважно сколько их будет, смело принимайте бразды правления и ведите коллектив к цели. Учите всех, кого сможете, поднимайте их до своего уровня и делитесь накопленным опытом.");

			this->description->Text = sb->ToString();
			this->nameOfArcana->Text = "1 аркан - Маг";
}
		else if (this->D->Text == "2") {
			System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
			sb->AppendLine("2 аркан призывает вас жить осознанно, быть мудрее, стараться понимать окружающих, доверять своей интуиции, разбираться в глубоких смыслах и мотивах происходящего. Непременно проанализируйте жизненный опыт предков, поразмыслите о своей жизни. Ваша высшая проработка — познать себя, понять что корень всего происходящего не снаружи, а внутри вас.");
			sb->AppendLine();
			sb->AppendLine("Важно проработать в текущем воплощении:");
			sb->AppendLine();
			sb->AppendLine("• Мудрость и духовное развитие. В нынешнем воплощении вы должны заняться духовным саморазвитием, стать мудрее, научиться понимать окружающих и, конечно, самого себя. Наполните свой внутренний мир разнообразным духовным опытом, который поможет развить интуицию.");
			sb->AppendLine("• Поиск тайных знаний. В действительности вы уже обладаете всеми необходимыми знаниями, но они скрыты внутри вас. Раскройте тайну, познайте себя, раскрывайтесь слой за слоем, и научитесь видеть истину внутри себя.");
			sb->AppendLine("• Откровения и знаки. Попробуйте доверять своей интуиции и знакам, которые посылает вам Вселенная. Старайтесь рассматривать любую ситуацию под разными углами, это позволит найти наилучшее, и, скорее всего, неожиданное, решение.");
			sb->AppendLine("• Принятие женского начала. Женщинам со 2 энергией нужно принять своё женское начало, принять своё место в социуме и роль в семье. Мужчинам необходимо понять и принять женское начало в супруге, матери, сестре, наладить с ними духовный и физический контакт.");
			sb->AppendLine("• Духовное наставничество. Со временем человек 2 аркана набирается духовного опыта, познаёт себя и открывается Вселенной. Как правило, это происходит во второй половине жизни. С этого момента он должен найти последователей и стать духовным наставником.");

			this->description->Text = sb->ToString();
			this->nameOfArcana->Text = "2 аркан - Верховная жрица";
		}
		else if (this->D->Text == "3") {
			System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
			sb->AppendLine("3 аркан говорит прежде всего о принятии женского начала, материальных благах, изобилии, заботе, авторитете и власти. Такой человек всю жизнь стремится к комфорту и готов много поставить на кон, только чтобы семья ни в чём не нуждалась. Энергия Императрицы даёт своему владельцу тягу к власти и предоставляет все возможности для занятия лидирующих позиций.");
			sb->AppendLine();
			sb->AppendLine("Важно проработать в текущем воплощении:");
			sb->AppendLine();
			sb->AppendLine("• Дом и семья. Для 3 аркана важно обрести семейное счастье и наладить взаимоотношение с членами семьи. Станьте примером для окружающих, реализуйте себя как верная жена и отличная хозяйка. Заботьтесь о близких без лишнего контроля и давления, и семейное счастье не заставит долго ждать.");
			sb->AppendLine("• Роскошь и комфорт. Если вы уже наладили своё материальное положение, значит, уже настало время учиться роскошной жизни и комфорту. С умом тратьте деньги, помните, что вы достойны только самого лучшего. Не разменивайтесь на мелочи и дешёвые вещи.");
			sb->AppendLine("• Забота и наставничество. Для вас важно проявлять заботу об окружающих и оказывать покровительство достойным. Достигнув определённых вершин, делитесь ресурсами и влиянием с окружающими, помогать им и будьте наставником.");
			sb->AppendLine("• Авторитет и статус. Для людей с 3 энергией важно рано или поздно занять лидирующую позицию, стать авторитетным и уважаемым человеком. Вы вполне можете иметь своё дело или занять руководящую должность, работая по найму.");
			sb->AppendLine("• Доверие окружающим, любовь к природе. Для Императрицы важно быть в балансе с людьми и природой. Как правило, из-за осторожности и недоверия такие люди не могут довериться никому. Попробуйте поручить кому-то часть домашних и рабочих дел — вам сразу станет легче. А вам нужно больше гулять и путешествовать — взаимодействие с природой улучшит вашу энергетику.");
			sb->AppendLine("• Властность и надменность. Эти качества могут стать причиной многих неудач. Зачастую вы никого не слышите, и существует лишь одно единственно правильное мнение — это ваше. Достигнув определённых высот и материального успеха, вы смотрите на всех свысока, и это не делает ваш авторитет прочным. Задумайтесь над этим.");

			this->description->Text = sb->ToString();
			this->nameOfArcana->Text = "3 аркан - Императрица";
		}
		else if (this->D->Text == "4") {
			System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
			sb->AppendLine("Считается, будто 4 аркан неразрывно связан с архетипом Отца, что накладывает определённый отпечаток на владельца. Такой человек облечён властью, требует от окружающих подчинения, имеет весомый авторитет. Природная мужественность, упорядоченность и стремление достичь цели — всё это есть в характере людей с 4 энергией. Император всегда начеку, готов к тому, чтобы встать на защиту интересов, как своих, так и тех, кто находится под его покровительством.");
			sb->AppendLine();
			sb->AppendLine("Важно проработать в текущем воплощении:");
			sb->AppendLine();
			sb->AppendLine("• Агрессивное подчинение. Люди с 4 энергией обладают огромной силой, противостоять их воле крайне сложно. Однако, если кто-то пытается противиться их воле — Император становится крайне агрессивным. В ход может идти как физическое, так и моральное давление.");
			sb->AppendLine("• Прозорливость и слепота. Говоря о нравственных аспектах 4 аркана, стоит отметить, что они двояко смотрят на мир. С одной стороны, они прекрасно видят ситуацию и результаты своего «правления». С другой стороны, они слепы, не хотят замечать совершённых ошибок, не воспринимают мнение менее авторитетных людей.");
			sb->AppendLine("• Чёрствость. Возвращаясь с работы, в семью, такой человек должен научиться проявлять эмоции, любить и принимать любовь. Особенно важно проработать этот момент женщинам, если вы возьмёте на себя роль мужчины, то вряд ли будете счастливы.");
			sb->AppendLine("• Следование правилам. Человеку с 4 энергией необходимо придерживаться установленных правил, соблюдать юридические и моральные законы. Чтобы наладить стабильную жизнь, придётся стать бесстрастным и даже в какой-то мере безжалостным. Это избавит Императора от неверных поступков и унижающей жалости.");

			this->description->Text = sb->ToString();
			this->nameOfArcana->Text = "4 аркан - Император";
		}
		else if (this->D->Text == "5") {
			System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

			sb->AppendLine("5 аркан прежде всего говорит о постоянном развитии и обучении, поисках своего предназначения и истины в некоем узком направлении. Такой человек свято чтит все традиции, его мало интересуют материальные блага, а его истинный интерес — проповедовать своё учение всем желающим. Во второй половине жизни ему суждено стать большим авторитетом, у которого не стыдно спросить совета.");
			sb->AppendLine();
			sb->AppendLine("Важно проработать в текущем воплощении:");
			sb->AppendLine();
			sb->AppendLine("• Вера и знания. Этот аркан символизирует постоянное обучение и принятие некой информации. Однако простого накопления знаний мало, 5 энергия требует, чтобы вы верили в то, что изучаете, и проповедуете.");
			sb->AppendLine("• Правила и церемонии. Пятый аркан должен всегда играть по правилам, соблюдая общепринятые нормы и божьи законы. Иерофант символизирует совесть, честности и внутренний свет, который есть у каждого. Если такой человек вздумает нарушить любое из принятых правил — жизнь тут же определит наказание.");
			sb->AppendLine("• Семейные ценности. Одна из задач, требующих проработки 5 энергии — это налаживание крепких семейных связей и традиций. Благодаря ораторским способностям и авторитету, это станет не слишком сложной задачей.");
			sb->AppendLine("• Завышенная самооценка. Никогда не ставьте себя выше других, даже если знаете намного больше. Будьте терпеливы по отношению к детям. Не вешайте ярлыков и никогда не навязывайте личную точку зрения.");
			sb->AppendLine("• Кругозор. Не замыкайтесь в той сфере, которую вы выбрали. Больше путешествуйте, читайте беллетристику, займитесь духовными практиками. Время от времени пересматривайте свои взгляды на незыблемые ранее постулаты.");
			sb->AppendLine("• Собственное мировоззрение. По мере взросления такой человек копит не только знания, но и мудрость. Рано или поздно в душе 5 аркана складывается некое мировоззрение, которое он должен транслировать окружающим. А вот будет это учение плохим или хорошим, зависит только от вас.");

			this->description->Text = sb->ToString();
			this->nameOfArcana->Text = "5 аркан - Иерофант";
		}
		else if (this->D->Text == "6") {
			System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
			sb->AppendLine("6 аркан, прежде всего, говорит о поиске гармонии с самим собой и внешним миром. Главная задача воплощения обрести любовь во всех проявлениях: к самому себе, друзьям, врагам и всей вселенной. Такой человек, обычно максималист, не приемлет полумер, если любовь, то до гроба, если обида, то на всю жизнь. Они очень эмоциональны и тонко чувствуют окружающих, любят ощущение праздника, а во второй половине жизни вполне могут достичь выдающихся успехов в творчестве.");
			sb->AppendLine();
			sb->AppendLine("Важно проработать в текущем воплощении:");
			sb->AppendLine();
			sb->AppendLine("• Любовь к себе и миру. Вы крайне требовательны к себе и к окружающим. Прежде всего постарайтесь наладить отношения с самим собой, не ругайте и не обвиняйте себя за сделанные ошибки. Отыщите своё «внутреннее я» и подружитесь с ним. Так, вы перестанете бояться одиночества и вам, наконец, станет комфортно наедине с собой.");
			sb->AppendLine("• Эмоции и выбор. Захлёстывающие разум эмоции мешают вам принимать взвешенные, логичные решения и совершать верный выбор. А последствия такого выбора зачастую бывают необратимы. Будьте мудрее: не идите на поводу у эмоций, но слушайте одновременно сердце и разум. Не впадайте в крайние состояния эйфории и депрессии.");
			sb->AppendLine("• Идеализация чувств. Меряя всех своей меркой, вы идеализируете любовь окружающих. Не торопитесь бросаться в омут страсти, приглядитесь к возлюбленному. Тот ли это человек, который сделает вас счастливым? Старайтесь быть менее навязчивым, не душите партнёра своей заботой и вниманием. Если поняли, что отношения себя изжили — смело расставайтесь.");
			sb->AppendLine("• Перфекционизм. Ваше стремление к идеалу похвально, но всему есть предел. Идеал недостижим, изюминка каждого произведения искусства в его несовершенстве. Стоит научиться наслаждаться тем, что уже имеете, а не страдать о том, чего нельзя достичь.");
			sb->AppendLine("• Творчество. Вы обладаете серьёзным творческим потенциалом. Старайтесь реализовывать свои творческие идеи. Приобретайте новые навыки, пробуйте себя в разных профессиях и направлениях. У вас есть дар к перевоплощению, вы умеете держать внимание публики. Возможно, однажды это станет делом всей вашей жизни.");
			sb->AppendLine("• Финансы. Вы склонны легкомысленно относится к деньгам и материальной сфере жизни в целом. Но без достойного уровня заработка крайне сложно достичь хорошего уровня комфорта. Да и все прекрасные вещи, которые вы так любите, они тоже стоят денег. Вам необходимо научится планировать свои траты или доверить свои финансовые дела человеку более компетентному и менее эмоциональному.");

			this->description->Text = sb->ToString();
			this->nameOfArcana->Text = "6 аркан - Влюблённые";
		}
		else if (this->D->Text == "7") {
			System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
;
			sb->AppendLine("Традиционно 7 энергия символизирует стремительно развивающиеся события, самодисциплину, контроль надо обстоятельствами и достижение поставленных целей. Такой человек должен быть решителен и смел, вместе с тем, ему нужно научиться планировать свою жизнь, отказавшись от лишних эмоций. Кроме того, стоит следить за своим здоровьем, заниматься спортом и вовремя отдыхать.");
			sb->AppendLine();
			sb->AppendLine("Важно проработать в текущем воплощении:");
			sb->AppendLine();
			sb->AppendLine("• Движение и застой. Ваша жизнь должна быть полна перемен, непрерывного движения и развития. Остановки недопустимы, вы не имеете права отставать от обстоятельств, следите за дорогой, смелее принимайте решения. Вместе с этим не спешите и не принимайте необдуманных решений.");
			sb->AppendLine("• Победы и поражения. Вам критически важно регулярно одерживать видимые и значимые победы. Попробуйте заняться спортом и участвовать в соревнованиях. Одновременно учитесь спокойно переносить поражения, воспринимая их не как наказание, а как ценный жизненный урок.");
			sb->AppendLine("• Трансформация. Одна из главных побед, которые вы должны одержать — победа над собой. В духовном смысле Колесница символизирует путешествие вглубь своей души, духовное развитие, трансформацию, переходи из одного состояния в другое.");
			sb->AppendLine("• Контроль. Только жёсткая дисциплина, контроль над эмоциями и обстановкой помогут вам справиться с энергией 7 аркана. Будьте сильнее физически и духовно — не давайте себе слабины, без этого достичь желанной победы не удастся.");
			sb->AppendLine("• Могущество. Вы обладаете достаточным могуществом, чтобы подчинить себе обстоятельства и обрести сторонников. С умом распоряжайтесь данными вам силами, не будьте излишне агрессивным. Никогда не гордитесь своими достижениями сверх меры, принимайте разумные советы.");

			this->description->Text = sb->ToString();
			this->nameOfArcana->Text = "7 аркан - Колесница";
		}
		else if (this->D->Text == "8") {
			System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
			sb->AppendLine("Восьмой аркан, как искусный канатоходец, должен осознать все законы, которые влияют на его положение, а затем найти баланс и удержать равновесие. Каждый шаг, каждое решение может как привести к краху так и приблизить к желаемой цели. Действуйте так, как подсказывает вам совесть, не идите на сделки с законом, а главное — найдите свой путь. Каждый ваш шаг должен быть выверен, а вот от пустых эмоций, наоборот, придётся отказаться.");
			sb->AppendLine();
			sb->AppendLine("Важно проработать в текущем воплощении:");
			sb->AppendLine();
			sb->AppendLine("• Закон и мораль. Соблюдайте все правила и нормы, с которыми вы знакомы, учтите, что любое нарушение будет иметь последствия. Главным подсказчиком в этом вопросе будет совесть — делайте всё, как она подсказывает.");
			sb->AppendLine("• Уверенность в своём пути. Найдите «свой путь», сформулируйте цель жизни, определите приоритеты и выработайте собственный «кодекс поведения». Чем больше будете думать, что мир несправедлив, тем больше будете в этом убеждаться на своём примере. Примите мир и своё место в нём, осознайте законы кармы и высшей справедливости.");
			sb->AppendLine("• Поиск баланса. Необходимо всё время помнить, что сила действия равна, силе противодействия. Если вы придерживаетесь только одной стороны, то Вселенная найдёт способ познакомить вас с противоположной. И этот урок будет повторяться, пока вы его полностью не усвоите. Помните, всё, что мы несём миру, он в ответ, несёт вам.");
			sb->AppendLine("• Справедливость. От ваших слов и поступков зависит будущее, каждое слово может пошатнуть баланс на чаше весов Справедливости. Нужно хорошо понимать границы, за которые не стоит, не только выходить, но даже смотреть.");
			sb->AppendLine("• Проницательность. Старайтесь осознать весь получаемый вами опыт. Внимательно наблюдайте за людьми, анализируйте их слова и поступки. Именно проницательность позволит вам найти единственно правильный путь меж Сциллой и Харибдой.");
			sb->AppendLine("• Самообладание. Вы не должны слепо поддаваться эмоциям, предаваться страстям, безрассудно пускаться в авантюры. Без холодного и ума и здравомыслия вы можете наделать глупостей, за которые потом придётся долго расплачиваться. Меньше спорьте, не проявляйте агрессии, не стремитесь наказать кого-то за сделанные ошибки — вам не дано такого права.");

			this->description->Text = sb->ToString();
			this->nameOfArcana->Text = "8 аркан - Справделивость";
		}
		else if (this->D->Text == "9") {
			System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
			sb->AppendLine("9 энергия Отшельника говорит о постоянном духовном развитии, истинной мудрости и накоплении жизненного опыта. Девятый аркан на протяжении всей жизни должен познавать Вселенную и делиться этим знанием с окружающими. Его не интересует суета материального мира он стремиться обрести как можно больше знаний, черпая силы в процессе уединения.");
			sb->AppendLine();
			sb->AppendLine("Важно проработать в текущем воплощении:");
			sb->AppendLine();
			sb->AppendLine("• Познание сути. Чем бы вы ни занимались, чтобы не изучали — стремитесь во всём докопаться до самой сути. Неважно, работаете вы или учитесь — занимайтесь этим с полной отдачей, тогда все ваши действия будут приносить максимальную отдачу и глубокое внутреннее удовлетворение.");
			sb->AppendLine("• Сила внутри. Главный источник сил для вас — вы сами. Чаще бывайте наедине с собой, анализируйте пройденный жизненный путь, переосмысливайте полученные знания. Однако не нужно замыкаться в одиночестве, близкие нуждаются в вашей помощи и мудром совете.");
			sb->AppendLine("• Путь становления. Отшельнику очень важно пройти путь духовного становления. Жизнь будет бросать вас в разные ситуации, возможно, ваш путь будет труден и полон лишений. Однако только так вы сможете стать самим собой, понять Вселенную и обрести мудрость.");
			sb->AppendLine("• Помощь окружающим. Накопив достаточно опыта и знаний, в какой-то момент вы должны начать делиться тем, что добыли. Найдите людей, которым может пригодиться наставник, учите их всему, что знаете и не требуйте взамен слишком много.");
			sb->AppendLine("• Доверие миру и людям. Учитесь доверять всему миру и людям, которые встретятся на вашем жизненном пути. Возможно, жизнь много раз била вас за излишнюю доверчивость, но опускать руки и считать всех вокруг недостойными вашей мудрости нельзя.");
			sb->AppendLine("• Материальный мир. В течение жизни вы станете гораздо сильнее духовно и большую часть сил бросите именно в этом направлении. Однако вам нельзя забывать и о материальном мире. Не становитесь аскетом, отрицающим любые материальные блага. Помните, что вы не один в этом мире, а у вашей семьи масса материальных потребностей.");

			this->description->Text = sb->ToString();
		}
		else if (this->D->Text == "10") {
			System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

			sb->AppendLine("10 аркан Колесо фортуны");
			sb->AppendLine("10 аркан, прежде всего, говорит, что вам благоволит удача. Судьба ведёт по некому пути, и вы должны пройти по нему невзирая ни на какие обстоятельства. Колесо фортуны привносит в вашу жизнь определённую цикличность, и его вам не остановить. Периодически жизнь будет испытывать вас на прочность, а потом наоборот заваливать подарками. Это не значит, будто изменить судьбу невозможно, напротив, делайте всё необходимое и помните, что удача любит деятельных.");
			sb->AppendLine();
			sb->AppendLine("Важно проработать в текущем воплощении:");
			sb->AppendLine();
			sb->AppendLine("• Доверие Вселенной. Доверяйте тому пути, который уготовила вам жизнь. Помните, удача на вашей стороне, что бы ни происходило вокруг, верьте в лучшее, никогда не жалуйтесь на судьбу, с благодарностью принимайте всё, что у вас уже есть.");
			sb->AppendLine("• Сопротивление Колесу Фортуны. Вы можете не идти на поводу у судьбы и обстоятельств и до конца стоять на своём. Это может принести вам опыт и даже доход, но какой ценой вы это получите? Колесо фортуны станет вращаться медленнее и ваша жизнь станет подобна болоту.");
			sb->AppendLine("• Активное участие. То, что вам благоволит Вселенная, не значит, будто можно занять пассивную позицию и ждать, когда счастье свалится к вам в руки. Всеми силами стремитесь развить успех и добиться лучшего положения дел.");
			sb->AppendLine("• Готовность к переменам. Энергия 10 аркана может легко внести коррективы в ваши планы, не забывайте про это, тогда будет проще подстроиться. Колесо фортуны весьма циклично, и будет посылать вам попеременно то испытания, то награды.");
			sb->AppendLine("• Предупреждения. Довольно часто судьба будет посылать вам предупреждающие знаки о грядущей опасности. Вам нужно научиться доверять своей интуиции и вовремя распознавать их. А главное — решительно действовать, чтобы предотвратить беду.");

			this->description->Text = sb->ToString();
			this->nameOfArcana->Text = "10 аркан - Колесо фортуны";
		}
		else if (this->D->Text == "11") {
			System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

			sb->AppendLine("11 аркан Сила");
			sb->AppendLine("Обладателя 11 энергии, переполняет энергия, которая может быть направлена в любое русло. Она может побудить владельца отдавать все силы только удовольствиям и развлечениям, либо развить в ней самоотверженность, целеустремлённость. Выбрав правильный путь, человек сможет подчинить дарованную силу своему разуму, отступив от влияния инстинктов и плотских слабостей. Эта задача требует ежедневной работы над собой, однако её успешное выполнение ведёт к обретению жизненного смысла и счастья.");
			sb->AppendLine();
			sb->AppendLine("Важно проработать в текущем воплощении:");
			sb->AppendLine();
			sb->AppendLine("• Принятие себя и духовный рост. Осознавая, что каждая личность имеет как светлую, так и тёмную сторону, не следует корить себя за ошибки или проявления слабостей. Приняв себя вместе со всеми недостатками, можно быстрее найти путь для борьбы с внутренней тьмой, примириться с ней и научиться обращать её во благо. Это создаёт положительный фон, позволит избежать накопления негатива, направленного против себя.");
			sb->AppendLine("• Дисциплина. Сила, изначально наполняющая тело, должна постоянно восстанавливаться и восполняться. Это возможно только через строгое отношение к себе – соблюдение порядка как в повседневной жизни, так и в духовном становлении. Не следует идти на поводу у желания отойти от режима, подчиниться хаосу в чувствах и делах – важно постоянно воспитывать в себе лучшие качества.");
			sb->AppendLine("• Забота о здоровье. Поддерживая тело в хорошем состоянии, человек проявляет уважение к дару высших сил. Однако забота о здоровье включает и поддержку моральных сил – проработку психологических травм, стремление к душевному равновесию. Баланс между здоровым телом и духом позволит добиться полной гармонии, продлит время благополучия и состоятельности.");
			sb->AppendLine("• Самообладание и доброта. В минуты гнева человек, обладающий большой силой, может совершить ошибку – повести себя агрессивно, дать волю разрушительной энергии. Поэтому крайне важно управлять своими эмоциями, уметь держать себя в руках. Полезно помнить, что большая сила, выйдя из-под контроля, может разрушить сразу несколько судеб и нанести большой вред окружающим.");
			sb->AppendLine("• Отношения. Энергия, заключённая в разуме и теле, должна находить выход. Общение с людьми, постоянный контакт с обществом – лучший путь для реализации этого потенциала. Природная доброта позволяет этому человеку поддерживать хорошие отношения с друзьями.");

			this->description->Text = sb->ToString();
			this->nameOfArcana->Text = "11 аркан - Сила";
		}
		else if (this->D->Text == "12") {
			System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

			sb->AppendLine("12 аркан прежде всего говорит о необходимости найти собственное предназначение, дело жизни или духовное служение. Вы должны научиться прощению, сочувствовать попавшим в беду и помогать им от чистого сердца. Будьте готовы пожертвовать малым, чтобы получить нечто важное.");
			sb->AppendLine();
			sb->AppendLine("Важно проработать в текущем воплощении:");
			sb->AppendLine();
			sb->AppendLine("• Собственное мировоззрение. У вас уникальный взгляд на мир, который заметно отличается от принятого в обществе. Не стесняйтесь его и не пытайтесь переделать самого себя. Будьте уверены в себе, придёт время и окружающие убедятся в вашей правоте.");
			sb->AppendLine("• Поиск предназначения. После того как вы сформируете собственную картину мира, постарайтесь найти то дело, ради которого вы пришли в мир. Это должно быть что-то действительно значимое. Здесь главное — не ошибиться и найти то направление, которому вы будете служить всю жизнь.");
			sb->AppendLine("• Добровольная и сознательная жертва. Учтите, что ничего в этой жизни не достанется вам просто так. Любое значимое достижение потребует от вас некой жертвы. Относитесь к этому, как к обмену, жертвую малым, вы получаете нечто важное. Следите за тем, чтобы все ваши жертвы были осознанными, а вы чётко понимали условия такого обмена.");
			sb->AppendLine("• Прощение и сочувствие. Вы отлично умеете слушать и слышать, прекрасно понимаете проблемы окружающих, а главное — умеете облегчить их страдания. Преисполнитесь сострадания и сочувствия, помогайте тем, кто в этом нуждается без всякого корыстного интереса. Прощайте всех, кто вас обидел, никогда не мстите, по возможности занимайтесь благотворительностью.");
			sb->AppendLine("• Заниженная самооценка. Помните, что вы достойны любви не менее чем остальные люди. Не отдавайте всего себя в погоне за общественным одобрением. Смело завершайте изжившие себя отношения, не допускайте, чтобы вам садились на шею. Радуйтесь жизни, не забывайте отдыхать и путешествовать.");

			this->description->Text = sb->ToString();
			this->nameOfArcana->Text = "12 аркан - Маг";
		}
		else if (this->D->Text == "13") {
			System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
			sb->AppendLine("13 аркан прежде всего символизирует некие жизненные перемены, духовную трансформацию и адаптацию к новым условиям. Обладателю этого аркана предстоит меняться всю жизнь, постоянно приспосабливаться самому и помогать в этом другим. В итоге всё сложится благоприятно, хотя и придётся бороться с обстоятельствами вокруг и страхами в себе. Помните, вы можете изменить, то что не удавалось никому до вас.");
			sb->AppendLine();
			sb->AppendLine("Важно проработать в текущем воплощении:");
			sb->AppendLine();
			sb->AppendLine("• Сопротивление переменам. Поступая таким образом, человек лишь усложняет ситуацию, попадая в замкнутый круг, где каждый новый оборот приносит всё больше боли и страданий. Противясь новому, вы не даёте себе возможности подготовиться к переменам и встретить их во всеоружии.");
			sb->AppendLine("• Страх будущего. Изменить привычный образ жизни, завершить неудачные отношения, уйти с нелюбимой работы бывает сложно из-за страха будущего. Вернее, страха того, что ситуация станет ещё хуже. И вот вы начинаете искать оправдания, чтобы остаться на месте. Нужно проработать страх и решительно действовать.");
			sb->AppendLine("• Оковы прошлого. Не живите прошлым, потому что оно давно ушло, есть только здесь и сейчас. Живите полной жизнью, отпустите мысли о том, как могло бы быть и о том, чего не случится никогда. Снимайте слой за слоем всё инородное, вредное и лишнее. Избавьтесь от всего, что вам не подходит. Определите, что для вас важно, а что второстепенно.");
			sb->AppendLine("• Завершённость. Всегда завершайте начатое, отдавайте долги и ставьте точку. Не бросайте, не обрывайте, не уходите беззвучно, оставляя многоточие, а ставьте чёткую точку.");
			sb->AppendLine("• Духовное смятение. Желание изменить жизнь и одновременно страх перемен привносят в душу смятение и разлад. И двигаться вперёд страшно, и оставить всё как есть невозможно. Возможно, изменения происходят, но мучительно медленно, а вы уже устали ждать и перестали надеяться.");
			sb->AppendLine("• Жизнь в смерти. Вас тяготит страх перемен, расставания, болезни, смерти. 13 аркан учит тому, что смерть — это лишь начало. Пройдя через испытания и страдания, человек обретёт своё истинное «я», изменится и возродится к новой жизни. Преодолевая череду таких метаморфоз, дух человека становится только крепче.");

			this->description->Text = sb->ToString();
			this->nameOfArcana->Text = "13 аркан - Смерть";
		}
		else if (this->D->Text == "14") {
			System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

			sb->AppendLine("14 аркан прежде всего говорит о спокойствии, скромности и самоконтроле. Такому человеку нужно быть терпеливым и миролюбивым, действовать размеренно и предусмотрительно. Соответственно, требуется проработать агрессию, бесчувственность и уход от внешних проблем. В результате вы должны обрести баланс во всех сферах жизни и прийти к гармонии.");
			sb->AppendLine();
			sb->AppendLine("Важно проработать в текущем воплощении:");
			sb->AppendLine();
			sb->AppendLine("• Отсутствие баланса в основных сферах жизни. Это главная проработка вашего нынешнего воплощения. Проанализируйте свою жизнь и подумайте, в каких сферах вы отстаёте, а в каких, наоборот, прикладываете слишком много усилий. Начните с семьи, карьеры, отношений, образования, здоровья и отдыха.");
			sb->AppendLine("• Материальное и духовное. Обладатель 14 аркана должен одновременно развиваться как в материальном, так и в духовном плане. Не отдавая предпочтения одному из них, осознайте связь между телом и душой.");
			sb->AppendLine("• Самоконтроль и скромность. В момент принятия решений не поддавайтесь чувствам, будьте эмоционально сдержаны. Следите за тем, кому и что говорите, при любых обстоятельствах будьте вежливы. Будьте скромны во всём, не кичитесь богатством или хорошим образованием.");
			sb->AppendLine("• Умеренные эмоции. Сдержанность не означает то, что вы должны полностью подавить в себе чувства. Как минимум в семье вы должны быть полностью открыты. Не замыкайтесь в себе и своих переживаниях — делитесь проблемами с близкими, вам непременно станет легче.");
			sb->AppendLine("• Образование и практика. Продолжайте учиться всю жизнь, однако не забывайте применять полученные знания на практике. Не становитесь «вечным студентом», но и не становитесь «шестерёнкой» в некоем большом и чуждом вам процессе.");
			sb->AppendLine("• Искусство и досуг. Настоящей отдушиной для вас может стать интересное хобби. В принципе это может быть что угодно, однако лучше всего, если вы найдёте себе некое творческое увлечение. Больше читайте, ходите в театр, слушайте любимую музыку.");

			this->description->Text = sb->ToString();
			this->nameOfArcana->Text = "14 аркан - Умеренность";
		}
		else if (this->D->Text == "15") {
			System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

			sb->AppendLine("15 аркан");
			sb->AppendLine("Основная задача человека, с 15 энергией, заключается в поиске подходящего образа жизни, в котором его слабости смогут обрести своё место, но не поработят, а станут поддерживать. Этот опыт будет ценен не только для самого человека, но и для тех, кто сталкивается с похожими трудностями – не может принять себя, стыдится своих желаний или считает их неправильными и низменными. Если же не работать над собой, то тайные желания, пороки и стремление к полной независимости — постепенно возьмут верх и начнут руководить жизнью, делая её всё более разрушительной и опасной.");
			sb->AppendLine();
			sb->AppendLine("Важно проработать в текущем воплощении:");
			sb->AppendLine();
			sb->AppendLine("• Оправдание для страстей и желаний. Сдаваясь под натиском своих желаний, человек склонен оправдывать это решение, находя для каждого поступка свои объяснения. На самом же деле для моментов, когда вы уступаете искушению и идёте на поводу у слабостей, нет достойного оправдания. Следует относиться к ним правильно и стараться не вести себя так.");
			sb->AppendLine("• Нерешительность. Борясь с внутренними соблазнами, следует вести себя как можно более решительно, не позволяя сомнениям лишить вас настроя. Робость и колебания могут привести к тому, что даже достигнутые цели утратят для вас привлекательность и ценность.");
			sb->AppendLine("• Влияние негативных эмоций. Когда такой человек сосредоточивается на своих обидах, плохих воспоминаниях и разбитых надеждах, они начинают управлять его жизнью. Ваша задача – обращать как можно меньше внимания на негатив и размышлять о полезном, чистом, положительном.");
			sb->AppendLine("• Выбор простого пути. Двигаясь путём наименьшего сопротивления, человек отказывается от развития, стремления к самосовершенствованию. Его таланты не проявляются, а любые способности остаются незаметными. Простой путь – выбор, свойственный ленивым и слабым духом личностям.");
			sb->AppendLine("• Чувство безысходности. Сделав несколько попыток победить себя, но потерпев поражение, легко поддаться чувству обречённости и прийти к выводу, что собственную природу не победить. Это ощущение обманчиво и опасно, с ним следует бороться каждый раз, когда оно возникает.");
			sb->AppendLine("• Связи с плохими людьми. Вредный пример окружающих людей может побудить, этого человека совершать поступки, несвойственные его характеру. К тому же негативные настроения развращают душу, побуждая действовать необдуманно, следовать за своими капризами и страхами.");

			this->description->Text = sb->ToString();
			this->nameOfArcana->Text = "15 аркан - Дьявол";
		}
		else if (this->D->Text == "16") {
			System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

			sb->AppendLine("16 аркан");
			sb->AppendLine("16 аркан, прежде всего, говорит о неотвратимости грядущих испытаний, уготованных вам судьбой. И в каком бы «бункере» вы не спрятались, перемены всё равно произойдут. Поэтому вам нужно быть к этому готовым: твёрдо стоять на ногах, стойко переносить любые неприятности, не терять силу духа, действовать решительно и энергично. Не забывайте о помощи окружающим, вы должны стать опорой семьи и верным товарищем для остальных.");
			sb->AppendLine();
			sb->AppendLine("Важно проработать в текущем воплощении:");
			sb->AppendLine();
			sb->AppendLine("• Страх перемен. Не стоит бояться грядущих перемен и испытаний, и тем более винить судьбу. В этом мире всё происходит не просто так, и Вселенная никогда не посылает испытания, которые вы не в силах пройти. Поверьте у вас есть все возможности пройти без особенных потерь из любой ситуации.");
			sb->AppendLine("• Новое начало. Любой кризис, беда или расставание — это болезненный, но необходимый урок, который необходимо пройти, перед вступлением в новый этап. Это возможность стряхнуть с себя всё лишнее и чуждое. Даже потеряв всё, вы быстро восстановитесь и начнёте новый жизненный цикл.");
			sb->AppendLine("• Стены не для защиты. Не стоит пытаться оградить себя от перемен. Стены Башни, с одной стороны, защищают от угрозы, но с другой — мешают увидеть мир во всей его полноте. Рано или поздно стены падут, и вы будете чувствовать себя голым и незащищёнными.");
			sb->AppendLine("• Высокомерие и переоценка себя. Справившись с несколькими испытаниями, не вздумайте возгордиться. Переоценка своих сил и возможностей — ведёт к неминуемым ошибкам. А уж судьба постарается подкинуть вам соответствующее испытание.");
			sb->AppendLine("• Деструктивные мысли. Мыслите в созидательном ключе. Не желайте зла окружающим, прекращайте разрушать свою жизнь, и, конечно, не ломайте то, что построено другими. Смиряйте гнев и любые деструктивные мысли.");
			sb->AppendLine("• Спокойные отношения. Как бы трудно ни было, старайтесь держать эмоции под контролем особенно в отношении членов семьи. Вы должны стать для них опорой, а не тираном. Не навязывайте свою точку зрения партнёру и тем более детям.");
			this->description->Text = sb->ToString();
			this->nameOfArcana->Text = "16 аркан - Башня";
		}
		else if (this->D->Text == "17") {
			System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

			sb->AppendLine("17 аркан");
			sb->AppendLine("17 аркан говорит о мечте, таланте, яркой харизме, известности и признании. Но главное здесь всё же мечта, как высшая цель всей жизни человека. Подобно путеводной звезде она ведёт своего владельца по жизни, помогая выбрать направление и обходить препятствия.");
			sb->AppendLine();
			sb->AppendLine("Важно проработать в текущем воплощении:");
			sb->AppendLine();
			sb->AppendLine("• Через тернии к звёздам. Найдите свою мечту и двигайтесь к ней, однако учтите, что путь будет долог и труден. Преодолевая трудности, ваша душа развивается, закаливается, становясь сильнее. Звезда даст вам необходимые ориентиры, насытит энергией и поможет преодолеть любой кризис.");
			sb->AppendLine("• Главный талант. Постарайтесь отыскать своё истинное признание и врождённый талант. Пробуйте себя в разных направлениях, прислушивайтесь к интуиции и следуйте её подсказкам. Не пренебрегайте искусством, хотя совсем необязательно, что ваш дар будет именно в сфере творчества.");
			sb->AppendLine("• Признание и известность. Специально гнаться за популярностью и признанием вам не придётся. Делайте то, к чему лежит душа, идите к мечте и старайтесь достичь идеала в своём деле. И когда станете мастером в своём направлении — придёт и известность.");
			sb->AppendLine("• Звёздная болезнь. У вас, безусловно, есть способности, но это не делает вас выше других. Даже, достигнув значительных успехов, не вздумайте возгордиться и впадать в «звёздную болезнь». Иначе Вселенная быстро вернёт вас на землю, лишив всех достижений.");
			sb->AppendLine("• Позитивное общение. Не копите негатив, старайтесь радоваться каждому дню. Живите общественной жизнью, больше общайтесь с весёлыми, образованными и целеустремлёнными людьми. Никогда не жалуйтесь на неудачи, не опускайте руки и не впадайте в апатию.");
			sb->AppendLine("• Духовное развитие. Большая часть жизни такого человека протекает именно в духовном плане, а не в материальном. А значит, и развиваться он должен преимущественно духовно, не концентрируясь на материальных ценностях.");

			this->description->Text = sb->ToString();
			this->nameOfArcana->Text = "17 аркан - Звезда";
		}
		else if (this->D->Text == "18") {
			System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

			sb->AppendLine("18 аркан");
			sb->AppendLine("18 аркан говорит о богатом воображении, внутреннем мире и материализации мыслей. Главное, что вы должны сделать в этом воплощении – реализовать свои творческие способности, обуздать мысли, научившись видеть в окружающем мире положительные стороны. В таком случае вы сможете полностью контролировать свою жизнь и материализуете всё, что захотите.");
			sb->AppendLine();
			sb->AppendLine("Важно проработать в текущем воплощении:");
			sb->AppendLine();
			sb->AppendLine("• Страхи и сомнения. Любые страхи, наполняющие душу человека, постоянно замедляют его, удерживая от полноценной жизни. Боясь допустить ошибку, постоянно оглядываясь на окружающих и считая себя глупым, такой человек упускает возможность достичь подлинной зрелости. Преодолевая тревоги, он обретает полезный опыт, который будет вести его дальше.");
			sb->AppendLine("• Освобождение от негатива. Луна дозволяет вам материализовать любые мысли, и думая негативно, вы направляете свою жизнь в плохое русло. Избавляясь от всего отрицательного и разрушительного, человек постепенно освобождается, начинает чувствовать себя лучше, пользоваться своей силой.");
			sb->AppendLine("• Доверие и наивность. Обладатель 18 аркана имеет большой запас знаний, которые постоянно пополняются. Однако от этой информации не будет пользы, если вы не научитесь правильно ей распоряжаться. Важно научиться доверять судьбе и окружающим, однако не быть излишне наивным, позволяя манипулировать собой.");
			sb->AppendLine("• Бегство от ответственности. Иногда обладатель 18 аркана уходит от ответственности и не хочет принимать важные решения. Самый простой способ это сделать — сбежать в свой внутренний мир и замкнуться в себе, отгородившись от всего мира. Здесь главное — помнить, что рано или поздно придётся выйти, и исправлять ситуацию, которая может стать ещё хуже.");
			sb->AppendLine("• Доверие интуиции. Стремясь постичь суть вещей и чужих поступков, следует прислушиваться к своему внутреннему голосу, а не руководствоваться лишь знаниями, полученными извне. Наблюдательность, чуткость и доверие своей интуицией – ключевые качества, способные раскрыть ваш потенциал.");
			this->description->Text = sb->ToString();
			this->nameOfArcana->Text = "18 аркан - Луна";
		}
		else if (this->D->Text == "19") {
			System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

			sb->AppendLine("19 аркан");
			sb->AppendLine("В нынешнем воплощении человеку с 19 арканом важно ставить себе смелые цели по нескольким разным направлениям. Если вы будете концентрироваться на чём-то одном, неуёмная энергия и внутренний огонь, буквально выжгут вас изнутри.");
			sb->AppendLine();
			sb->AppendLine("Важно проработать в текущем воплощении:");
			sb->AppendLine();
			sb->AppendLine("• Внутренний огонь. Вы крайне энергичный, решительный и амбициозный человек, внутри вас буквально полыхает огонь желаний и чувств. Если не дать выхода этой энергии — ваш характер испортится, появится агрессия, злоба и зависть.");
			sb->AppendLine("• Одержимость идеей. Иногда обладатель 19 энергии выбирает какое-то одно направление в своей жизни и полностью концентрируется на нём. И, скорее всего, он действительно добьётся большого успеха в своём деле, но вопрос какой ценой.");
			sb->AppendLine("• Гордыня. Есть опасность чрезмерного возвеличивания себя относительно других, склонность переоценивать значение собственной персоны. Возможно, вам легче добиваться выдающихся результатов, чем другим, но это не даёт права принижать достоинство окружающих.");
			sb->AppendLine("• Жёсткость. Вам нужно смирить свой нрав и быть мягче с окружающими. Старайтесь сохранить тёплые отношения внутри семьи, уважайте родителей и доверяйте детям. Больше общайтесь с достойными людьми, чаще созывайте гостей.");
			sb->AppendLine("• Жадность. Такой человек обычно обращает внимание исключительно на материальную сторону жизни, полностью игнорируя духовную. В минусе это свойство делает его безмерно жадным. Человек начинает экономить на всём, контролирует расходы семьи, жалеет деньги даже на необходимые вещи.");
			sb->AppendLine("• Совет. Проходя непростые жизненные испытания, вы подвергаетесь мощной трансформации, которая рано или поздно приведёт вас к гармонии. Испытывая лишения, вы отсекаете всё то, что мешает вам стать осознанным и счастливым человеком.");

			this->description->Text = sb->ToString();
			this->nameOfArcana->Text = "19 аркан - Солнце";
		}
		else if (this->D->Text == "20") {
			System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

			sb->AppendLine("20 аркан");
			sb->AppendLine("Особенность энергии 20 аркана – это способность к перерождению и началу новой жизни. Даже теряя нечто важное, такой человек способен обновиться и продолжить движение. Выполняя родовые задачи, такой человек освобождается от прошлого и совершает переход к будущему, переживая ключевые душевные перемены.");
			sb->AppendLine();
			sb->AppendLine("Важно проработать в текущем воплощении:");
			sb->AppendLine();
			sb->AppendLine("• Проблемы рода. В этом воплощении человек должен решить проблемы своего рода или семьи. Речь может идти о примирении разных ветвей рода, поиске пропавшего члена семьи, создании нового рода, обретении нового места жительства и т. п. Это довольно сложный путь, который займёт всю жизнь, в процессе вам, вероятно, придётся стать главой семьи и принять немало сложных решений.");
			sb->AppendLine("• Перерождение или пробуждение. Зачастую такой человек в силу ряда причин, довольно долго никак не проявляет свои способности и живёт как бы не своей жизнью. Подобно Илье Муромцу он долгие годы лежит на печи не в силах подняться. Однако жизнь заставляет его пробудиться и кидает в самую гущу событий.");
			sb->AppendLine("• Осуждение и прощение. Такой человек любит осуждать окружающих за малейшие провинности и не стесняется высказывать это в глаза. Однако совершенно не замечает своих проступков. Проработайте этот недостаток, прекращайте судить других, раскайтесь и признайте свои ошибки.");
			sb->AppendLine("• Обретение веры и мудрости. В жизни такого человека важное место занимает вера – она должна сопровождать его на протяжении всей жизни. Будьте мудрее, освободитесь от навязанных целей, сбросьте с себя оковы прошлого. Только мудрость позволяет достичь духовной зрелости и поможет отыскать ответы на все серьёзные вопросы.");
			sb->AppendLine("• Страхи и искушения. Испытания и страхи, связанные как с прошлыми воплощениями, так и с нынешней жизнью, будут постоянно окружать вас. Слабости и искушения могут стать серьёзной проблемой на пути к душевной гармонии, жизненному благополучию и семейному счастью. Выясните свои слабые места и прорабатывайте их.");
			sb->AppendLine("• Людские судьбы. Обладателю 20 аркана рано или поздно придётся влиять на судьбы множества людей. Именно для этого вам нужно обрести мудрость, веру, проработать страхи и т. д. Когда этот момент придёт — не бойтесь, вы готовы принимать судьбоносные решения и нести за них ответственность.");

			this->description->Text = sb->ToString();
			this->nameOfArcana->Text = "20 аркан - Страшный суд";
		}
		else if (this->D->Text == "21") {
			System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

			sb->AppendLine("21 аркан");
			sb->AppendLine("Для такого человека важно понять свои желания и ценности, сформулировать уникальное мировоззрение и определить свои идеалы. Поиск главной цели своей жизни и самопознание, поможет обрести терпимость чужому мнению, душевное спокойствие и гармонию. Изучайте новые технологии и современные веяния, больше путешествуйте и расширяйте рамки своей жизни.");
			sb->AppendLine();
			sb->AppendLine("Важно проработать в текущем воплощении:");
			sb->AppendLine();
			sb->AppendLine("• Личное мировоззрение. Развивайте собственную философию, верьте в свои идеалы, но не настаивайте на их правильности. Придерживайтесь своих принципов и не идите на сделки с совестью. Человек должен сам прийти к осознанию соответствия своих убеждений и гармонии во всём мире.");
			sb->AppendLine("• Терпимость и прощение. Поймите, что мир – это ваш дом, и все люди ваши – братья и сестры. Относитесь с уважением к любой религии и мнению, отличному от вашего, но никогда не используйте силу для решения спорных вопросов. Решайте все разногласия посредством диалога и переговоров.");
			sb->AppendLine("• Главное дело жизни. Не ограничивайтесь рутинными делами, а ставьте перед собой амбициозные задачи на мировом уровне. Найдите главное дело своей жизни, работайте в крупных компаниях, работающих над некими глобальными целями. Участвуйте в волонтёрском движении, займитесь благотворительностью. Вам доступен огромный потенциал, и вы можете стать создателем чего-то действительно революционного.");
			sb->AppendLine("• Единение с миром. Будьте любознательны и открыты всему миру. Больше путешествуйте и изучайте культуру разных стран, расширяйте свои границы и познавайте что-то новое. Бывайте на природе, заведите домашнее животное. Можете переехать в другой регион или страну — это откроет перед вами массу возможностей.");
			sb->AppendLine("• В ногу со временем. Признавайте тот факт, что мир постоянно меняется и развивается, и не оставайтесь в стороне. Отбросьте старые привычки, действуйте согласно новым стандартам, проявляйте инициативу и рискуйте попробовать что-то новое. Уделите внимание IT-сфере, социальным сетям и интернет-проектам.");

			this->description->Text = sb->ToString();
			this->nameOfArcana->Text = "21 аркан - Мир";
		}
		else if (this->D->Text == "22") {
			System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

			sb->AppendLine("22 аркан");
			sb->AppendLine("Считается, что люди с 22 энергией во многом руководствуются неким «внутренним ребёнком». Он совершает массу необдуманных поступков, совершенно не задумываясь о последствиях. Хотя в итоге дела каким-то образом складываются хорошо. Со стороны это видится, как опасное хождение по краю, однако, для 22 аркана это и есть жизнь, несмотря на то, что она далека от установленных норм.");
			sb->AppendLine();
			sb->AppendLine("Важно проработать в текущем воплощении:");
			sb->AppendLine();
			sb->AppendLine("• Позитивное восприятие. Будьте добры и независимы, всегда будьте «на позитиве», не зацикливайтесь на житейских проблемах, легко переключайтесь. Изучайте всё новое и неизведанное, почувствуйте жизнь на уровне интуиции.");
			sb->AppendLine("• Иной взгляд. Люди с этой энергией должны научиться выходить из самых сложных ситуаций, с наибольшей выгодой. Единственный способ делать это — смотрят под другим углом на мир. Помните, что вы сами творец своей жизни согласно всех законов бытия.");
			sb->AppendLine("• Обретение пути. Это воплощение должно стать для вас временем приключений и духовного роста. Отсутствие рамок и границ должно освободить вас от условностей. Постарайтесь абстрагироваться от общественного мнения и наслаждаются жизнью в своё удовольствие. Верьте, что «было хорошо, а будет ещё лучше».");
			sb->AppendLine("• Реализация таланта. Люди, обладающие этой энергией, зачастую слишком беспечны. Имея хорошие шансы реализовать свой талант, и быть успешными и даже знаменитыми, они часто упускают возможности из-за своей легкомысленности. Найдите способ дисциплинировать себя, чтобы не растрачивать потенциал понапрасну.");

			this->description->Text = sb->ToString();
			this->nameOfArcana->Text = "22 аркан - Шут";
		}
	}
	private: System::Void other_Click(System::Object^ sender, System::EventArgs^ e) {
		LinkMessageBox^ msg = gcnew LinkMessageBox();
		msg->SetMessage("Больше информации смотрите на сайте:", "https://gadalkindom.ru/matritsa-sudby");
		msg->ShowDialog();
	}
};
}