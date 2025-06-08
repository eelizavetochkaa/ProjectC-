#pragma once

namespace попытканепытка {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class LinkMessageBox : public System::Windows::Forms::Form
    {
    public:
        LinkMessageBox(void)
        {
            InitializeComponent();
        }

        void SetMessage(String^ text, String^ url) {
            richTextBox1->Text = text + " " + url;

            int linkStart = text->Length + 1;
            richTextBox1->Select(linkStart, url->Length);
            richTextBox1->SelectionColor = Color::Blue;
            richTextBox1->SelectionFont = gcnew System::Drawing::Font(
                richTextBox1->Font,
                FontStyle::Underline
            );
            richTextBox1->Select(0, 0);
        }

    protected:
        ~LinkMessageBox()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        System::Windows::Forms::RichTextBox^ richTextBox1;
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LinkMessageBox::typeid));
            this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
            this->SuspendLayout();
            // 
            // richTextBox1
            // 
            this->richTextBox1->BackColor = System::Drawing::Color::LavenderBlush;
            this->richTextBox1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->richTextBox1->Location = System::Drawing::Point(0, 0);
            this->richTextBox1->Name = L"richTextBox1";
            this->richTextBox1->ReadOnly = true;
            this->richTextBox1->Size = System::Drawing::Size(478, 304);
            this->richTextBox1->TabIndex = 0;
            this->richTextBox1->Text = L"";
            // 
            // LinkMessageBox
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::IndianRed;
            this->ClientSize = System::Drawing::Size(478, 304);
            this->Controls->Add(this->richTextBox1);
            this->ForeColor = System::Drawing::Color::LavenderBlush;
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
            this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
            this->Name = L"LinkMessageBox";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L" ";
            this->ResumeLayout(false);

        }
#pragma endregion

    private:
        System::Void richTextBox1_LinkClicked(System::Object^ sender,
            System::Windows::Forms::LinkClickedEventArgs^ e)
        {
            if (!String::IsNullOrEmpty(e->LinkText))
            {
                System::Diagnostics::Process::Start(e->LinkText);
            }
        } 
    };
}