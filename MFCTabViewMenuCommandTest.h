
// MFCTabViewMenuCommandTest.h : main header file for the MFCTabViewMenuCommandTest application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CMFCTabViewMenuCommandTestApp:
// See MFCTabViewMenuCommandTest.cpp for the implementation of this class
//

class CMFCTabViewMenuCommandTestApp : public CWinAppEx
{
public:
	CMFCTabViewMenuCommandTestApp() noexcept;


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

extern CMFCTabViewMenuCommandTestApp theApp;
