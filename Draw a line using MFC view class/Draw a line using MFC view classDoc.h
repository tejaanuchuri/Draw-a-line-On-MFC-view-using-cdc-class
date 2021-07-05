
// Draw a line using MFC view classDoc.h : interface of the CDrawalineusingMFCviewclassDoc class
//


#pragma once


class CDrawalineusingMFCviewclassDoc : public CDocument
{
protected: // create from serialization only
	CDrawalineusingMFCviewclassDoc() noexcept;
	DECLARE_DYNCREATE(CDrawalineusingMFCviewclassDoc)

// Attributes
public:

// Operations
public:

// Overrides
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// Implementation
public:
	virtual ~CDrawalineusingMFCviewclassDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// Helper function that sets search content for a Search Handler
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
