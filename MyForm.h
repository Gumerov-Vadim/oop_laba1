#pragma once
#include <iostream>
#include <string>
namespace GUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
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
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_click_me;
	private: System::Windows::Forms::TextBox^ tb2;
	private: System::Windows::Forms::TextBox^ tb1;
	private: System::Windows::Forms::Label^ l_thanks;
	private: System::Windows::Forms::PictureBox^ draw_box;
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::DateTimePicker^ date;
	private: System::Windows::Forms::Label^ l_date;
	private: System::Windows::Forms::CheckedListBox^ clb_date;
	private: System::Windows::Forms::RadioButton^ rbtn;

	private: System::Windows::Forms::Timer^ timer;
	private: System::Windows::Forms::ListBox^ listBox1;


	private: System::ComponentModel::IContainer^ components;





	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->btn_click_me = (gcnew System::Windows::Forms::Button());
			this->tb2 = (gcnew System::Windows::Forms::TextBox());
			this->tb1 = (gcnew System::Windows::Forms::TextBox());
			this->l_thanks = (gcnew System::Windows::Forms::Label());
			this->draw_box = (gcnew System::Windows::Forms::PictureBox());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->date = (gcnew System::Windows::Forms::DateTimePicker());
			this->l_date = (gcnew System::Windows::Forms::Label());
			this->clb_date = (gcnew System::Windows::Forms::CheckedListBox());
			this->rbtn = (gcnew System::Windows::Forms::RadioButton());
			this->timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->draw_box))->BeginInit();
			this->SuspendLayout();
			// 
			// btn_click_me
			// 
			this->btn_click_me->BackColor = System::Drawing::Color::MediumBlue;
			this->btn_click_me->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_click_me->ForeColor = System::Drawing::Color::Cyan;
			this->btn_click_me->Location = System::Drawing::Point(12, 23);
			this->btn_click_me->Name = L"btn_click_me";
			this->btn_click_me->Size = System::Drawing::Size(198, 118);
			this->btn_click_me->TabIndex = 0;
			this->btn_click_me->Text = L"нажми на мен€, пожалуйста";
			this->btn_click_me->UseVisualStyleBackColor = false;
			this->btn_click_me->Click += gcnew System::EventHandler(this, &MyForm::btn_click_me_Click);
			// 
			// tb2
			// 
			this->tb2->Enabled = false;
			this->tb2->Location = System::Drawing::Point(233, 77);
			this->tb2->Name = L"tb2";
			this->tb2->Size = System::Drawing::Size(142, 20);
			this->tb2->TabIndex = 1;
			// 
			// tb1
			// 
			this->tb1->Location = System::Drawing::Point(233, 23);
			this->tb1->Name = L"tb1";
			this->tb1->Size = System::Drawing::Size(142, 20);
			this->tb1->TabIndex = 2;
			this->tb1->TextChanged += gcnew System::EventHandler(this, &MyForm::tb1_TextChanged);
			// 
			// l_thanks
			// 
			this->l_thanks->AutoSize = true;
			this->l_thanks->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->l_thanks->ForeColor = System::Drawing::Color::Snow;
			this->l_thanks->Location = System::Drawing::Point(230, 128);
			this->l_thanks->Name = L"l_thanks";
			this->l_thanks->Size = System::Drawing::Size(0, 26);
			this->l_thanks->TabIndex = 3;
			// 
			// draw_box
			// 
			this->draw_box->BackColor = System::Drawing::SystemColors::Control;
			this->draw_box->Location = System::Drawing::Point(12, 284);
			this->draw_box->Name = L"draw_box";
			this->draw_box->Size = System::Drawing::Size(85, 67);
			this->draw_box->TabIndex = 4;
			this->draw_box->TabStop = false;
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(12, 468);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(254, 26);
			this->progressBar1->TabIndex = 5;
			this->progressBar1->Value = 20;
			// 
			// date
			// 
			this->date->Location = System::Drawing::Point(566, 32);
			this->date->Name = L"date";
			this->date->Size = System::Drawing::Size(216, 20);
			this->date->TabIndex = 6;
			this->date->Value = System::DateTime(2021, 11, 29, 0, 0, 0, 0);
			this->date->Visible = false;
			this->date->ValueChanged += gcnew System::EventHandler(this, &MyForm::date_ValueChanged);
			// 
			// l_date
			// 
			this->l_date->AutoSize = true;
			this->l_date->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->l_date->Location = System::Drawing::Point(567, 68);
			this->l_date->Name = L"l_date";
			this->l_date->Size = System::Drawing::Size(0, 20);
			this->l_date->TabIndex = 7;
			this->l_date->Visible = false;
			// 
			// clb_date
			// 
			this->clb_date->CheckOnClick = true;
			this->clb_date->Cursor = System::Windows::Forms::Cursors::Hand;
			this->clb_date->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->clb_date->FormattingEnabled = true;
			this->clb_date->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"датапикер", L"дата" });
			this->clb_date->Location = System::Drawing::Point(440, 32);
			this->clb_date->Name = L"clb_date";
			this->clb_date->Size = System::Drawing::Size(120, 55);
			this->clb_date->TabIndex = 8;
			this->clb_date->ItemCheck += gcnew System::Windows::Forms::ItemCheckEventHandler(this, &MyForm::clb_date_ItemCheck);
			this->clb_date->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::checkedListBox1_SelectedIndexChanged);
			// 
			// rbtn
			// 
			this->rbtn->AutoSize = true;
			this->rbtn->Location = System::Drawing::Point(12, 181);
			this->rbtn->Name = L"rbtn";
			this->rbtn->Size = System::Drawing::Size(85, 17);
			this->rbtn->TabIndex = 9;
			this->rbtn->TabStop = true;
			this->rbtn->Text = L"radioButton1";
			this->rbtn->UseVisualStyleBackColor = true;
			this->rbtn->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn_CheckedChanged);
			// 
			// timer
			// 
			this->timer->Enabled = true;
			this->timer->Interval = 10000;
			this->timer->Tick += gcnew System::EventHandler(this, &MyForm::timer_Tick);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(313, 181);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(120, 95);
			this->listBox1->TabIndex = 10;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::HotTrack;
			this->ClientSize = System::Drawing::Size(795, 591);
			this->Controls->Add(this->rbtn);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->clb_date);
			this->Controls->Add(this->l_date);
			this->Controls->Add(this->date);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->draw_box);
			this->Controls->Add(this->l_thanks);
			this->Controls->Add(this->tb1);
			this->Controls->Add(this->tb2);
			this->Controls->Add(this->btn_click_me);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->draw_box))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_click_me_Click(System::Object^ sender, System::EventArgs^ e) {
		l_thanks->Text = "—пасибо!";
		btn_click_me->Text = "=)";
	}
