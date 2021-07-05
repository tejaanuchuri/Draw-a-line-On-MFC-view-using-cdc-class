
// Draw a line using MFC view classDoc.cpp : implementation of the CDrawalineusingMFCviewclassDoc class
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "Draw a line using MFC view class.h"
#endif

#include "Draw a line using MFC view classDoc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CDrawalineusingMFCviewclassDoc

IMPLEMENT_DYNCREATE(CDrawalineusingMFCviewclassDoc, CDocument)

BEGIN_MESSAGE_MAP(CDrawalineusingMFCviewclassDoc, CDocument)
END_MESSAGE_MAP()


// CDrawalineusingMFCviewclassDoc construction/destruction

CDrawalineusingMFCviewclassDoc::CDrawalineusingMFCviewclassDoc() noexcept
{
	// TODO: add one-time construction code here

}

CDrawalineusingMFCviewclassDoc::~CDrawalineusingMFCviewclassDoc()
{
}

BOOL CDrawalineusingMFCviewclassDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}




// CDrawalineusingMFCviewclassDoc serialization

void CDrawalineusingMFCviewclassDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

#ifdef SHARED_HANDLERS

// Support for thumbnails
void CDrawalineusingMFCviewclassDoc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
{
	// Modify this code to draw the document's data
	dc.FillSolidRect(lprcBounds, RGB(255, 255, 255));

	CString strText = _T("TODO: implement thumbnail drawing here");
	LOGFONT lf;

	CFont* pDefaultGUIFont = CFont::FromHandle((HFONT) GetStockObject(DEFAULT_GUI_FONT));
	pDefaultGUIFont->GetLogFont(&lf);
	lf.lfHeight = 36;

	CFont fontDraw;
	fontDraw.CreateFontIndirect(&lf);

	CFont* pOldFont = dc.SelectObject(&fontDraw);
	dc.DrawText(strText, lprcBounds, DT_CENTER | DT_WORDBREAK);
	dc.SelectObject(pOldFont);
}

// Support for Search Handlers
void CDrawalineusingMFCviewclassDoc::InitializeSearchContent()
{
	CString strSearchContent;
	// Set search contents from document's data.
	// The content parts should be separated by ";"

	// For example:  strSearchContent = _T("point;rectangle;circle;ole object;");
	SetSearchContent(strSearchContent);
}

void CDrawalineusingMFCviewclassDoc::SetSearchContent(const CString& value)
{
	if (value.IsEmpty())
	{
		RemoveChunk(PKEY_Search_Contents.fmtid, PKEY_Search_Contents.pid);
	}
	else
	{
		CMFCFilterChunkValueImpl *pChunk = nullptr;
		ATLTRY(pChunk = new CMFCFilterChunkValueImpl);
		if (pChunk != nullptr)
		{
			pChunk->SetTextValue(PKEY_Search_Contents, value, CHUNK_TEXT);
			SetChunkValue(pChunk);
		}
	}
}

#endif // SHARED_HANDLERS

// CDrawalineusingMFCviewclassDoc diagnostics

#ifdef _DEBUG
void CDrawalineusingMFCviewclassDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CDrawalineusingMFCviewclassDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CDrawalineusingMFCviewclassDoc commands
