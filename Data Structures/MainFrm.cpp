
// MainFrm.cpp : implementaci�n de la clase CMainFrame
//

#include "stdafx.h"
#include "Data Structures.h"

#include "MainFrm.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CMainFrame

IMPLEMENT_DYNCREATE(CMainFrame, CFrameWnd)

BEGIN_MESSAGE_MAP(CMainFrame, CFrameWnd)
END_MESSAGE_MAP()

// Construcci�n y destrucci�n de CMainFrame

CMainFrame::CMainFrame()
{
	// TODO: agregar aqu� el c�digo de inicializaci�n de miembros
}

CMainFrame::~CMainFrame()
{
}

BOOL CMainFrame::PreCreateWindow(CREATESTRUCT& cs)
{
	if( !CFrameWnd::PreCreateWindow(cs) )
		return FALSE;
	// TODO: modificar aqu� la clase Window o los estilos cambiando
	//  CREATESTRUCT cs

	return TRUE;
}

// Diagn�sticos de CMainFrame

#ifdef _DEBUG
void CMainFrame::AssertValid() const
{
	CFrameWnd::AssertValid();
}

void CMainFrame::Dump(CDumpContext& dc) const
{
	CFrameWnd::Dump(dc);
}
#endif //_DEBUG


// Controladores de mensajes de CMainFrame

