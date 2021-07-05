
// Draw a line using MFC view classView.cpp : implementation of the CDrawalineusingMFCviewclassView class
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "Draw a line using MFC view class.h"
#endif

#include "Draw a line using MFC view classDoc.h"
#include "Draw a line using MFC view classView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDrawalineusingMFCviewclassView

IMPLEMENT_DYNCREATE(CDrawalineusingMFCviewclassView, CView)

BEGIN_MESSAGE_MAP(CDrawalineusingMFCviewclassView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CDrawalineusingMFCviewclassView::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// CDrawalineusingMFCviewclassView construction/destruction

CDrawalineusingMFCviewclassView::CDrawalineusingMFCviewclassView() noexcept
{
	// TODO: add construction code here

}

CDrawalineusingMFCviewclassView::~CDrawalineusingMFCviewclassView()
{
}

BOOL CDrawalineusingMFCviewclassView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CDrawalineusingMFCviewclassView drawing

void CDrawalineusingMFCviewclassView::OnDraw(CDC* pDC)
{
	CDrawalineusingMFCviewclassDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->MoveTo(100, 300);
	pDC->LineTo(800, 300);
	// TODO: add draw code for native data here
}


// CDrawalineusingMFCviewclassView printing


void CDrawalineusingMFCviewclassView::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL CDrawalineusingMFCviewclassView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CDrawalineusingMFCviewclassView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CDrawalineusingMFCviewclassView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

void CDrawalineusingMFCviewclassView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CDrawalineusingMFCviewclassView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CDrawalineusingMFCviewclassView diagnostics

#ifdef _DEBUG
void CDrawalineusingMFCviewclassView::AssertValid() const
{
	CView::AssertValid();
}

void CDrawalineusingMFCviewclassView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CDrawalineusingMFCviewclassDoc* CDrawalineusingMFCviewclassView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CDrawalineusingMFCviewclassDoc)));
	return (CDrawalineusingMFCviewclassDoc*)m_pDocument;
}
#endif //_DEBUG


// CDrawalineusingMFCviewclassView message handlers
