//---------------------------------------------------------------------------
//
// Name:        cifradoCesarGraficoApp.h
// Author:      Usuario
// Created:     10/05/2017 12:29:43 p.m.
// Description: 
//
//---------------------------------------------------------------------------

#ifndef __CIFRADOCESARGRAFICOApp_h__
#define __CIFRADOCESARGRAFICOApp_h__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
#else
	#include <wx/wxprec.h>
#endif

class cifradoCesarGraficoApp : public wxApp
{
	public:
		bool OnInit();
		int OnExit();
};

#endif
