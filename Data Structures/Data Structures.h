
// Data Structures.h: archivo de encabezado principal para la aplicaci�n Data Structures
//
#pragma once

#ifndef __AFXWIN_H__
	#error "incluir 'stdafx.h' antes de incluir este archivo para PCH"
#endif

#include "resource.h"       // S�mbolos principales


// CDataStructuresApp:
// Consulte la secci�n Data Structures.cpp para obtener informaci�n sobre la implementaci�n de esta clase
//

class CDataStructuresApp : public CWinApp
{
public:
	CDataStructuresApp();


// Reemplazos
public:
	virtual BOOL InitInstance();

// Implementaci�n
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CDataStructuresApp theApp;