private: System::Void tb1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	tb2->Text = tb1->Text;
}

private: System::Void date_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	/*draw_box->BackColor = System::Drawing::SystemColors::ActiveBorder;*/
	int const mount_month = 12;
	int i = 0;
	std::string M[mount_month]= { "€нвар€","феврал€","марта","апрел€","ма€","июн€","июл€","августа","сент€бр€","окт€бр€","но€бр€","декабр€" };
	std::string finily_text = std::to_string(date->Value.Day) + " " + M[date->Value.Month-1] + " " + std::to_string(date->Value.Year);
	System::String^ s = gcnew System::String(finily_text.c_str());
	/*l_date->Text = date->Value.Day.ToString() + " " + date->Value.Month.ToString() + " " + date->Value.Year.ToString();*/
	l_date->Text = s;
}
private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	int i = 0;
	/*out->Text = e.GetItemCheked(i).ToString();*/
	//for (int i = 0; i < clb_date->Items->Count; i++)
	//	if (clb_date->Checked[i]) {
	//		//...
	//	}
}
private: System::Void clb_date_ItemCheck(System::Object^ sender, System::Windows::Forms::ItemCheckEventArgs^ e) {
	if (e->Index == 0) {
		if (date->Visible) {
			date->Visible = false;
		}
		else {
			date->Visible = true;
		}
	}
	if (e->Index == 1) {
		if (l_date->Visible) {
			l_date->Visible = false;
		}
		else {
			l_date->Visible = true;
		}
	}
}
private: System::Void timer_Tick(System::Object^ sender, System::EventArgs^ e) {
	if (btn_click_me->Text != "=)") {
		btn_click_me->Text = "ѕќ∆јЋ”…—“ј\nѕќ∆јЋ”…—“ј";
	}
	else {
		btn_click_me->BackColor = System::Drawing::Color::GreenYellow;
		btn_click_me->ForeColor = System::Drawing::Color::Green;
	}
}

private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void rbtn_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
