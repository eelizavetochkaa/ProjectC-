#pragma on�e
#include "FirstMenu.h"
#include <thread>
#include <msclr/marshal.h>
#include <msclr/marshal_cppstd.h>
#include "sqlite3.h"
#include <stdlib.h>
#include <windows.h>
#include <shlwapi.h>
#include <iostream>
#include <fstream>
#pragma comment(lib, "shlwapi.lib")
#include <locale>
#include <codecvt>

#pragma comment(lib, "sqlite3.lib")
#include <msclr/marshal_cppstd.h>  

using namespace System;
using namespace System::IO;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Threading;
using namespace System::Runtime::InteropServices;

namespace �������������� {

    public ref class MyForm : public System::Windows::Forms::Form
    {
    public:
        MyForm(void)
        {
            InitializeComponent();
            LoadTarotCardImage();
            this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
            this->DoubleBuffered = true;

            this->SetStyle(
                ControlStyles::ResizeRedraw |
                ControlStyles::AllPaintingInWmPaint |
                ControlStyles::UserPaint |
                ControlStyles::OptimizedDoubleBuffer,
                true
            );
            firstMenu = gcnew FirstMenu();
            firstMenu->FormClosed += gcnew FormClosedEventHandler(this, &MyForm::OnFirstMenuClosed);
            Application::EnableVisualStyles();

            this->Paint += gcnew PaintEventHandler(this, &MyForm::MyForm_Paint);
            this->Load += gcnew EventHandler(this, &MyForm::MyForm_Load);
        }

    private:
        System::Void MyForm_Paint(System::Object^ sender, PaintEventArgs^ e) {
            e->Graphics->SmoothingMode = System::Drawing::Drawing2D::SmoothingMode::AntiAlias;
        }
    private:
        FirstMenu^ firstMenu = nullptr;
    private:
        System::Drawing::Image^ bgImage;
    private: System::Windows::Forms::Button^ exit;
    private: System::Windows::Forms::PictureBox^ pictureBox1;

           void InitializeFirstMenu()
           {
               firstMenu = gcnew FirstMenu();
               firstMenu->FormClosed += gcnew FormClosedEventHandler(this, &MyForm::OnFirstMenuClosed);
           }


    protected:
        ~MyForm()
        {
            if (components) { delete components; }
            if (bgImage) { delete bgImage; }
            if (firstMenu) { delete firstMenu; }
        }

    private:
        System::Windows::Forms::Button^ start;


    private:
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
            this->start = (gcnew System::Windows::Forms::Button());
            this->exit = (gcnew System::Windows::Forms::Button());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            this->SuspendLayout();
            // 
            // start
            // 
            this->start->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->start->BackColor = System::Drawing::Color::Transparent;
            this->start->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"start.BackgroundImage")));
            this->start->Cursor = System::Windows::Forms::Cursors::Hand;
            this->start->FlatAppearance->BorderSize = 0;
            this->start->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->start->Font = (gcnew System::Drawing::Font(L"Soledago", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->start->ForeColor = System::Drawing::SystemColors::ControlLight;
            this->start->Location = System::Drawing::Point(587, 589);
            this->start->Margin = System::Windows::Forms::Padding(2);
            this->start->Name = L"start";
            this->start->Size = System::Drawing::Size(273, 87);
            this->start->TabIndex = 0;
            this->start->Text = L"����";
            this->start->TextImageRelation = System::Windows::Forms::TextImageRelation::TextAboveImage;
            this->start->UseVisualStyleBackColor = false;
            this->start->Click += gcnew System::EventHandler(this, &MyForm::start_Click);
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
            this->exit->Location = System::Drawing::Point(1348, 11);
            this->exit->Margin = System::Windows::Forms::Padding(2);
            this->exit->Name = L"exit";
            this->exit->Size = System::Drawing::Size(85, 80);
            this->exit->TabIndex = 3;
            this->exit->Text = L"�";
            this->exit->UseVisualStyleBackColor = false;
            this->exit->Click += gcnew System::EventHandler(this, &MyForm::exit_Click);
            // 
            // pictureBox1
            // 
            this->pictureBox1->Location = System::Drawing::Point(81, 533);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(379, 436);
            this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
            this->pictureBox1->TabIndex = 4;
            this->pictureBox1->TabStop = false;
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
            this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->ClientSize = System::Drawing::Size(1444, 981);
            this->Controls->Add(this->pictureBox1);
            this->Controls->Add(this->exit);
            this->Controls->Add(this->start);
            this->DoubleBuffered = true;
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
            this->Margin = System::Windows::Forms::Padding(2);
            this->Name = L"MyForm";
            this->Text = L"MyForm";
            this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private: System::Collections::Generic::List<String^>^ GetAllTarotCards(sqlite3* db)
    {
        System::Collections::Generic::List<String^>^ cards = gcnew System::Collections::Generic::List<String^>();

        const char* sql = "SELECT image_path FROM tarot_cards";
        sqlite3_stmt* stmt;

        if (sqlite3_prepare_v2(db, sql, -1, &stmt, NULL) != SQLITE_OK) {
            MessageBox::Show("������ ���������� �������: " + gcnew String(sqlite3_errmsg(db)));
            return cards;
        }

        while (sqlite3_step(stmt) == SQLITE_ROW) {
            const unsigned char* imagePath = sqlite3_column_text(stmt, 0);
            if (imagePath != NULL) {
                cards->Add(gcnew String((const char*)imagePath));
            }
        }

        sqlite3_finalize(stmt);
        return cards;
    }
    private:
        System::Void OnFirstMenuClosed(System::Object^ sender, FormClosedEventArgs^ e) { }

    private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void start_Click(System::Object^ sender, System::EventArgs^ e) {
        firstMenu = gcnew FirstMenu();
        firstMenu->Opacity = 0;  
        firstMenu->Show();
        for (double opacity = 0; opacity <= 1; opacity += 0.1)
        {
            firstMenu->Opacity = opacity;
            Application::DoEvents();
            Threading::Thread::Sleep(15); 
        }
        this->Hide();
    }
    private: System::Void exit_Click(System::Object^ sender, System::EventArgs^ e) {
        Application::Exit();
    }
           void LoadTarotCardImage() {
               String^ appDir = Application::StartupPath;
               String^ dbName = "test.db";
               String^ dbPath = Path::Combine(appDir, dbName);
               msclr::interop::marshal_context context;
               std::wstring widePath = context.marshal_as<std::wstring>(dbPath);
               std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> converter;
               std::string utf8Path = converter.to_bytes(widePath);
               sqlite3* db;
               int rc = sqlite3_open_v2(utf8Path.c_str(), &db, SQLITE_OPEN_READWRITE, nullptr);

               if (rc != SQLITE_OK) {
                   String^ errorMsg = gcnew String(sqlite3_errmsg(db));
                   MessageBox::Show("������ �������� ��:\n" + errorMsg +
                       "\n����: " + dbPath,
                       "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
                   if (db) sqlite3_close(db);
                   return;
               }
               System::Collections::Generic::List<String^>^ cards = GetAllTarotCards(db);

               if (cards->Count == 0) {
                   MessageBox::Show("� �� �� ������� �� ����� �����!");
                   sqlite3_close(db);
                   return;
               }
               Random^ random = gcnew Random();
               int randomIndex = random->Next(0, cards->Count);
               String^ imageRelativePath = cards[randomIndex];
               String^ imageFullPath = Path::Combine(appDir, imageRelativePath);
               if (File::Exists(imageFullPath)) {
                   try {
                       pictureBox1->Image = Image::FromFile(imageFullPath);
                       pictureBox1->SizeMode = PictureBoxSizeMode::Zoom;
                   }
                   catch (Exception^ e) {
                       MessageBox::Show("������ �������� �����������:\n" + e->Message);
                   }
               }
               else {
                   MessageBox::Show("����������� �� �������:\n" + imageFullPath);
               }

               sqlite3_close(db);
           }
    };

}