#pragma once
#include <wx/frame.h>
#include<wx/wx.h>


class Arabicframe : public wxFrame {
public:
	Arabicframe(const wxString& arabictitle);
	void onbutton1Click(wxCommandEvent& event);
};

class Englishframe :public wxFrame {
public:
	Englishframe(const wxString& Englishtitle);
	void onbutton2click(wxCommandEvent& evt);
};
