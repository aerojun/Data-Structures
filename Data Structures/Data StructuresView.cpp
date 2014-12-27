
// Data StructuresView.cpp: implementación de la clase CDataStructuresView
//

#include "stdafx.h"
// Se pueden definir SHARED_HANDLERS en un proyecto ATL implementando controladores de vista previa, miniatura
// y filtro de búsqueda, y permiten compartir código de documentos con ese proyecto.
#ifndef SHARED_HANDLERS
#include "Data Structures.h"
#endif

#include "Data StructuresDoc.h"
#include "Data StructuresView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDataStructuresView

IMPLEMENT_DYNCREATE(CDataStructuresView, CView)

BEGIN_MESSAGE_MAP(CDataStructuresView, CView)
END_MESSAGE_MAP()

// Construcción o destrucción de CDataStructuresView

CDataStructuresView::CDataStructuresView()
{
	// TODO: agregar aquí el código de construcción

}

CDataStructuresView::~CDataStructuresView()
{
}

BOOL CDataStructuresView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: modificar aquí la clase Window o los estilos cambiando
	//  CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// Dibujo de CDataStructuresView

void CDataStructuresView::OnDraw(CDC* pDC)
{
	CDataStructuresDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: agregar aquí el código de dibujo para datos nativos

	pDC->TextOutW(1100, 110, CString("PostOrden"));


	pDC->SetGraphicsMode(1);
}


// Diagnósticos de CDataStructuresView

#ifdef _DEBUG
void CDataStructuresView::AssertValid() const
{
	CView::AssertValid();
}

void CDataStructuresView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CDataStructuresDoc* CDataStructuresView::GetDocument() const // La versión de no depuración está alineada
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CDataStructuresDoc)));
	return (CDataStructuresDoc*)m_pDocument;
}
#endif //_DEBUG


// Controladores de mensaje de CDataStructuresView
