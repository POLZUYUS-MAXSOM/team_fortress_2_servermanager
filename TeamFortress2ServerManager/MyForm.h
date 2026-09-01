#pragma once
#include <fstream>
#include "myform1.h"
#include "myform2.h"
namespace TeamFortress2ServerManager {
	using namespace Microsoft::Win32;
	using namespace System::Collections::Generic;
	using namespace System;
	using namespace System::Windows;
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
		List<String^>^ Admins;
		String^ WORKDIRECTORYSTRING;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ edit;
	private: System::Windows::Forms::Button^ button3;

	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ SERVERCFGEDITOR;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::NotifyIcon^ serverdowninfo;
	private: System::Windows::Forms::Timer^ timer1;

	private: System::Windows::Forms::Button^ button8;






	public:
	public:
		String^ ADMINSINI;
		String^ args;
		MyForm(void)
		{
			Admins = gcnew List<String^>();
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
			System::Diagnostics::Debug::WriteLine("~MyForm called");
			if (components) delete components;
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ListView^ ADMINSLIST;



	private: System::Windows::Forms::FolderBrowserDialog^ WORKDIRECTORY;
	private: System::Windows::Forms::Button^ Directory;
	private: System::Windows::Forms::Button^ refresh_button; // только одно объявление
	private:
		static String^ REG_KEY = L"Software\\TeamFortress2ServerManager";
		static String^ REG_VALUE = L"WorkDirectory";
	protected:
	private:
		System::Diagnostics::Process^ serverProcess;
	private: System::ComponentModel::IContainer^ components;
	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->ADMINSLIST = (gcnew System::Windows::Forms::ListView());
			this->WORKDIRECTORY = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->Directory = (gcnew System::Windows::Forms::Button());
			this->refresh_button = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->edit = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SERVERCFGEDITOR = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->serverdowninfo = (gcnew System::Windows::Forms::NotifyIcon(this->components));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Enabled = false;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(14, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(195, 48);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Run";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// ADMINSLIST
			// 
			this->ADMINSLIST->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->ADMINSLIST->CheckBoxes = true;
			this->ADMINSLIST->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ADMINSLIST->HideSelection = false;
			this->ADMINSLIST->Location = System::Drawing::Point(216, 12);
			this->ADMINSLIST->Name = L"ADMINSLIST";
			this->ADMINSLIST->Size = System::Drawing::Size(226, 189);
			this->ADMINSLIST->TabIndex = 1;
			this->ADMINSLIST->UseCompatibleStateImageBehavior = false;
			this->ADMINSLIST->View = System::Windows::Forms::View::List;
			this->ADMINSLIST->ItemChecked += gcnew System::Windows::Forms::ItemCheckedEventHandler(this, &MyForm::ADMINSLIST_ItemChecked);
			// 
			// WORKDIRECTORY
			// 
			this->WORKDIRECTORY->Description = L"find TF path of your server";
			this->WORKDIRECTORY->RootFolder = System::Environment::SpecialFolder::MyComputer;
			// 
			// Directory
			// 
			this->Directory->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Directory->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Directory->Location = System::Drawing::Point(14, 96);
			this->Directory->Name = L"Directory";
			this->Directory->Size = System::Drawing::Size(195, 23);
			this->Directory->TabIndex = 2;
			this->Directory->Text = L"Work directory...";
			this->Directory->UseVisualStyleBackColor = true;
			this->Directory->Click += gcnew System::EventHandler(this, &MyForm::Directory_Click);
			// 
			// refresh_button
			// 
			this->refresh_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->refresh_button->Enabled = false;
			this->refresh_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->refresh_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->refresh_button->Location = System::Drawing::Point(14, 66);
			this->refresh_button->Name = L"refresh_button";
			this->refresh_button->Size = System::Drawing::Size(195, 24);
			this->refresh_button->TabIndex = 3;
			this->refresh_button->Text = L"refresh admins";
			this->refresh_button->UseVisualStyleBackColor = true;
			this->refresh_button->Click += gcnew System::EventHandler(this, &MyForm::refresh_button_Click);
			// 
			// button2
			// 
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(14, 125);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(195, 35);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Load Work directory from registry...";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// edit
			// 
			this->edit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->edit->Enabled = false;
			this->edit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->edit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->edit->Location = System::Drawing::Point(14, 166);
			this->edit->Name = L"edit";
			this->edit->Size = System::Drawing::Size(195, 35);
			this->edit->TabIndex = 5;
			this->edit->Text = L"edit admins";
			this->edit->UseVisualStyleBackColor = true;
			this->edit->Click += gcnew System::EventHandler(this, &MyForm::edit_Click);
			// 
			// button3
			// 
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Enabled = false;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(14, 207);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(195, 35);
			this->button3->TabIndex = 6;
			this->button3->Text = L"edit server.cfg";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->Enabled = false;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(14, 248);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(195, 35);
			this->button4->TabIndex = 6;
			this->button4->Text = L"save server cfg";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// SERVERCFGEDITOR
			// 
			this->SERVERCFGEDITOR->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->SERVERCFGEDITOR->Location = System::Drawing::Point(13, 290);
			this->SERVERCFGEDITOR->MaxLength = 147483647;
			this->SERVERCFGEDITOR->Multiline = true;
			this->SERVERCFGEDITOR->Name = L"SERVERCFGEDITOR";
			this->SERVERCFGEDITOR->Size = System::Drawing::Size(430, 141);
			this->SERVERCFGEDITOR->TabIndex = 7;
			// 
			// button5
			// 
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->Enabled = false;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(216, 249);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(227, 35);
			this->button5->TabIndex = 6;
			this->button5->Text = L"refresh server cfg editor";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->button6->Location = System::Drawing::Point(216, 207);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(226, 35);
			this->button6->TabIndex = 6;
			this->button6->Text = L"settings";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->Enabled = false;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(217, 436);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(226, 35);
			this->button7->TabIndex = 5;
			this->button7->Text = L"open work directory in explorer";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// serverdowninfo
			// 
			this->serverdowninfo->BalloonTipIcon = System::Windows::Forms::ToolTipIcon::Info;
			this->serverdowninfo->BalloonTipText = L"Server down!";
			this->serverdowninfo->BalloonTipTitle = L"INFO";
			this->serverdowninfo->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"serverdowninfo.Icon")));
			this->serverdowninfo->Text = L"INFO";
			this->serverdowninfo->Visible = true;
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// button8
			// 
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(14, 437);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(195, 35);
			this->button8->TabIndex = 4;
			this->button8->Text = L"useful links";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(447, 484);
			this->Controls->Add(this->SERVERCFGEDITOR);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->edit);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->refresh_button);
			this->Controls->Add(this->Directory);
			this->Controls->Add(this->ADMINSLIST);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->ShowIcon = false;
			this->Text = L"TeamFortress2ServerManager";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		array<String^>^ lines = System::IO::File::ReadAllLines(System::IO::Path::Combine(Application::StartupPath, L"settings.setting"));
		if (lines[0] == "ru")
		{
			this->Text = L"Менеджер сервера «Team Fortress 2»";	
			this->button1->Text = L"Запустить";
			this->refresh_button->Text = L"Обновить админ-ров";
			this->Directory->Text = L"Рабочая папка...";
			this->button2->Text = L"Загрузить рабочию папку из реестра...";
			this->edit->Text = L"Редактировать админ-ров";
			this->button3->Text = L"Редактировать server.cfg";
			this->button4->Text = L"Сохранить server.cfg";
			this->button5->Text = L"Обновить редактор server.cfg";
			this->button6->Text = L"Настройки";
			this->button7->Text = L"открыть рабочий каталог в проводнике";
		}
		if (lines[1] == "black")
		{
			this->BackColor = System::Drawing::SystemColors::ControlText;
			this->ForeColor = System::Drawing::SystemColors::Control;
			this->SERVERCFGEDITOR->BackColor = System::Drawing::SystemColors::ControlText;
			this->SERVERCFGEDITOR->ForeColor = System::Drawing::SystemColors::Control;
			this->ADMINSLIST->BackColor = System::Drawing::SystemColors::ControlText;
			this->ADMINSLIST->ForeColor = System::Drawing::SystemColors::Control;
		}
		args = lines[2];
		if (lines[3] == "right to left") {
			this->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
		}
		else
		{
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (String::IsNullOrEmpty(WORKDIRECTORYSTRING)) {
			MessageBox::Show("Select TF folder first.");
			return;
		}
		String^ serverRoot = System::IO::Path::GetDirectoryName(WORKDIRECTORYSTRING);
		if (!System::IO::Directory::Exists(serverRoot)) {
			MessageBox::Show("tf2_server folder not found in " + System::IO::Path::GetDirectoryName(WORKDIRECTORYSTRING));
			return;
		}
		String^ exePath = System::IO::Path::Combine(serverRoot, "srcds.exe");
		if (!System::IO::File::Exists(exePath)) {
			MessageBox::Show("srcds.exe not found in " + serverRoot);
			return;
		}
		try {
			this->timer1->Enabled = true;
			System::Diagnostics::Process^ process = gcnew System::Diagnostics::Process();
			process->StartInfo->FileName = exePath;
			process->StartInfo->Arguments = args;
			process->StartInfo->WorkingDirectory = serverRoot;
			process->Start();
			MessageBox::Show("Server started.");
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error: " + ex->Message);
		}
	}
	private: System::Void Directory_Click(System::Object^ sender, System::EventArgs^ e) {
		if (WORKDIRECTORY->ShowDialog() == Forms::DialogResult::OK)
		{
			try {
				RegistryKey^ key = Registry::CurrentUser->CreateSubKey(REG_KEY);
				key->SetValue(REG_VALUE, WORKDIRECTORY->SelectedPath);
				key->Close();
			}
			catch (Exception^ ex) {
				MessageBox::Show("save error: " + ex->Message);
			}
			WORKDIRECTORYSTRING = WORKDIRECTORY->SelectedPath;
			array<String^>^ typicalPaths = {
				System::IO::Path::Combine(WORKDIRECTORYSTRING, "cfg\\sourcemod\\configs\\admins_simple.ini"),
				System::IO::Path::Combine(WORKDIRECTORYSTRING, "addons\\sourcemod\\configs\\admins_simple.ini")
			};
			for (int i = 0; i < 2; i++)
			{
				if (System::IO::File::Exists(typicalPaths[i])) {
					ADMINSINI = typicalPaths[i];
					refresh_button->Enabled = true;
					button1->Enabled = true;
					button5->Enabled = true;
					button4->Enabled = true;
					button3->Enabled = true;
					button7->Enabled = true;
				}
			}
		}
	}
	private: System::Void refresh_button_Click(System::Object^ sender, System::EventArgs^ e) {
		ADMINSLIST->Clear();
		array<String^>^ lines = System::IO::File::ReadAllLines(ADMINSINI);
		int length = lines->Length;
		for (int i = 0; i < length; i++)
		{
			if (lines[i]->StartsWith("//") || lines[i]->StartsWith("/")) {
				ADMINSLIST->Items->Add(lines[i]->Replace("//", "")->Replace(";", ""));
				ADMINSLIST->Items[i]->Checked = false;
			}
			else
			{
				ADMINSLIST->Items->Add(lines[i]);
				ADMINSLIST->Items[i]->Checked = true;
			}
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			RegistryKey^ key = Registry::CurrentUser->OpenSubKey(REG_KEY);
			if (key != nullptr) {
				String^ value = safe_cast<String^>(key->GetValue(REG_VALUE));
				key->Close();
				WORKDIRECTORYSTRING = value;
				array<String^>^ typicalPaths = {
					System::IO::Path::Combine(WORKDIRECTORYSTRING, "cfg\\sourcemod\\configs\\admins_simple.ini"),
					System::IO::Path::Combine(WORKDIRECTORYSTRING, "addons\\sourcemod\\configs\\admins_simple.ini")
				};
				for (int i = 0; i < 2; i++)
				{
					if (System::IO::File::Exists(typicalPaths[i])) {
						ADMINSINI = typicalPaths[i];
						edit->Enabled = true;
						refresh_button->Enabled = true;
						button1->Enabled = true;
						button3->Enabled = true;
						button5->Enabled = true;
						button4->Enabled = true;
						button7->Enabled = true;
					}
				}
			}
		}
		catch (Exception^) {
			MessageBox::Show("not found try set workdirectory");
		}
	}
