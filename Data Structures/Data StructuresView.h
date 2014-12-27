
// Data StructuresView.h: interfaz de la clase CDataStructuresView
//

#pragma once
#include "DataDialog.h"

//Structures
#include "list.h"
#include "stack.h"
#include "queue.h"
#include "tree.h"
#include "threadedTree.h"


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
public:
	DataDialog vDialog;
	list vList;
	stack vStack;
	queue vQueue;
	tree vTree;
	threadedTree vTTree;


};

#ifndef _DEBUG  // Versión de depuración en Data StructuresView.cpp
inline CDataStructuresDoc* CDataStructuresView::GetDocument() const
   { return reinterpret_cast<CDataStructuresDoc*>(m_pDocument); }
#endif

