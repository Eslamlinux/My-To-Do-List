/***************************************************************
 * Name:      My_To_Do_ListMain.h
 * Purpose:   Defines Application Frame
 * Author:    Eslam Linux (linuxeslam@gmail.com)
 * Created:   2025-10-21
 * Copyright: Eslam Linux (https://eslamlinux.github.io/)
 * License:
 **************************************************************/

#ifndef MY_TO_DO_LISTMAIN_H
#define MY_TO_DO_LISTMAIN_H

//(*Headers(My_To_Do_ListFrame)
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/listbox.h>
#include <wx/menu.h>
#include <wx/sizer.h>
#include <wx/statusbr.h>
#include <wx/textctrl.h>
//*)

class My_To_Do_ListFrame: public wxFrame
{
    public:

        My_To_Do_ListFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~My_To_Do_ListFrame();

    private:

        //(*Handlers(My_To_Do_ListFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnButton1Click(wxCommandEvent& event);
        void OnButton2Click(wxCommandEvent& event);
        void OnListBox1Select(wxCommandEvent& event);
        void OnButton3Click(wxCommandEvent& event);
        void OnButton4Click(wxCommandEvent& event);
        //*)

        //(*Identifiers(My_To_Do_ListFrame)
        static const long ID_LISTBOX1;
        static const long ID_TEXTCTRL1;
        static const long ID_BUTTON1;
        static const long ID_BUTTON2;
        static const long ID_BUTTON3;
        static const long ID_BUTTON4;
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(My_To_Do_ListFrame)
        wxButton* Button1;
        wxButton* Button2;
        wxButton* Button3;
        wxButton* Button4;
        wxListBox* ListBox1;
        wxStatusBar* StatusBar1;
        wxTextCtrl* TextCtrl1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // MY_TO_DO_LISTMAIN_H
