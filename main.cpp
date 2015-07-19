#include "debug.h"
#include "main.h"

IMPLEMENT_APP(App)

/***************************** Frame ******************************/
BEGIN_EVENT_TABLE(Frame,wxFrame)
    EVT_MENU    (MENU_ABOUT, Frame::Menu_About)
    EVT_MENU    (MENU_QUIT,  Frame::Menu_Quit)
END_EVENT_TABLE()

Frame::Frame() 
: wxFrame((wxFrame *)NULL, -1, "wxWidgets Template", wxPoint(100,100), wxSize(300,200)) {
    SetIcon(wxIcon("PROGRAM_ICON"));
    Setup_Menu();
}

void Frame::Setup_Menu() {
    wxMenuBar *menu_bar = new wxMenuBar();
    wxMenu *file_menu = new wxMenu();
    wxMenu *help_menu = new wxMenu();
    
    file_menu->Append(MENU_QUIT, "E&xit");
    menu_bar->Append(file_menu, "&File");

    help_menu->Append(MENU_ABOUT, "&About..");
    menu_bar->Append(help_menu, "&Help");

    SetMenuBar(menu_bar);
}

void Frame::Menu_About(wxCommandEvent &WXUNUSED(event)) {
    wxMessageBox("wxWidgets Template\nRobert Pyzalski 2014", "About..", wxICON_INFORMATION);
}

void Frame::Menu_Quit(wxCommandEvent &WXUNUSED(event)) {
    Close(TRUE);
}

/*************************** App_Class ****************************/
bool App::OnInit() {
    Frame *main_frame = new Frame();

    main_frame->Show(TRUE);
    return TRUE;
}
