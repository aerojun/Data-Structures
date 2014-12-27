// DataDialog.cpp: archivo de implementación
//

#include "stdafx.h"
#include "Data Structures.h"
#include "DataDialog.h"
#include "afxdialogex.h"


// Cuadro de diálogo de DataDialog

IMPLEMENT_DYNAMIC(DataDialog, CDialogEx)

DataDialog::DataDialog(CWnd* pParent /*=NULL*/)
	: CDialogEx(DataDialog::IDD, pParent)
	, vData(_T(""))
{

}

DataDialog::~DataDialog()
{
}

void DataDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_DATAINPUT, vData);
}


BEGIN_MESSAGE_MAP(DataDialog, CDialogEx)
END_MESSAGE_MAP()


// Controladores de mensajes de DataDialog
