/***************************************************************
 * Name:      My_To_Do_ListMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    Eslam Linux (linuxeslam@gmail.com)
 * Created:   2025-10-21
 * Copyright: Eslam Linux (https://eslamlinux.github.io/)
 * License:
 **************************************************************/

#include "My_To_Do_ListMain.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(My_To_Do_ListFrame)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(My_To_Do_ListFrame)
const long My_To_Do_ListFrame::ID_LISTBOX1 = wxNewId();
const long My_To_Do_ListFrame::ID_TEXTCTRL1 = wxNewId();
const long My_To_Do_ListFrame::ID_BUTTON1 = wxNewId();
const long My_To_Do_ListFrame::ID_BUTTON2 = wxNewId();
const long My_To_Do_ListFrame::ID_BUTTON3 = wxNewId();
const long My_To_Do_ListFrame::idMenuQuit = wxNewId();
const long My_To_Do_ListFrame::idMenuAbout = wxNewId();
const long My_To_Do_ListFrame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(My_To_Do_ListFrame,wxFrame)
    //(*EventTable(My_To_Do_ListFrame)
    //*)
END_EVENT_TABLE()

My_To_Do_ListFrame::My_To_Do_ListFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(My_To_Do_ListFrame)
    wxBoxSizer* BoxSizer1;
    wxBoxSizer* BoxSizer2;
    wxBoxSizer* BoxSizer3;
    wxGridSizer* GridSizer1;
    wxMenu* Menu1;
    wxMenu* Menu2;
    wxMenuBar* MenuBar1;
    wxMenuItem* MenuItem1;
    wxMenuItem* MenuItem2;
    wxStaticBoxSizer* StaticBoxSizer1;

    Create(parent, id, _("My To Do List"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
    GridSizer1 = new wxGridSizer(0, 0, 0, 0);
    StaticBoxSizer1 = new wxStaticBoxSizer(wxHORIZONTAL, this, _("To Do List"));
    BoxSizer2 = new wxBoxSizer(wxHORIZONTAL);
    ListBox1 = new wxListBox(this, ID_LISTBOX1, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_LISTBOX1"));
    BoxSizer2->Add(ListBox1, 1, wxALL|wxEXPAND, 5);
    StaticBoxSizer1->Add(BoxSizer2, 1, wxALL|wxEXPAND, 5);
    BoxSizer1 = new wxBoxSizer(wxVERTICAL);
    TextCtrl1 = new wxTextCtrl(this, ID_TEXTCTRL1, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
    BoxSizer1->Add(TextCtrl1, 1, wxALL|wxEXPAND, 5);
    BoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
    Button1 = new wxButton(this, ID_BUTTON1, _("Add "), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
    BoxSizer3->Add(Button1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button2 = new wxButton(this, ID_BUTTON2, _("Edit"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
    BoxSizer3->Add(Button2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button3 = new wxButton(this, ID_BUTTON3, _("Delete"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON3"));
    BoxSizer3->Add(Button3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer1->Add(BoxSizer3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticBoxSizer1->Add(BoxSizer1, 1, wxALL|wxALIGN_TOP, 5);
    GridSizer1->Add(StaticBoxSizer1, 1, wxALL|wxEXPAND, 5);
    SetSizer(GridSizer1);
    MenuBar1 = new wxMenuBar();
    Menu1 = new wxMenu();
    MenuItem1 = new wxMenuItem(Menu1, idMenuQuit, _("Quit\tAlt-F4"), _("Quit the application"), wxITEM_NORMAL);
    Menu1->Append(MenuItem1);
    MenuBar1->Append(Menu1, _("&File"));
    Menu2 = new wxMenu();
    MenuItem2 = new wxMenuItem(Menu2, idMenuAbout, _("About\tF1"), _("Show info about this application"), wxITEM_NORMAL);
    Menu2->Append(MenuItem2);
    MenuBar1->Append(Menu2, _("Help"));
    SetMenuBar(MenuBar1);
    StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
    int __wxStatusBarWidths_1[1] = { -1 };
    int __wxStatusBarStyles_1[1] = { wxSB_NORMAL };
    StatusBar1->SetFieldsCount(1,__wxStatusBarWidths_1);
    StatusBar1->SetStatusStyles(1,__wxStatusBarStyles_1);
    SetStatusBar(StatusBar1);
    GridSizer1->SetSizeHints(this);

    Connect(ID_LISTBOX1,wxEVT_COMMAND_LISTBOX_SELECTED,(wxObjectEventFunction)&My_To_Do_ListFrame::OnListBox1Select);
    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&My_To_Do_ListFrame::OnButton1Click);
    Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&My_To_Do_ListFrame::OnButton2Click);
    Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&My_To_Do_ListFrame::OnButton3Click);
    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&My_To_Do_ListFrame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&My_To_Do_ListFrame::OnAbout);
    //*)
}

My_To_Do_ListFrame::~My_To_Do_ListFrame()
{
    //(*Destroy(My_To_Do_ListFrame)
    //*)
}

void My_To_Do_ListFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void My_To_Do_ListFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = "welcome to MY To Do List ,Free and easy software\nMade with Love By Eslam Linux";
    wxMessageBox(msg, _("About..."));
}
int Counter =0;

void My_To_Do_ListFrame::OnButton1Click(wxCommandEvent& event)
{
    if(!TextCtrl1->GetValue().empty()){
    Counter++;
    ListBox1->AppendString(std::to_string(Counter) + " " + TextCtrl1->GetValue());
    }
    else{
        wxMessageBox("the text box cant be empty!!!");
    }
}

void My_To_Do_ListFrame::OnButton2Click(wxCommandEvent& event)
{
    if(!TextCtrl1->GetValue().empty()){
    int The_Item_Num = ListBox1->GetSelection();
    if(The_Item_Num >= 0)
    ListBox1->SetString(The_Item_Num,std::to_string(The_Item_Num +1) + " " + TextCtrl1->GetValue());
        else
        wxMessageBox("You Must Select One Item To Edit It");
    }
    else{
        wxMessageBox("the text box cant be empty!!!");
    }
}

void My_To_Do_ListFrame::OnListBox1Select(wxCommandEvent& event)
{
    int The_Item_Num = ListBox1->GetSelection();
    ListBox1->Deselect(The_Item_Num);
}

void My_To_Do_ListFrame::OnButton3Click(wxCommandEvent& event)
{
    int The_Item_Num = ListBox1->GetSelection();
    if(The_Item_Num >= 0)
    ListBox1->Delete(The_Item_Num);
    else
        wxMessageBox("You Must Select One Item To Delete It");
}
