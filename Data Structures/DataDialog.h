#pragma once


// Cuadro de di�logo de DataDialog

class DataDialog : public CDialogEx
{
	DECLARE_DYNAMIC(DataDialog)

public:
	DataDialog(CWnd* pParent = NULL);   // Constructor est�ndar
	virtual ~DataDialog();

// Datos del cuadro de di�logo
	enum { IDD = IDD_DATADIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // Compatibilidad con DDX/DDV

	DECLARE_MESSAGE_MAP()
public:
	CString vData;
};
