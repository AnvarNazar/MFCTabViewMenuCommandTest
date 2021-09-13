
// MFCTabViewMenuCommandTestView.cpp : implementation of the CMFCTabViewMenuCommandTestView class
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "MFCTabViewMenuCommandTest.h"
#endif

#include "MFCTabViewMenuCommandTestDoc.h"
#include "MFCTabViewMenuCommandTestView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCTabViewMenuCommandTestView

IMPLEMENT_DYNCREATE(CMFCTabViewMenuCommandTestView, CView)

BEGIN_MESSAGE_MAP(CMFCTabViewMenuCommandTestView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CMFCTabViewMenuCommandTestView::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// CMFCTabViewMenuCommandTestView construction/destruction

CMFCTabViewMenuCommandTestView::CMFCTabViewMenuCommandTestView() noexcept
{
	// TODO: add construction code here

}

CMFCTabViewMenuCommandTestView::~CMFCTabViewMenuCommandTestView()
{
}

BOOL CMFCTabViewMenuCommandTestView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CMFCTabViewMenuCommandTestView drawing

void CMFCTabViewMenuCommandTestView::OnDraw(CDC* /*pDC*/)
{
	CMFCTabViewMenuCommandTestDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}


// CMFCTabViewMenuCommandTestView printing


void CMFCTabViewMenuCommandTestView::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL CMFCTabViewMenuCommandTestView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CMFCTabViewMenuCommandTestView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CMFCTabViewMenuCommandTestView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

void CMFCTabViewMenuCommandTestView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CMFCTabViewMenuCommandTestView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CMFCTabViewMenuCommandTestView diagnostics

#ifdef _DEBUG
void CMFCTabViewMenuCommandTestView::AssertValid() const
{
	CView::AssertValid();
}

void CMFCTabViewMenuCommandTestView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCTabViewMenuCommandTestDoc* CMFCTabViewMenuCommandTestView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCTabViewMenuCommandTestDoc)));
	return (CMFCTabViewMenuCommandTestDoc*)m_pDocument;
}
#endif //_DEBUG


// CMFCTabViewMenuCommandTestView message handlers
