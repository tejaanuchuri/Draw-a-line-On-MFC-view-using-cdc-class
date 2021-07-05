
// Draw a line using MFC view classView.h : interface of the CDrawalineusingMFCviewclassView class
//

#pragma once


class CDrawalineusingMFCviewclassView : public CView
{
protected: // create from serialization only
	CDrawalineusingMFCviewclassView() noexcept;
	DECLARE_DYNCREATE(CDrawalineusingMFCviewclassView)

// Attributes
public:
	CDrawalineusingMFCviewclassDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~CDrawalineusingMFCviewclassView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in Draw a line using MFC view classView.cpp
inline CDrawalineusingMFCviewclassDoc* CDrawalineusingMFCviewclassView::GetDocument() const
   { return reinterpret_cast<CDrawalineusingMFCviewclassDoc*>(m_pDocument); }
#endif

