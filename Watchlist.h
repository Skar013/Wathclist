#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include <regex>
#include <msclr\marshal_cppstd.h>
namespace Wathclist {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	
	/// <summary>
	/// Summary for Watchlist
	/// </summary>
	public ref class Watchlist : public System::Windows::Forms::Form
	{
	
	public:
		Watchlist(void)
		{
		
			this->TransparencyKey = Color::Ivory;
			InitializeComponent();
	
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Watchlist()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ startBtn;
	
	private: System::Windows::Forms::TextBox^ textAddFilmName;
	private: System::Windows::Forms::Button^ addToWatchlist;
	private: System::Windows::Forms::Button^ viewWatchlist;
	private: System::Windows::Forms::Label^ labelHint;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::PictureBox^ goBack;
	private: System::Windows::Forms::Button^ webBtn;
	private: System::Windows::Forms::Button^ delFromList;
	private: System::Windows::Forms::Button^ clearListBtn;





	
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Watchlist::typeid));
			this->startBtn = (gcnew System::Windows::Forms::Button());
			this->textAddFilmName = (gcnew System::Windows::Forms::TextBox());
			this->addToWatchlist = (gcnew System::Windows::Forms::Button());
			this->viewWatchlist = (gcnew System::Windows::Forms::Button());
			this->labelHint = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->goBack = (gcnew System::Windows::Forms::PictureBox());
			this->webBtn = (gcnew System::Windows::Forms::Button());
			this->delFromList = (gcnew System::Windows::Forms::Button());
			this->clearListBtn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->goBack))->BeginInit();
			this->SuspendLayout();
			// 
			// startBtn
			// 
			this->startBtn->Location = System::Drawing::Point(140, 131);
			this->startBtn->Name = L"startBtn";
			this->startBtn->Size = System::Drawing::Size(75, 23);
			this->startBtn->TabIndex = 0;
			this->startBtn->Text = L"Get Started";
			this->startBtn->UseVisualStyleBackColor = true;
			this->startBtn->Click += gcnew System::EventHandler(this, &Watchlist::startBtn_Click);
			// 
			// textAddFilmName
			// 
			this->textAddFilmName->Font = (gcnew System::Drawing::Font(L"Segoe Script", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textAddFilmName->Location = System::Drawing::Point(148, 139);
			this->textAddFilmName->MaxLength = 100;
			this->textAddFilmName->Name = L"textAddFilmName";
			this->textAddFilmName->Size = System::Drawing::Size(100, 33);
			this->textAddFilmName->TabIndex = 1;
			this->textAddFilmName->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textAddFilmName->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Watchlist::textAddFilmName_KeyDown);
			this->textAddFilmName->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Watchlist::textAddFilmName_KeyPress);
			// 
			// addToWatchlist
			// 
			this->addToWatchlist->Location = System::Drawing::Point(156, 147);
			this->addToWatchlist->Name = L"addToWatchlist";
			this->addToWatchlist->Size = System::Drawing::Size(75, 23);
			this->addToWatchlist->TabIndex = 2;
			this->addToWatchlist->Text = L"add To watchlist";
			this->addToWatchlist->UseVisualStyleBackColor = true;
			this->addToWatchlist->Click += gcnew System::EventHandler(this, &Watchlist::addToWatchlist_Click);
			// 
			// viewWatchlist
			// 
			this->viewWatchlist->Location = System::Drawing::Point(164, 155);
			this->viewWatchlist->Name = L"viewWatchlist";
			this->viewWatchlist->Size = System::Drawing::Size(75, 23);
			this->viewWatchlist->TabIndex = 3;
			this->viewWatchlist->Text = L"view Wathclist";
			this->viewWatchlist->UseVisualStyleBackColor = true;
			this->viewWatchlist->Click += gcnew System::EventHandler(this, &Watchlist::viewWatchlist_Click);
			// 
			// labelHint
			// 
			this->labelHint->AutoSize = true;
			this->labelHint->Location = System::Drawing::Point(156, 147);
			this->labelHint->Name = L"labelHint";
			this->labelHint->Size = System::Drawing::Size(35, 13);
			this->labelHint->TabIndex = 4;
			this->labelHint->Text = L"label1";
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::Color::Black;
			this->listBox1->Font = (gcnew System::Drawing::Font(L"SimSun", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->listBox1->ForeColor = System::Drawing::Color::Green;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 19;
			this->listBox1->Location = System::Drawing::Point(172, 163);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(120, 80);
			this->listBox1->TabIndex = 0;
			this->listBox1->Click += gcnew System::EventHandler(this, &Watchlist::listBox1_Click);
			// 
			// goBack
			// 
			this->goBack->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"goBack.BackgroundImage")));
			this->goBack->Cursor = System::Windows::Forms::Cursors::Hand;
			this->goBack->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"goBack.Image")));
			this->goBack->Location = System::Drawing::Point(50, 50);
			this->goBack->Name = L"goBack";
			this->goBack->Size = System::Drawing::Size(64, 64);
			this->goBack->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->goBack->TabIndex = 0;
			this->goBack->TabStop = false;
			this->goBack->Click += gcnew System::EventHandler(this, &Watchlist::startBtn_Click);
			// 
			// webBtn
			// 
			this->webBtn->Location = System::Drawing::Point(0, 0);
			this->webBtn->Name = L"webBtn";
			this->webBtn->Size = System::Drawing::Size(75, 23);
			this->webBtn->TabIndex = 0;
			this->webBtn->Text = L"web search";
			this->webBtn->UseVisualStyleBackColor = true;
			this->webBtn->Click += gcnew System::EventHandler(this, &Watchlist::webBtn_Click);
			// 
			// delFromList
			// 
			this->delFromList->Location = System::Drawing::Point(8, 8);
			this->delFromList->Name = L"delFromList";
			this->delFromList->Size = System::Drawing::Size(75, 23);
			this->delFromList->TabIndex = 1;
			this->delFromList->Text = L"delete from list";
			this->delFromList->UseVisualStyleBackColor = true;
			this->delFromList->Click += gcnew System::EventHandler(this, &Watchlist::delFromList_Click);
			// 
			// clearListBtn
			// 
			this->clearListBtn->Location = System::Drawing::Point(16, 16);
			this->clearListBtn->Name = L"clearListBtn";
			this->clearListBtn->Size = System::Drawing::Size(75, 23);
			this->clearListBtn->TabIndex = 2;
			this->clearListBtn->Text = L"clear the list";
			this->clearListBtn->UseVisualStyleBackColor = true;
			this->clearListBtn->Click += gcnew System::EventHandler(this, &Watchlist::clearListBtn_Click);
			// 
			// Watchlist
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 11);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Ivory;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(933, 508);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->Font = (gcnew System::Drawing::Font(L"SimSun", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Watchlist";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Watchlist";
			this->Load += gcnew System::EventHandler(this, &Watchlist::Watchlist_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->goBack))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		std::string StringTostring(System::String^ str) {

			return msclr::interop::marshal_as<std::string>(str);
		}

		System::String^ stringToString(std::string str){return  msclr::interop::marshal_as<String^>(str);
		}

		int halfPos(int max, int min) { return max / 2 - min / 2; }


		void fillTheList() {
			this->listBox1->Items->Clear();
			std::ifstream inFile(this->filename);
			std::string str;
			String^ str2 ;

		
						while (inFile.good())
						{
							std::getline(inFile, str);

							str2 += this->stringToString(str)+"\n";
						}

						if (str2->Length > 1)
						{
							str2=str2->Substring(0, str2->Length-2);



						array<String^>^ arr = str2->Split('\n');


						for each (String ^ lines in arr)
							this->listBox1->Items->Add(lines);
						}

						

		}

		const char * filename = "Watchlist.txt";
		int height = 600, width = 800;
		int startBtnHeight = 50, startBtnWidth = 200;
		int startBtnPosX =halfPos(width,startBtnWidth);
		int startBtnPosY = halfPos(height, startBtnHeight);
		int textAddFilmNameWidth = 400;
		int textAddFilmNamePosX = halfPos(width, textAddFilmNameWidth);
		int textAddFilmNamePosY= height / 2 - 100;
		int viewWatchlistWidth,addToWatchlistWidth=viewWatchlistWidth= 150, viewWatchListHeight ,addToWatchlistHeight=viewWatchListHeight=30;
		int viewWatchlistPosX = width - (viewWatchlistWidth + 50);
		int addToWatchlistPosX = halfPos(width, addToWatchlistWidth);
		int listBoxWidth = 500, listBoxHeight = height - 100;
		int listBoxPosX = halfPos(width, listBoxWidth);
		int controlBtnWidth = 160, controlBtnHeight = 30;
		int selectedItem=-1;
		System::Drawing::Size mainFrame = System::Drawing::Size(width, height);
		

	private: System::Void Watchlist_Load(System::Object^ sender, System::EventArgs^ e) {
	
		
		this->ClientSize =mainFrame ;
		this->MaximumSize = mainFrame;
		this->MinimumSize = mainFrame;
		
		this->startBtn->Size = System::Drawing::Size(this->startBtnWidth, this->startBtnHeight);
		this->startBtn->Location = System::Drawing::Point(this->startBtnPosX,this->startBtnPosY);


		this->textAddFilmName->Size = System::Drawing::Size(this->textAddFilmNameWidth, this->textAddFilmName->Height);
		this->textAddFilmName->Location = System::Drawing::Point(this->textAddFilmNamePosX, this->textAddFilmNamePosY);

		this->viewWatchlist->Size = System::Drawing::Size(this->viewWatchlistWidth, this->viewWatchListHeight);
		this->viewWatchlist->Location = System::Drawing::Point(this->viewWatchlistPosX, 50);

		this->addToWatchlist->Size = System::Drawing::Size(this->addToWatchlistWidth, this->addToWatchlistHeight);
		this->addToWatchlist->Location = System::Drawing::Point(this->addToWatchlistPosX, this->textAddFilmNamePosY+50);


		this->listBox1->Size = System::Drawing::Size(this->listBoxWidth,this->listBoxHeight);
		this->listBox1->Location = System::Drawing::Point(this->listBoxPosX, 50);

		this->webBtn->Size = System::Drawing::Size(this->controlBtnWidth, this->controlBtnHeight);
		this->webBtn->Location = System::Drawing::Point(this->listBoxPosX, 10);

		this->delFromList->Size = System::Drawing::Size(this->controlBtnWidth, this->controlBtnHeight);
		this->delFromList->Location = System::Drawing::Point(this->listBoxPosX+this->controlBtnWidth+10, 10);


		this->clearListBtn->Size = System::Drawing::Size(this->controlBtnWidth, this->controlBtnHeight);
		this->clearListBtn->Location = System::Drawing::Point(this->listBoxPosX + 2*(this->controlBtnWidth + 10), 10);
		
	


		this->Controls->Add(this->startBtn);
		
	}
	private: System::Void startBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Controls->Clear();
		this->Controls->Add(this->viewWatchlist);
		this->Controls->Add(this->addToWatchlist);
		this->Controls->Add(this->textAddFilmName);

		this->textAddFilmName->Focus();
	}
