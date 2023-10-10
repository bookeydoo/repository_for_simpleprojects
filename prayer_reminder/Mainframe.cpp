#include "Mainframe.h"
#include<wx/wx.h>



Arabicframe::Arabicframe(const wxString& arabictitle) : wxFrame(nullptr, wxID_ANY, arabictitle) {

	wxPanel* mainpanel = new wxPanel(this, wxID_ANY,wxDefaultPosition,wxSize(500,500));

	mainpanel->SetBackgroundColour(wxColor(255, 187, 51));
	wxButton* firstbutton = new wxButton(mainpanel, wxID_ANY, "الاعدادات", wxPoint(300, 190), wxSize(100, 100));
	wxCheckBox* firstprayer = new wxCheckBox(mainpanel, wxID_ANY, "صلاة الصبح", wxPoint(100, 60), wxSize(100, 50));
	wxCheckBox* secondprayer = new wxCheckBox(mainpanel, wxID_ANY, "صلاة الظهر", wxPoint(100, 160), wxSize(100, 50));
	wxCheckBox* thirdprayer = new wxCheckBox(mainpanel, wxID_ANY, "صلاة العصر", wxPoint(100, 260), wxSize(100, 50));
	wxCheckBox* fourthprayer = new wxCheckBox(mainpanel, wxID_ANY, "صلاة المغرب", wxPoint(100, 360), wxSize(100, 50));
	wxCheckBox* fifthprayer = new wxCheckBox(mainpanel, wxID_ANY, "صلاة العشاء", wxPoint(100, 460), wxSize(100, 50));
	wxStaticText* text1 = new wxStaticText(mainpanel, wxID_ANY, "صلاتك هي نجاتك و راس مالك", wxPoint(200, 30), wxSize(100, 50));
	
	
}

 

 Englishframe::Englishframe(const wxString& Englishtitle) :wxFrame(nullptr, wxID_ANY, Englishtitle) {
	 wxPanel* mainpanel = new wxPanel(this, wxID_ANY,wxDefaultPosition,wxSize(500,500));
	 mainpanel->SetBackgroundColour(wxColor(100, 50, 250));
	 wxButton* firstbutton = new wxButton(mainpanel, wxID_ANY, "settings", wxPoint(300, 190), wxSize(100, 100));
	 wxCheckBox* firstprayer = new wxCheckBox(mainpanel, wxID_ANY, "dawn prayer", wxPoint(100, 60), wxSize(100, 50));
	 wxCheckBox* secondprayer = new wxCheckBox(mainpanel, wxID_ANY, "noon prayer", wxPoint(100, 160), wxSize(100, 50));
	 wxCheckBox* thirdprayer = new wxCheckBox(mainpanel, wxID_ANY, "afternoon prayer", wxPoint(100, 260), wxSize(100, 50));
	 wxCheckBox* fourthprayer = new wxCheckBox(mainpanel, wxID_ANY, "dusk prayer", wxPoint(100, 360), wxSize(100, 50));
	 wxCheckBox* fifthprayer = new wxCheckBox(mainpanel, wxID_ANY, "night prayer", wxPoint(100, 460), wxSize(100, 50));
	 wxStaticText* text1 = new wxStaticText(mainpanel, wxID_ANY, "صلاتك هي نجاتك و راس مالك", wxPoint(200, 30), wxSize(100, 50));
	 
 }
 
 class choiceframe :public wxFrame {
 private:
	 Arabicframe* arabic;
	 Englishframe* english;

 public:
	 choiceframe(const wxString& choicetitle) :wxFrame(nullptr, wxID_ANY, choicetitle) {
		 arabic = new Arabicframe("arabic title");
		 english = new Englishframe("english title");

		 wxPanel* mainpanel = new wxPanel(this, wxID_ANY,wxDefaultPosition,wxDefaultSize);
		 wxButton* firstbutton = new wxButton(mainpanel, wxID_ANY, "العربية", wxPoint(300, 50), wxSize(150, 50));
		 wxButton* secondbutton = new wxButton(mainpanel, wxID_ANY, "english", wxPoint(500, 50), wxSize(150, 50));

		 firstbutton->Bind(wxEVT_BUTTON, &choiceframe::onbutton1Click, this);
		 firstbutton->SetBackgroundColour(wxColor(0,213,255));
		 secondbutton->Bind(wxEVT_BUTTON, &choiceframe::onbutton2click, this);
		 secondbutton->SetBackgroundColour(wxColor(0,179,179));
		 wxBoxSizer* sizer = new wxBoxSizer(wxHORIZONTAL);
		 sizer->Add(firstbutton, 1, wxEXPAND);
		 sizer->Add(secondbutton, 1, wxEXPAND);
		 mainpanel->SetSizer(sizer);
		 mainpanel->Layout();
	 }

	 void onbutton1Click(wxCommandEvent& event) {
		 arabic->Show();
		 arabic->Refresh();
		 arabic->Update();
		 
	 }

	 void onbutton2click(wxCommandEvent& event) {
		 english->Show();
		 english->Refresh();
		 english->Update();
		 
	 }
 };
