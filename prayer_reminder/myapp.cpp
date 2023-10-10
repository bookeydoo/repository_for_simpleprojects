#include "myapp.h"
#include "Mainframe.h"
#include <wx/wx.h>
#include "Mainframe.cpp"



bool myapp::OnInit() {
	choiceframe* choiceframeinstance = new choiceframe("choose your language");
	choiceframeinstance->Show();
	choiceframeinstance->SetClientSize(1000, 500);
	choiceframeinstance->Refresh();
	choiceframeinstance->Update();
	

	choiceframeinstance->Center();

	


	return true;
}
wxIMPLEMENT_APP(myapp);
