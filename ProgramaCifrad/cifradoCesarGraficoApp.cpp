//---------------------------------------------------------------------------
//
// Name:        cifradoCesarGraficoApp.cpp
// Author:      Usuario
// Created:     10/05/2017 12:29:43 p.m.
// Description: 
//
//---------------------------------------------------------------------------

#include "cifradoCesarGraficoApp.h"
#include "cifradoCesarGrafico.h"

IMPLEMENT_APP(cifradoCesarGraficoApp)

bool cifradoCesarGraficoApp::OnInit()
{
    cifradoCesarGrafico* frame = new cifradoCesarGrafico(NULL);
    SetTopWindow(frame);
    frame->Show();
    return true;
}
 
int cifradoCesarGraficoApp::OnExit()
{
	return 0;
}
