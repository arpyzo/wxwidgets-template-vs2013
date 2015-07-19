#if !defined ( __MAIN_H )
#define __MAIN_H

#include <wx/wx.h>

enum {
    MENU_ABOUT,
    MENU_QUIT
};

/************************** Frame **********************************/
class Frame: public wxFrame {
    public:
        Frame();
        void Setup_Menu();

        void Menu_About(wxCommandEvent &event);
        void Menu_Quit(wxCommandEvent &event);

    DECLARE_EVENT_TABLE()
};

/**************************** App **********************************/
class App: public wxApp {
    public:
        virtual bool OnInit();
};

#endif