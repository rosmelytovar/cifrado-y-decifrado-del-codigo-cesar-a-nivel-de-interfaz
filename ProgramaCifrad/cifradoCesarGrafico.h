///-----------------------------------------------------------------
///
/// @file      cifradoCesarGrafico.h
/// @author    Usuario
/// Created:   10/05/2017 12:29:44 p.m.
/// @section   DESCRIPTION
///            cifradoCesarGrafico class declaration
///
///------------------------------------------------------------------

#ifndef __CIFRADOCESARGRAFICO_H__
#define __CIFRADOCESARGRAFICO_H__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
	#include <wx/frame.h>
#else
	#include <wx/wxprec.h>
#endif

//Do not add custom headers between 
//Header Include Start and Header Include End.
//wxDev-C++ designer will remove them. Add custom headers after the block.
////Header Include Start
#include <wx/menu.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/button.h>
////Header Include End

////Dialog Style Start
#undef cifradoCesarGrafico_STYLE
#define cifradoCesarGrafico_STYLE wxCAPTION | wxRESIZE_BORDER | wxSYSTEM_MENU | wxMINIMIZE_BOX | wxCLOSE_BOX
////Dialog Style End

class cifradoCesarGrafico : public wxFrame
{
	private:
		DECLARE_EVENT_TABLE();
		
	public:
		cifradoCesarGrafico(wxWindow *parent, wxWindowID id = 1, const wxString &title = wxT("cifradoCesarGrafico"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = cifradoCesarGrafico_STYLE);
		virtual ~cifradoCesarGrafico();
		void WxEdit1Updated(wxCommandEvent& event);
		void WxButton1Click(wxCommandEvent& event);
		void WxMemo1Updated(wxCommandEvent& event);
		void WxButton2Click(wxCommandEvent& event);
    //    void WxRichTextCtrl1BufferReset(wxRichTextEvent& event);
		void WxexitClick(wxCommandEvent& event);
		void WxMemo1Updated0(wxCommandEvent& event);
    void setCodifica(long n) {     	
	
	
	char letra;
	for (int i = 0; i < cadena.length(); i++) { 
       letra=cadena[i]; 
		if (letra >= 'a' && letra <= 'z') { 
            if (letra + n > 'z') { 
		                letra = 'a' - 'z' + letra + n - 1;
		            } else if (letra + n < 'a') { 
		                letra = 'z' - 'a' + letra + n + 1; 
		            } else { 
		                letra += n; 
		            } 
		        } else if (letra >= 'A' && letra <= 'Z') { 
		            if (letra + n > 'Z') { 
		                letra = 'A' - 'Z' + letra + n - 1; 
		            } else if (letra + n < 'A') { 
		                letra = 'Z' - 'A' + letra + n + 1; 
		            } else { 
		                letra += n; 
		            } 
		        }
		        cadena[i]=letra;
		    }
		      
}
    
    		
	private:
		//Do not add custom control declarations between
		//GUI Control Declaration Start and GUI Control Declaration End.
		//wxDev-C++ will remove them. Add custom code after the block.
		////GUI Control Declaration Start
		wxMenuBar *WxMenuBar1;
		wxStaticText *WxStaticText3;
		wxStaticText *WxStaticText2;
		wxStaticText *WxStaticText1;
		wxTextCtrl *WxMemo2;
		wxTextCtrl *WxMemo1;
		wxTextCtrl *WxEdit1;
		wxButton *WxButton2;
		wxButton *WxButton1;
		////GUI Control Declaration End
	    wxString cadena,n;
    	long numero;
	private:
		//Note: if you receive any error with these enum IDs, then you need to
		//change your old form code that are based on the #define control IDs.
		//#defines may replace a numeric value for the enum names.
		//Try copy and pasting the below block in your old form header files.
		enum
		{
			////GUI Enum Control ID Start
			ID_WXSTATICTEXT3 = 1016,
			ID_WXSTATICTEXT2 = 1015,
			ID_WXSTATICTEXT1 = 1014,
			ID_WXMEMO2 = 1006,
			ID_WXMEMO1 = 1004,
			ID_WXEDIT1 = 1003,
			ID_WXBUTTON2 = 1002,
			ID_WXBUTTON1 = 1001,
			////GUI Enum Control ID End
			ID_DUMMY_VALUE_ //don't remove this value unless you have other enum values
		};
		
	private:
		void OnClose(wxCloseEvent& event);
		void CreateGUIControls();
};

#endif
