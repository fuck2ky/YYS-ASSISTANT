
// WindowsScreenShot.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CWindowsScreenShotApp: 
// �йش����ʵ�֣������ WindowsScreenShot.cpp
//

class CWindowsScreenShotApp : public CWinApp
{
public:
	CWindowsScreenShotApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CWindowsScreenShotApp theApp;