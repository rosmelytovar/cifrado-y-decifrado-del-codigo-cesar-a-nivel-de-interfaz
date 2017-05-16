///-----------------------------------------------------------------
///
/// @file      cifradoCesarGrafico.cpp
/// @author    Usuario
/// Created:   10/05/2017 12:29:44 p.m.
/// @section   DESCRIPTION
///            cifradoCesarGrafico class implementation
///
///------------------------------------------------------------------

#include "cifradoCesarGrafico.h"

//Do not add custom headers between
//Header Include Start and Header Include End
//wxDev-C++ designer will remove them
////Header Include Start
////Header Include End

//----------------------------------------------------------------------------
// cifradoCesarGrafico
//----------------------------------------------------------------------------
//Add Custom Events only in the appropriate block.
//Code added in other places will be removed by wxDev-C++
////Event Table Start
BEGIN_EVENT_TABLE(cifradoCesarGrafico,wxFrame)
	////Manual Code Start
	////Manual Code End
	
	EVT_CLOSE(cifradoCesarGrafico::OnClose)
	EVT_ACTIVATE(cifradoCesarGrafico::WxMenuBar1Activate) //
	
	EVT_TEXT(ID_WXEDIT1,cifradoCesarGrafico::WxEdit1Updated)
	EVT_BUTTON(ID_WXBUTTON2,cifradoCesarGrafico::WxButton2Click)
	EVT_BUTTON(ID_WXBUTTON1,cifradoCesarGrafico::WxButton1Click)
END_EVENT_TABLE()
////Event Table End

cifradoCesarGrafico::cifradoCesarGrafico(wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &position, const wxSize& size, long style)
: wxFrame(parent, id, title, position, size, style)
{
	CreateGUIControls();
}

cifradoCesarGrafico::~cifradoCesarGrafico()
{
}

void cifradoCesarGrafico::CreateGUIControls()
{
	//Do not add custom code between
	//GUI Items Creation Start and GUI Items Creation End
	//wxDev-C++ designer will remove them.
	//Add the custom code before or after the blocks
	////GUI Items Creation Start

	WxMenuBar1 = new wxMenuBar();
	wxMenu *wxID_FILE_Mnu_Obj = new wxMenu();
	wxID_FILE_Mnu_Obj->Append(wxID_OPEN, _("Abrir"), _(""), wxITEM_NORMAL);
	wxID_FILE_Mnu_Obj->Append(wxID_NEW, _("Nuevo"), _(""), wxITEM_NORMAL);
	wxID_FILE_Mnu_Obj->Append(wxID_SAVE, _("Guardar"), _(""), wxITEM_NORMAL);
	wxID_FILE_Mnu_Obj->Append(wxID_SAVEAS, _("Guardar como"), _(""), wxITEM_NORMAL);
	wxID_FILE_Mnu_Obj->Append(wxID_EXIT, _("Salir"), _(""), wxITEM_NORMAL);
	WxMenuBar1->Append(wxID_FILE_Mnu_Obj, _("Archivo"));
	SetMenuBar(WxMenuBar1);

	WxStaticText3 = new wxStaticText(this, ID_WXSTATICTEXT3, _("Mensaje codificado"), wxPoint(8, 291), wxDefaultSize, 0, _("WxStaticText3"));
	WxStaticText3->SetFont(wxFont(14, wxSWISS, wxNORMAL, wxBOLD, false, _("Segoe UI Semibold")));

	WxStaticText2 = new wxStaticText(this, ID_WXSTATICTEXT2, _(" Mensaje original"), wxPoint(12, 177), wxDefaultSize, 0, _("WxStaticText2"));
	WxStaticText2->SetFont(wxFont(14, wxSWISS, wxNORMAL, wxBOLD, false, _("Segoe UI Semibold")));

	WxStaticText1 = new wxStaticText(this, ID_WXSTATICTEXT1, _("Ingrese un numero"), wxPoint(180, 70), wxDefaultSize, 0, _("WxStaticText1"));
	WxStaticText1->SetFont(wxFont(12, wxSWISS, wxNORMAL, wxBOLD, false, _("Segoe UI Semibold")));

	WxMemo2 = new wxTextCtrl(this, ID_WXMEMO2, wxEmptyString, wxPoint(182, 251), wxSize(363, 101), wxTE_MULTILINE, wxDefaultValidator, _("WxMemo2"));
	WxMemo2->SetMaxLength(0);
	WxMemo2->AppendText(_(""));
	WxMemo2->SetFocus();
	WxMemo2->SetInsertionPointEnd();
	WxMemo2->SetBackgroundColour(wxColour(0,255,255));

	WxMemo1 = new wxTextCtrl(this, ID_WXMEMO1, wxEmptyString, wxPoint(182, 136), wxSize(362, 99), wxTE_MULTILINE, wxDefaultValidator, _("WxMemo1"));
	WxMemo1->SetMaxLength(0);
	WxMemo1->AppendText(_(""));
	WxMemo1->SetFocus();
	WxMemo1->SetInsertionPointEnd();
	WxMemo1->SetBackgroundColour(wxColour(255,128,255));

	WxEdit1 = new wxTextCtrl(this, ID_WXEDIT1, _(""), wxPoint(180, 94), wxSize(139, 29), 0, wxTextValidator(wxFILTER_NUMERIC, NULL), _("WxEdit1"));
	WxEdit1->SetBackgroundColour(wxColour(0,255,128));

	WxButton2 = new wxButton(this, ID_WXBUTTON2, _("Decodificar"), wxPoint(470, 92), wxSize(75, 30), 0, wxDefaultValidator, _("WxButton2"));
	WxButton2->SetBackgroundColour(wxColour(128,255,255));

	WxButton1 = new wxButton(this, ID_WXBUTTON1, _("Codificar"), wxPoint(361, 91), wxSize(76, 32), 0, wxDefaultValidator, _("WxButton1"));
	WxButton1->SetBackgroundColour(wxColour(255,128,255));

	SetTitle(_("cifradoCesarGrafico"));
	SetIcon(wxNullIcon);
	SetSize(8,8,601,400);
	Center();
	
	////GUI Items Creation End
}

void cifradoCesarGrafico::OnClose(wxCloseEvent& event)
{
	Destroy();
}

/*
 * WxEdit1Updated
 */
void cifradoCesarGrafico::WxEdit1Updated(wxCommandEvent& event)
{
	// insert your code here
}

/*
 * WxButton1Click
 */
void cifradoCesarGrafico::WxButton1Click(wxCommandEvent& event)
{
	n=WxEdit1->GetValue();
    if(!n.ToLong(&numero)){}
	cadena=WxMemo1->GetValue();
    setCodifica(-numero);
    // insert your code here
	WxMemo2->SetValue(cadena); 
}

/*
 * WxMemo1Updated
 */
void cifradoCesarGrafico::WxMemo1Updated(wxCommandEvent& event)
{
	// insert your code here
}


/*
 * WxButton2Click
 */
void cifradoCesarGrafico::WxButton2Click(wxCommandEvent& event)
{
	n=WxEdit1->GetValue();
    if(!n.ToLong(&numero)){}
	cadena=WxMemo2->GetValue();
    // insert your code here
	setCodifica(numero);
	WxMemo1->SetValue(cadena);  
}

/*
 * WxexitClick
 */


/*
 * WxMemo1Updated0
 */


/*
 * WxRichTextCtrl1BufferReset
 */
/*void cifradoCesarGrafico::WxRichTextCtrl1BufferReset(wxRichTextEvent& event)
{
	// insert your code here
}*/