private: System::Void edit_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Diagnostics::Process::Start(ADMINSINI);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Diagnostics::Process::Start(System::IO::Path::Combine(WORKDIRECTORYSTRING, "cfg\\server.cfg"));
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	array<String^>^ lines = System::IO::File::ReadAllLines(System::IO::Path::Combine(WORKDIRECTORYSTRING, "cfg\\server.cfg"));
	this->SERVERCFGEDITOR->Lines = lines;
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		array<String^>^ lines = this->SERVERCFGEDITOR->Lines;
		System::IO::File::WriteAllLines(System::IO::Path::Combine(WORKDIRECTORYSTRING, "cfg\\server.cfg"), lines);
	}
	catch (const std::exception&)
	{
		throw gcnew System::Exception("Произошла ошибка при выполнении операции.");
	}
}
private: System::Void ADMINSLIST_ItemChecked(System::Object^ sender, System::Windows::Forms::ItemCheckedEventArgs^ e) {
	this->Admins->Clear();
	for (int i = 0; i < this->ADMINSLIST->Items->Count ; i++)
	{
		if (this->ADMINSLIST->Items[i]->Checked == false) {
			this->Admins->Add("//" + this->ADMINSLIST->Items[i]->Text);
		}
		else
		{
			this->Admins->Add(this->ADMINSLIST->Items[i]->Text);
		}
		System::IO::File::WriteAllLines(ADMINSINI, Admins);
	}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	TeamFortress2ServerManager::MyForm1^ myform1 = gcnew TeamFortress2ServerManager::MyForm1();
	myform1->Show();

}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		System::Diagnostics::Process::Start(WORKDIRECTORYSTRING);
	}
	catch (const std::exception&){}
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	array<System::Diagnostics::Process^>^ runningServer = System::Diagnostics::Process::GetProcessesByName("srcds");

	if (runningServer->Length == 0) {
		this->serverdowninfo->ShowBalloonTip(0);
		this->timer1->Enabled = false;
	}
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	TeamFortress2ServerManager::MyForm2^ myform2 = gcnew TeamFortress2ServerManager::MyForm2();
	myform2->Show();
}
};
}