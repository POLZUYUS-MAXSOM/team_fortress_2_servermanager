#pragma once

namespace TeamFortress2ServerManager {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		array<String^>^ lines;
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DomainUpDown^ lang;
	protected:

	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DomainUpDown^ theme;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ config;
	private: System::Windows::Forms::DomainUpDown^ shahidrezhim;

	private: System::Windows::Forms::Button^ button4;




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
			this->lang = (gcnew System::Windows::Forms::DomainUpDown());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->theme = (gcnew System::Windows::Forms::DomainUpDown());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->config = (gcnew System::Windows::Forms::TextBox());
			this->shahidrezhim = (gcnew System::Windows::Forms::DomainUpDown());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lang
			// 
			this->lang->Items->Add(L"ru");
			this->lang->Items->Add(L"en");
			this->lang->Location = System::Drawing::Point(12, 12);
			this->lang->Name = L"lang";
			this->lang->Size = System::Drawing::Size(90, 20);
			this->lang->TabIndex = 0;
			this->lang->Text = L"en";
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(108, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(24, 20);
			this->button1->TabIndex = 1;
			this->button1->Text = L"✓";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// theme
			// 
			this->theme->Items->Add(L"light");
			this->theme->Items->Add(L"black");
			this->theme->Location = System::Drawing::Point(138, 12);
			this->theme->Name = L"theme";
			this->theme->Size = System::Drawing::Size(90, 20);
			this->theme->TabIndex = 0;
			this->theme->Text = L"light";
			// 
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(234, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(24, 20);
			this->button2->TabIndex = 1;
			this->button2->Text = L"✓";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// button3
			// 
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(458, 38);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(24, 20);
			this->button3->TabIndex = 1;
			this->button3->Text = L"✓";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// config
			// 
			this->config->Location = System::Drawing::Point(12, 38);
			this->config->Name = L"config";
			this->config->Size = System::Drawing::Size(440, 20);
			this->config->TabIndex = 2;
			this->config->Text = L"-console -game tf -secure +sv_use_steam_networking 1 +sv_setsteamaccount (тут ваш"
				L" аккаунт сервера) +map cp_dustbowl +maxplayers 33 +exec server.cfg";
			// 
			// shahidrezhim
			// 
			this->shahidrezhim->Items->Add(L"left to right");
			this->shahidrezhim->Items->Add(L"right to left");
			this->shahidrezhim->Location = System::Drawing::Point(264, 12);
			this->shahidrezhim->Name = L"shahidrezhim";
			this->shahidrezhim->Size = System::Drawing::Size(90, 20);
			this->shahidrezhim->TabIndex = 0;
			// 
			// button4
			// 
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Location = System::Drawing::Point(360, 12);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(24, 20);
			this->button4->TabIndex = 1;
			this->button4->Text = L"✓";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm1::button4_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(485, 77);
			this->Controls->Add(this->config);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->shahidrezhim);
			this->Controls->Add(this->theme);
			this->Controls->Add(this->lang);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"MyForm1";
			this->Text = L".setting editor";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
	lines = System::IO::File::ReadAllLines(System::IO::Path::Combine(Application::StartupPath, L"settings.setting"));
	if (lines[0] == "ru")
	{
		this->Text = L".setting редактор";
	}
	if (lines[1] == "black")
	{
		this->BackColor = System::Drawing::SystemColors::ControlText;
		this->ForeColor = System::Drawing::SystemColors::Control;
		this->lang->BackColor = System::Drawing::SystemColors::ControlText;
		this->lang->ForeColor = System::Drawing::SystemColors::Control;
		this->theme->BackColor = System::Drawing::SystemColors::ControlText;
		this->theme->ForeColor = System::Drawing::SystemColors::Control;
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	lines[0] = lang->Text;
	System::IO::File::WriteAllLines(System::IO::Path::Combine(Application::StartupPath + "\\settings.setting"), lines);
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	lines[1] = theme->Text;
	System::IO::File::WriteAllLines(System::IO::Path::Combine(Application::StartupPath + "\\settings.setting"), lines);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	lines[2] = config->Text;
	System::IO::File::WriteAllLines(System::IO::Path::Combine(Application::StartupPath + "\\settings.setting"), lines);
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	lines[3] = shahidrezhim->Text;
	System::IO::File::WriteAllLines(System::IO::Path::Combine(Application::StartupPath + "\\settings.setting"), lines);
}
};
}
