#pragma once
#include "afxwin.h"


// CScreenShot �Ի���

class CScreenShot : public CDialogEx
{
	DECLARE_DYNAMIC(CScreenShot)

public:
	CScreenShot(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CScreenShot();

// �Ի�������
	enum { IDD = IDD_WINDOWSSCREENSHOT_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:

//	CComboBox hwndList;
//	CComboBox hwndList;
};