private: System::Void addToWatchlist_Click(System::Object^ sender, System::EventArgs^ e) {

	if (!this->textAddFilmName->Text->Length) {

		MessageBox::Show("field is empty");
		this->textAddFilmName->Focus();
	}

	else {
		
		std::ofstream outFile(this->filename,std::fstream::in| std::fstream::out| std::fstream::app);

		if (outFile.is_open())
		{
			outFile << this->StringTostring(this->textAddFilmName->Text->ToString()) << std::endl;
			outFile.close();
			MessageBox::Show("done!");
			this->textAddFilmName->Text = "";
			this->textAddFilmName->Focus();
			outFile.close();
		}
			
	}
}
private: System::Void viewWatchlist_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Controls->Clear();
	
	this->Controls->Add(this->listBox1);
	this->Controls->Add(this->goBack);
	this->Controls->Add(this->clearListBtn);
	this->Controls->Add(this->delFromList);
	this->Controls->Add(this->webBtn);

	this->fillTheList();
}

private: System::Void clearListBtn_Click(System::Object^ sender, System::EventArgs^ e) {

	std::ofstream newFile(this->filename);

	if (newFile.is_open())
		newFile.close();

	MessageBox::Show("done!");
	this->listBox1->ClearSelected();
	this->listBox1->Items->Clear();
	this->selectedItem = -1;
}
private: System::Void delFromList_Click(System::Object^ sender, System::EventArgs^ e) {

	if(this->selectedItem>=0){
		std::ofstream outFile(this->filename);

		if (outFile.is_open())

		{
			int i = 0;
			for each (String ^ lines in this->listBox1->Items)
			{
				if(i++!=this->selectedItem)
				outFile << this->StringTostring(lines) << std::endl;
			}

			outFile.close();
			this->listBox1->ClearSelected();
			this->listBox1->Items->Clear();
			this->selectedItem = -1;
			this->fillTheList();
		}
			


	
	}
	
	else MessageBox::Show("no item selected");
	
}
private: System::Void listBox1_Click(System::Object^ sender, System::EventArgs^ e) {

	this->selectedItem = this->listBox1->SelectedIndex;

	

}
private: System::Void webBtn_Click(System::Object^ sender, System::EventArgs^ e) {

	

	if (this->selectedItem >= 0)

	{
		std::regex regX("\\ ");
		std::string s = this->StringTostring(this->listBox1->Items[this->selectedItem]->ToString());
		std::string str = "start chrome  http://google.com/search?q=" + std::regex_replace(s,regX, "+");

		
		int m = str.size();
		const int n =200;

		char arr[n];
		
		int i = 0;
		for each (char x in str) {
			if (i == m-1)
			{

				arr[i] = x;
				arr[m] = '\0';
			}
			else
			{
				arr[i++] = x;
			}
			
		}
		
		
		system(arr);


	}
	else  MessageBox::Show("no item selected");
		
}
private: System::Void textAddFilmName_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {


	if (e->KeyChar == 13)
		this->addToWatchlist->PerformClick();

	
		
}
private: System::Void textAddFilmName_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {

	if (e->Control && e->KeyValue == 8)
		this->textAddFilmName->Text = "";
}
};
}
