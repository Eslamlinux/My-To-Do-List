/***************************************************************
 * Name:      My_To_Do_ListApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Eslam Linux (linuxeslam@gmail.com)
 * Created:   2025-10-21
 * Copyright: Eslam Linux (https://eslamlinux.github.io/)
 * License:
 **************************************************************/

#include "My_To_Do_ListApp.h"

//(*AppHeaders
#include "My_To_Do_ListMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(My_To_Do_ListApp);

bool My_To_Do_ListApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
        My_To_Do_ListFrame* Frame = new My_To_Do_ListFrame(0);
        Frame->Show();
        SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
