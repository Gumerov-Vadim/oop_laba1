#pragma once
#include <iostream>
#include <string>
#define loc_x move_box1->Location.X
#define loc_y move_box1->Location.Y
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
	private: System::Windows::Forms::PictureBox^ move_box1;
	private: System::Windows::Forms::ProgressBar^ progressBar;



	private: System::Windows::Forms::DateTimePicker^ date;
	private: System::Windows::Forms::Label^ l_date;
	private: System::Windows::Forms::CheckedListBox^ clb_date;
	private: System::Windows::Forms::RadioButton^ rbtn_control;
	private: System::Windows::Forms::Timer^ timer;






	private: System::Windows::Forms::RadioButton^ radioButton2;

	private: System::Windows::Forms::PictureBox^ move_box2;
	private: System::Windows::Forms::PictureBox^ move_box3;
	private: System::Windows::Forms::PictureBox^ move_box4;
	private: System::Windows::Forms::NumericUpDown^ mage_height;
	private: System::Windows::Forms::Label^ label_change_to_grow;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->btn_click_me = (gcnew System::Windows::Forms::Button());
			this->tb2 = (gcnew System::Windows::Forms::TextBox());
			this->tb1 = (gcnew System::Windows::Forms::TextBox());
			this->l_thanks = (gcnew System::Windows::Forms::Label());
			this->move_box1 = (gcnew System::Windows::Forms::PictureBox());
			this->progressBar = (gcnew System::Windows::Forms::ProgressBar());
			this->date = (gcnew System::Windows::Forms::DateTimePicker());
			this->l_date = (gcnew System::Windows::Forms::Label());
			this->clb_date = (gcnew System::Windows::Forms::CheckedListBox());
			this->rbtn_control = (gcnew System::Windows::Forms::RadioButton());
			this->timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->move_box2 = (gcnew System::Windows::Forms::PictureBox());
			this->move_box3 = (gcnew System::Windows::Forms::PictureBox());
			this->move_box4 = (gcnew System::Windows::Forms::PictureBox());
			this->mage_height = (gcnew System::Windows::Forms::NumericUpDown());
			this->label_change_to_grow = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->move_box1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->move_box2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->move_box3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->move_box4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mage_height))->BeginInit();
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
			// move_box1
			// 
			this->move_box1->BackColor = System::Drawing::SystemColors::Control;
			this->move_box1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"move_box1.BackgroundImage")));
			this->move_box1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->move_box1->Location = System::Drawing::Point(12, 245);
			this->move_box1->Name = L"move_box1";
			this->move_box1->Size = System::Drawing::Size(72, 61);
			this->move_box1->TabIndex = 4;
			this->move_box1->TabStop = false;
			// 
			// progressBar
			// 
			this->progressBar->Location = System::Drawing::Point(12, 468);
			this->progressBar->Name = L"progressBar";
			this->progressBar->Size = System::Drawing::Size(555, 26);
			this->progressBar->TabIndex = 5;
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
			// rbtn_control
			// 
			this->rbtn_control->AutoSize = true;
			this->rbtn_control->Location = System::Drawing::Point(12, 181);
			this->rbtn_control->Name = L"rbtn_control";
			this->rbtn_control->Size = System::Drawing::Size(147, 17);
			this->rbtn_control->TabIndex = 9;
			this->rbtn_control->TabStop = true;
			this->rbtn_control->Text = L"подключить управление";
			this->rbtn_control->UseVisualStyleBackColor = true;
			this->rbtn_control->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn_control_CheckedChanged);
			this->rbtn_control->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::rbtn_control_KeyDown);
			// 
			// timer
			// 
			this->timer->Enabled = true;
			this->timer->Interval = 10000;
			this->timer->Tick += gcnew System::EventHandler(this, &MyForm::timer_Tick);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(12, 204);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(140, 17);
			this->radioButton2->TabIndex = 12;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"отключить управление";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn_off_control_CheckedChanged);
			// 
			// move_box2
			// 
			this->move_box2->BackColor = System::Drawing::SystemColors::Control;
			this->move_box2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"move_box2.BackgroundImage")));
			this->move_box2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->move_box2->Location = System::Drawing::Point(116, 245);
			this->move_box2->Name = L"move_box2";
			this->move_box2->Size = System::Drawing::Size(72, 61);
			this->move_box2->TabIndex = 13;
			this->move_box2->TabStop = false;
			this->move_box2->Visible = false;
			// 
			// move_box3
			// 
			this->move_box3->BackColor = System::Drawing::SystemColors::Control;
			this->move_box3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"move_box3.BackgroundImage")));
			this->move_box3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->move_box3->Location = System::Drawing::Point(217, 245);
			this->move_box3->Name = L"move_box3";
			this->move_box3->Size = System::Drawing::Size(72, 61);
			this->move_box3->TabIndex = 14;
			this->move_box3->TabStop = false;
			this->move_box3->Visible = false;
			// 
			// move_box4
			// 
			this->move_box4->BackColor = System::Drawing::SystemColors::Control;
			this->move_box4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"move_box4.BackgroundImage")));
			this->move_box4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->move_box4->Location = System::Drawing::Point(318, 245);
			this->move_box4->Name = L"move_box4";
			this->move_box4->Size = System::Drawing::Size(72, 61);
			this->move_box4->TabIndex = 15;
			this->move_box4->TabStop = false;
			this->move_box4->Visible = false;
			// 
			// mage_height
			// 
			this->mage_height->Location = System::Drawing::Point(392, 184);
			this->mage_height->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 200, 0, 0, 0 });
			this->mage_height->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 61, 0, 0, 0 });
			this->mage_height->Name = L"mage_height";
			this->mage_height->Size = System::Drawing::Size(39, 20);
			this->mage_height->TabIndex = 16;
			this->mage_height->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 61, 0, 0, 0 });
			this->mage_height->Visible = false;
			this->mage_height->ValueChanged += gcnew System::EventHandler(this, &MyForm::mage_height_ValueChanged);
			// 
			// label_change_to_grow
			// 
			this->label_change_to_grow->AutoSize = true;
			this->label_change_to_grow->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_change_to_grow->Location = System::Drawing::Point(184, 181);
			this->label_change_to_grow->Name = L"label_change_to_grow";
			this->label_change_to_grow->Size = System::Drawing::Size(180, 20);
			this->label_change_to_grow->TabIndex = 17;
			this->label_change_to_grow->Text = L"измените, чтобы вырасти";
			this->label_change_to_grow->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::HotTrack;
			this->ClientSize = System::Drawing::Size(784, 591);
			this->Controls->Add(this->label_change_to_grow);
			this->Controls->Add(this->mage_height);
			this->Controls->Add(this->move_box4);
			this->Controls->Add(this->move_box3);
			this->Controls->Add(this->move_box2);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->rbtn_control);
			this->Controls->Add(this->clb_date);
			this->Controls->Add(this->l_date);
			this->Controls->Add(this->date);
			this->Controls->Add(this->progressBar);
			this->Controls->Add(this->move_box1);
			this->Controls->Add(this->l_thanks);
			this->Controls->Add(this->tb1);
			this->Controls->Add(this->tb2);
			this->Controls->Add(this->btn_click_me);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->move_box1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->move_box2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->move_box3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->move_box4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mage_height))->EndInit();
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
	   bool first_tick_value = true;
