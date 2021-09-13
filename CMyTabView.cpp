// CMyTabView.cpp : implementation file
//

#include "pch.h"
#include "MFCTabViewMenuCommandTest.h"
#include "CMyTabView.h"
#include "CMyForm.h"


// CMyTabView

IMPLEMENT_DYNCREATE(CMyTabView, CTabView)

CMyTabView::CMyTabView()
{

}

CMyTabView::~CMyTabView()
{
}

BEGIN_MESSAGE_MAP(CMyTabView, CTabView)
	ON_COMMAND(ID_FILE_NEWTAB, &CMyTabView::OnFileNewtab)
END_MESSAGE_MAP()


// CMyTabView diagnostics

#ifdef _DEBUG
void CMyTabView::AssertValid() const
{
	CTabView::AssertValid();
}

#ifndef _WIN32_WCE
void CMyTabView::Dump(CDumpContext& dc) const
{
	CTabView::Dump(dc);
}
#endif
#endif //_DEBUG


// CMyTabView message handlers


void CMyTabView::OnFileNewtab()
{
	AddView(RUNTIME_CLASS(CMyForm), _T("New Tab"));
}
