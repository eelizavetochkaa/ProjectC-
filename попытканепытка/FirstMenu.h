#pragma once
#include "CardOfDay.h"
#include "Person.h"
#include "Relationship.h"
#include "Horoscope.h"
//
namespace попытканепытка {
	ref class MyForm;  
}

namespace попытканепытка {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для FirstMenu
	/// </summary>
	public ref class FirstMenu : public System::Windows::Forms::Form
	{
	private:
		MyForm^ previousForm;
		System::Drawing::Image^ bgImage2;
	public:
		FirstMenu()/* : previousForm(myForm)*/
		{

			InitializeComponent();
			LoadBackground();/*
			this->previousForm = myForm;*/
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->SetStyle(
				ControlStyles::ResizeRedraw |
				ControlStyles::AllPaintingInWmPaint |
				ControlStyles::UserPaint |
				ControlStyles::OptimizedDoubleBuffer,
				true
			);
			Application::EnableVisualStyles();
			this->Paint += gcnew PaintEventHandler(this, &FirstMenu::FirstMenu_Paint);
			this->Load += gcnew EventHandler(this, &FirstMenu::FirstMenu_Load);
		}
	private: System::Void FirstMenu_Paint(System::Object^ sender, PaintEventArgs^ e) {
		e->Graphics->SmoothingMode = System::Drawing::Drawing2D::SmoothingMode::AntiAlias;
	}
	private: System::Windows::Forms::Label^ menu1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ horoscope;
	private: System::Windows::Forms::Button^ previous;
		void LoadBackground() {

		}
	
	protected:
		~FirstMenu()
		{
			if (components)
			{
				delete components;
			}
			if (bgImage2)
			{
				delete bgImage2;
			}
		}
	private: System::Windows::Forms::Button^ exit;
	protected:

	private:
		
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FirstMenu::typeid));
			this->exit = (gcnew System::Windows::Forms::Button());
			this->menu1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->horoscope = (gcnew System::Windows::Forms::Button());
			this->previous = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
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
			this->exit->Location = System::Drawing::Point(1377, 11);
			this->exit->Margin = System::Windows::Forms::Padding(2);
			this->exit->Name = L"exit";
			this->exit->Size = System::Drawing::Size(56, 56);
			this->exit->TabIndex = 2;
			this->exit->Text = L"Х";
			this->exit->UseVisualStyleBackColor = false;
			this->exit->Click += gcnew System::EventHandler(this, &FirstMenu::exit_Click);
			// 
			// menu1
			// 
			this->menu1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->menu1->AutoSize = true;
			this->menu1->BackColor = System::Drawing::Color::Transparent;
			this->menu1->Font = (gcnew System::Drawing::Font(L"Soledago", 59.99999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->menu1->ForeColor = System::Drawing::Color::LavenderBlush;
			this->menu1->Location = System::Drawing::Point(417, 73);
			this->menu1->Name = L"menu1";
			this->menu1->Size = System::Drawing::Size(712, 103);
			this->menu1->TabIndex = 3;
			this->menu1->Text = L"Выберите услугу";
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->button1->Location = System::Drawing::Point(279, 249);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(407, 312);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Расклад на таро";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &FirstMenu::button1_Click);
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->button2->Location = System::Drawing::Point(867, 249);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(406, 312);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Матрица судьбы";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &FirstMenu::button2_Click);
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button3->Location = System::Drawing::Point(279, 628);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(406, 312);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Матрица совместимости";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &FirstMenu::button3_Click);
			// 
			// horoscope
			// 
			this->horoscope->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->horoscope->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->horoscope->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"horoscope.BackgroundImage")));
			this->horoscope->Cursor = System::Windows::Forms::Cursors::Hand;
			this->horoscope->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->horoscope->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->horoscope->Location = System::Drawing::Point(867, 628);
			this->horoscope->Name = L"horoscope";
			this->horoscope->Size = System::Drawing::Size(406, 312);
			this->horoscope->TabIndex = 7;
			this->horoscope->Text = L"Гороскоп";
			this->horoscope->UseVisualStyleBackColor = true;
			this->horoscope->Click += gcnew System::EventHandler(this, &FirstMenu::horoscope_Click);
			// 
			// previous
			// 
			this->previous->BackColor = System::Drawing::Color::Transparent;
			this->previous->Cursor = System::Windows::Forms::Cursors::Hand;
			this->previous->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->previous->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->previous->ForeColor = System::Drawing::Color::LavenderBlush;
			this->previous->Location = System::Drawing::Point(11, 6);
			this->previous->Name = L"previous";
			this->previous->Size = System::Drawing::Size(124, 76);
			this->previous->TabIndex = 8;
			this->previous->Text = L"<";
			this->previous->UseVisualStyleBackColor = false;
			this->previous->Click += gcnew System::EventHandler(this, &FirstMenu::previous_Click);
			// 
			// FirstMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1444, 981);
			this->Controls->Add(this->previous);
			this->Controls->Add(this->horoscope);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menu1);
			this->Controls->Add(this->exit);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"FirstMenu";
			this->Text = L"FirstMenu";
			this->Load += gcnew System::EventHandler(this, &FirstMenu::FirstMenu_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	#pragma endregion
	private: System::Void FirstMenu_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private:
		CardOfDay^ cardOfDay = nullptr;
		Person^ person = nullptr;
		Relationship^ relationship = nullptr;
		Horoscope^ horoscope1 = nullptr;

	private: System::Void exit_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		cardOfDay = gcnew CardOfDay();
		cardOfDay->Opacity = 0;
		cardOfDay->Show();
		for (double opacity = 0; opacity <= 1; opacity += 0.1)
		{
			cardOfDay->Opacity = opacity;
			Application::DoEvents();
			Threading::Thread::Sleep(15);
		}
		this->Hide();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		person = gcnew Person();
		person->Opacity = 0;
		person->Show();
		for (double opacity = 0; opacity <= 1; opacity += 0.1)
		{
			person->Opacity = opacity;
			Application::DoEvents();
			Threading::Thread::Sleep(15);
		}
		this->Hide();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		relationship = gcnew Relationship();
		relationship->Opacity = 0;
		relationship->Show();
		for (double opacity = 0; opacity <= 1; opacity += 0.1)
		{
			relationship->Opacity = opacity;
			Application::DoEvents();
			Threading::Thread::Sleep(15);
		}
		this->Hide();	}

	private: System::Void horoscope_Click(System::Object^ sender, System::EventArgs^ e) {
		horoscope1 = gcnew Horoscope();
		horoscope1->Opacity = 0;
		horoscope1->Show();
		for (double opacity = 0; opacity <= 1; opacity += 0.1)
		{
			horoscope1->Opacity = opacity;
			Application::DoEvents();
			Threading::Thread::Sleep(15);
		}
		this->Hide();
	}
private: System::Void previous_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
}
};
}
