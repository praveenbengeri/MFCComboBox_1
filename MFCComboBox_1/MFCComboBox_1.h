
// MFCComboBox_1.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CMFCComboBox1App:
// See MFCComboBox_1.cpp for the implementation of this class
//

class CMFCComboBox1App : public CWinApp
{
public:
	CMFCComboBox1App();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CMFCComboBox1App theApp;
