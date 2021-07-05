
// Draw a line using MFC view class.h : main header file for the Draw a line using MFC view class application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CDrawalineusingMFCviewclassApp:
// See Draw a line using MFC view class.cpp for the implementation of this class
//

class CDrawalineusingMFCviewclassApp : public CWinAppEx
{
public:
	CDrawalineusingMFCviewclassApp() noexcept;


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation
	BOOL  m_bHiColorIcons;

	virtual void PreLoadState();
	virtual void LoadCustomState();
	virtual void SaveCustomState();

	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CDrawalineusingMFCviewclassApp theApp;
