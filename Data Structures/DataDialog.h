#pragma once


// Cuadro de diálogo de DataDialog

class DataDialog : public CDialogEx
{
	DECLARE_DYNAMIC(DataDialog)

public:
	DataDialog(CWnd* pParent = NULL);   // Constructor estándar
	virtual ~DataDialog();

// Datos del cuadro de diálogo
	enum { IDD = IDD_DATADIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // Compatibilidad con DDX/DDV

	DECLARE_MESSAGE_MAP()
public:
	CString vData;
};