private: System::Void timer_Tick(System::Object^ sender, System::EventArgs^ e) {
	if (first_tick_value) {
		if (btn_click_me->Text != "=)") {
			btn_click_me->Text = "ѕќ∆јЋ”…—“ј\nѕќ∆јЋ”…—“ј";
		}
		else {
			btn_click_me->BackColor = System::Drawing::Color::GreenYellow;
			btn_click_me->ForeColor = System::Drawing::Color::Green;
		}
		first_tick_value = false;
	}
}

	   void move_box_invisible(){

		move_box1->Visible = false;
		move_box2->Visible = false;
		move_box3->Visible = false;
		move_box4->Visible = false;
	   }
private: System::Void rbtn_control_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if ((e->KeyValue == 65)&&(move_box1->Location.X>=12)) {
		move_box1->Location = System::Drawing::Point(loc_x - 10, loc_y);
		move_box2->Location = System::Drawing::Point(loc_x - 10, loc_y);
		move_box3->Location = System::Drawing::Point(loc_x - 10, loc_y);
		move_box4->Location = System::Drawing::Point(loc_x - 10, loc_y);
		move_box_invisible();
		move_box4->Visible = true;
		if (this->Width > 800) {
			this->Width -= 10;
			progressBar->Size = System::Drawing::Size(progressBar->Size.Width - 10, 26);
		}
		else if (progressBar->Size.Width > 555) {
			progressBar->Size = System::Drawing::Size(progressBar->Size.Width-10, 26);
		}
		else if(progressBar->Value>0){
			progressBar->Value -= 2;
		}
	}
	if (e->KeyValue == 68) {
		move_box1->Location = System::Drawing::Point(loc_x + 10, loc_y);
		move_box2->Location = System::Drawing::Point(loc_x + 10, loc_y);
		move_box3->Location = System::Drawing::Point(loc_x + 10, loc_y);
		move_box4->Location = System::Drawing::Point(loc_x + 10, loc_y);
		move_box_invisible();
		move_box2->Visible = true;
		if (progressBar->Value <= 98) {

			progressBar->Value += 2;
		}
		else {
			progressBar->Size = System::Drawing::Size(progressBar->Size.Width + 10, 26);
			if (progressBar->Size.Width > 788) {
				this->Width += 10;
			}
		}
	}
	if ((e->KeyValue == 83) && (move_box1->Location.Y<=400)) {
		move_box1->Location = System::Drawing::Point(loc_x, loc_y + 10);
		move_box2->Location = System::Drawing::Point(loc_x, loc_y + 10);
		move_box3->Location = System::Drawing::Point(loc_x, loc_y + 10);
		move_box4->Location = System::Drawing::Point(loc_x, loc_y + 10);
		move_box_invisible();
		move_box1->Visible = true;
	}
	if ((e->KeyValue == 87) && (move_box1->Location.Y >= 245)) {
		move_box1->Location = System::Drawing::Point(loc_x, loc_y - 10);
		move_box2->Location = System::Drawing::Point(loc_x, loc_y - 10);
		move_box3->Location = System::Drawing::Point(loc_x, loc_y - 10);
		move_box4->Location = System::Drawing::Point(loc_x, loc_y - 10);
		move_box_invisible();
		move_box3->Visible = true;
	}
	tb2->Text = e->KeyValue.ToString();

	//65 влево 68 вправо 87вверх 83 вниз
}
private: System::Void rbtn_control_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	mage_height->Visible = true;
	label_change_to_grow->Visible = true;

}
private: System::Void mage_height_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	int add_height = Convert::ToInt32(mage_height->Value);
	move_box1->Size = System::Drawing::Size(move_box1->Size.Width, add_height);
	move_box2->Size = System::Drawing::Size(move_box2->Size.Width, add_height);
	move_box3->Size = System::Drawing::Size(move_box3->Size.Width, add_height);
	move_box4->Size = System::Drawing::Size(move_box4->Size.Width, add_height);
}
private: System::Void rbtn_off_control_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	mage_height->Visible = false;
	label_change_to_grow->Visible = false;

}
};
}
