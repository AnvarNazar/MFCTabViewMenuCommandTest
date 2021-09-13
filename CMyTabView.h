#pragma once


// CMyTabView view

class CMyTabView : public CTabView
{
	DECLARE_DYNCREATE(CMyTabView)

protected:
	CMyTabView();           // protected constructor used by dynamic creation
	virtual ~CMyTabView();

public:
#ifdef _DEBUG
	virtual void AssertValid() const;
#ifndef _WIN32_WCE
	virtual void Dump(CDumpContext& dc) const;
#endif
#endif

protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFileNewtab();
};


