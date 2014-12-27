
// Data StructuresDoc.h: interfaz de la clase CDataStructuresDoc
//


#pragma once


class CDataStructuresDoc : public CDocument
{
protected: // Crear sólo a partir de serialización
	CDataStructuresDoc();
	DECLARE_DYNCREATE(CDataStructuresDoc)

// Atributos
public:

// Operaciones
public:

// Reemplazos
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// Implementación
public:
	virtual ~CDataStructuresDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Funciones de asignación de mensajes generadas
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// Función auxiliar que establece contenido de búsqueda para un controlador de búsqueda
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
