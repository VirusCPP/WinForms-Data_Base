#pragma once
#include <string>
#include <msclr/marshal_cppstd.h>
#include "worker.h"
#include <ctype.h>

namespace Project2 {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace msclr::interop;

    public ref class MyForm : public System::Windows::Forms::Form
    {
    public:
        MyForm(void)
        {
            InitializeComponent();
        }
        
    protected:
        ~MyForm()
        {
            if (components)
            {
                delete components;
            }
        }


    private: System::Windows::Forms::Button^ SetText;
    private: System::Windows::Forms::TextBox^ WorkerName;
    private: System::Windows::Forms::TextBox^ Age;
    private: System::Windows::Forms::TextBox^ Salary;
    private: System::Windows::Forms::Button^ showInfo;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::MenuStrip^ menuStrip1;
    private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
    private: System::Windows::Forms::PrintDialog^ printDialog1;
    private: System::Drawing::Printing::PrintDocument^ printDocument1;
    private: System::Windows::Forms::PrintPreviewDialog^ printPreviewDialog1;
    private: System::Windows::Forms::TextBox^ textBox2;

    protected:
    private:
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
            this->SetText = (gcnew System::Windows::Forms::Button());
            this->WorkerName = (gcnew System::Windows::Forms::TextBox());
            this->Age = (gcnew System::Windows::Forms::TextBox());
            this->Salary = (gcnew System::Windows::Forms::TextBox());
            this->showInfo = (gcnew System::Windows::Forms::Button());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
            this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
            this->printDialog1 = (gcnew System::Windows::Forms::PrintDialog());
            this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
            this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->SuspendLayout();
            // 
            // SetText
            // 
            this->SetText->Location = System::Drawing::Point(67, 91);
            this->SetText->Name = L"SetText";
            this->SetText->Size = System::Drawing::Size(87, 23);
            this->SetText->TabIndex = 1;
            this->SetText->Text = L"Сохранить";
            this->SetText->UseVisualStyleBackColor = true;
            this->SetText->Click += gcnew System::EventHandler(this, &MyForm::SetText_Click);
            // 
            // WorkerName
            // 
            this->WorkerName->Location = System::Drawing::Point(67, 28);
            this->WorkerName->Name = L"WorkerName";
            this->WorkerName->Size = System::Drawing::Size(87, 20);
            this->WorkerName->TabIndex = 2;
            this->WorkerName->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::EnterToTab);
            // 
            // Age
            // 
            this->Age->Location = System::Drawing::Point(67, 48);
            this->Age->Name = L"Age";
            this->Age->Size = System::Drawing::Size(87, 20);
            this->Age->TabIndex = 3;
            this->Age->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::EnterToTab);
            // 
            // Salary
            // 
            this->Salary->Location = System::Drawing::Point(67, 68);
            this->Salary->Name = L"Salary";
            this->Salary->Size = System::Drawing::Size(87, 20);
            this->Salary->TabIndex = 4;
            this->Salary->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Enter_KeyPress);
            // 
            // showInfo
            // 
            this->showInfo->Location = System::Drawing::Point(186, 91);
            this->showInfo->Name = L"showInfo";
            this->showInfo->Size = System::Drawing::Size(171, 23);
            this->showInfo->TabIndex = 5;
            this->showInfo->Text = L"Показать список сотрудников";
            this->showInfo->UseVisualStyleBackColor = true;
            this->showInfo->Click += gcnew System::EventHandler(this, &MyForm::Show_Click);
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(2, 31);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(29, 13);
            this->label2->TabIndex = 6;
            this->label2->Text = L"Имя";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Location = System::Drawing::Point(2, 51);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(49, 13);
            this->label3->TabIndex = 7;
            this->label3->Text = L"Возраст";
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Location = System::Drawing::Point(2, 71);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(55, 13);
            this->label4->TabIndex = 8;
            this->label4->Text = L"Зарплата";
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Location = System::Drawing::Point(12, 9);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(118, 13);
            this->label5->TabIndex = 9;
            this->label5->Text = L"Добавить сотрудника";
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Location = System::Drawing::Point(215, 9);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(100, 13);
            this->label6->TabIndex = 10;
            this->label6->Text = L"Поиск сотрудника";
            // 
            // textBox1
            // 
            this->textBox1->Location = System::Drawing::Point(186, 28);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(171, 20);
            this->textBox1->TabIndex = 2;
            // 
            // button1
            // 
            this->button1->Location = System::Drawing::Point(186, 51);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(171, 23);
            this->button1->TabIndex = 11;
            this->button1->Text = L"Найти сотрудника";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
            // 
            // menuStrip1
            // 
            this->menuStrip1->Location = System::Drawing::Point(0, 0);
            this->menuStrip1->Name = L"menuStrip1";
            this->menuStrip1->Size = System::Drawing::Size(383, 24);
            this->menuStrip1->TabIndex = 12;
            this->menuStrip1->Text = L"menuStrip1";
            // 
            // openFileDialog1
            // 
            this->openFileDialog1->FileName = L"openFileDialog1";
            // 
            // printDialog1
            // 
            this->printDialog1->UseEXDialog = true;
            // 
            // printPreviewDialog1
            // 
            this->printPreviewDialog1->AutoScrollMargin = System::Drawing::Size(0, 0);
            this->printPreviewDialog1->AutoScrollMinSize = System::Drawing::Size(0, 0);
            this->printPreviewDialog1->ClientSize = System::Drawing::Size(400, 300);
            this->printPreviewDialog1->Enabled = true;
            this->printPreviewDialog1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"printPreviewDialog1.Icon")));
            this->printPreviewDialog1->Name = L"printPreviewDialog1";
            this->printPreviewDialog1->Visible = false;
            // 
            // textBox2
            // 
            this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox2->Location = System::Drawing::Point(5, 131);
            this->textBox2->Multiline = true;
            this->textBox2->Name = L"textBox2";
            this->textBox2->ReadOnly = true;
            this->textBox2->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
            this->textBox2->Size = System::Drawing::Size(366, 347);
            this->textBox2->TabIndex = 13;
            this->textBox2->WordWrap = false;
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(383, 490);
            this->Controls->Add(this->textBox2);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->label6);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->Salary);
            this->Controls->Add(this->Age);
            this->Controls->Add(this->textBox1);
            this->Controls->Add(this->WorkerName);
            this->Controls->Add(this->SetText);
            this->Controls->Add(this->showInfo);
            this->Controls->Add(this->menuStrip1);
            this->HelpButton = true;
            this->MainMenuStrip = this->menuStrip1;
            this->Name = L"MyForm";
            this->Text = L"Моя программа";
            this->TopMost = true;
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
        private: bool IsStringNumber(System::String^ str) {
            int result;
            return Int32::TryParse(str, result);
        }

    private: System::Void SetText_Click(System::Object^ sender, System::EventArgs^ e) {
        addWorker();
    }

    private: System::Void Show_Click(System::Object^ sender, System::EventArgs^ e) {
        getWorkersList();
    }
           Void Enter_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
               if (e->KeyChar == (char)Keys::Enter)
               {
                   e->Handled = true;
                   this->SetText_Click(sender, System::EventArgs::Empty);
                   WorkerName->Focus();
               }
           }
           Void EnterToTab(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
               if (e->KeyChar == (char)Keys::Enter)
               {
                   e->Handled = true;
                   SendKeys::Send("{TAB}");
               }
           }
           void addWorker() {
               this->textBox2->Text = "";
               if (!IsStringNumber(this->Age->Text) || !IsStringNumber(this->Salary->Text)) {
                   this->textBox2->Text += "Некорректный ввод данных.\r\nВозраст и зарплата должны быть числами.\r\nПопробуйте снова.\r\n";
                   return;
               }
               Worker newWorker;
               std::string name = marshal_as<std::string>(this->WorkerName->Text);
               int age = Convert::ToInt32(this->Age->Text);
               int salary = Convert::ToInt32(this->Salary->Text);

               if (age < 18) {
                   this->textBox2->Text += "Некорректный ввод данных.\nВозраст не может быть меньше 18.\r\nПопробуйте снова.\r\n";
                   return;
               }
               else if (salary < 0) {
                   this->textBox2->Text += "Некорректный ввод данных.\nЗарплата не может быть отрицательной.\r\nПопробуйте снова.";
                   return;
               }
               else if (name.empty() || name.find(" ") == 0)
               {
                   this->textBox2->Text += "Некорректный ввод данных.\r\nНе введено имя сотрудника.\r\nПопробуйте снова.";
                   return;
               }
               else {
                   newWorker.enterdata(name, age, salary);
                   this->WorkerName->Text = "";
                   this->Age->Text = "";
                   this->Salary->Text = "";
                   this->textBox2->Text = "Сотрудник сохранен.";
               }
           }
           bool checkWorkersList() {
               if (!workers.empty()) {
                   this->textBox2->Text = "Всего найдено сотрудников: " + workers.size() + "\r\n\r\n";
                   return true;
               }
               else {
                   this->textBox2->Text = "В настоящий момент нет сотрудников.";
                   return false;
               }
           }

           void getWorkersList() {
               if (checkWorkersList()) {
                   for (const auto& worker : workers) {
                       this->textBox2->Text += "Имя:\r\t\r\t" + marshal_as<System::String^>(worker.GetName()) + "\r\n" +
                           "Возраст:\r\t\r\t" + Convert::ToString(worker.GetAge()) + "\r\n" +
                           "Зарплата:\r\t" + Convert::ToString(worker.GetSalary()) + "\r\n\r\n";
                   }
               }
           }
           void workerSearch() {
               if (checkWorkersList()) {
                   std::vector<int> index;
                   std::string search = marshal_as<std::string>(this->textBox1->Text);
                   for (int i = 0; i < workers.size(); i++) {
                       if (workers[i].GetName() == search) {
                           index.push_back(i);
                       }
                   }
                   if (index.empty()) {
                       this->textBox2->Text = "Сотрудник не найден";
                   }
                   else {
                       this->textBox2->Text = "Найдено сотрудников: "+ index.size() + "\r\n";
                       for (size_t i = 0; i < index.size(); i++) {
                           printdata(index[i]);
                       }
                   }
               }
           }
           void printdata(int i) {
               this->textBox2->Text += "Имя:\r\t\r\t" + marshal_as<System::String^>(workers[i].GetName()) + "\r\n" +
                   "Возраст:\r\t\r\t" + Convert::ToString(workers[i].GetAge()) + "\r\n" +
                   "Зарплата:\r\t" + Convert::ToString(workers[i].GetSalary()) + "\r\n\r\n";
           }
           
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
    workerSearch();
}
};
}