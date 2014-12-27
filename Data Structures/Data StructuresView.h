
// Data StructuresView.h: interfaz de la clase CDataStructuresView
//

#pragma once


class CDataStructuresView : public CView
{
protected: // Crear sólo a partir de serialización
	CDataStructuresView();
	DECLARE_DYNCREATE(CDataStructuresView)

// Atributos
public:
	CDataStructuresDoc* GetDocument() const;

// Operaciones
public:

// Reemplazos
public:
	virtual void OnDraw(CDC* pDC);  // Reemplazado para dibujar esta vista
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// Implementación
public:
	virtual ~CDataStructuresView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Funciones de asignación de mensajes generadas
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // Versión de depuración en Data StructuresView.cpp
inline CDataStructuresDoc* CDataStructuresView::GetDocument() const
   { return reinterpret_cast<CDataStructuresDoc*>(m_pDocument); }
#endif

