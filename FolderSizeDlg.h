#pragma once

#include <afxwin.h>
#include <iostream>
#include "Resource.h"

class FolderSizeDlg :
    public CDialog
{
public: 
    FolderSizeDlg(CWnd* pParent = NULL);

protected:
    virtual void DoDataExchange(CDataExchange* pDX);


protected: 
    DECLARE_MESSAGE_MAP()

};

