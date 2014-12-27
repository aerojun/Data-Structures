
// Data Structures.h: archivo de encabezado principal para la aplicación Data Structures
//
#pragma once

#ifndef __AFXWIN_H__
	#error "incluir 'stdafx.h' antes de incluir este archivo para PCH"
#endif

#include "resource.h"       // Símbolos principales


// CDataStructuresApp:
// Consulte la sección Data Structures.cpp para obtener información sobre la implementación de esta clase
//

class CDataStructuresApp : public CWinApp
{
public:
	CDataStructuresApp();


// Reemplazos
public:
	virtual BOOL InitInstance();

// Implementación
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CDataStructuresApp theApp;
