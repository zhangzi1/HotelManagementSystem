#pragma once


// CDeniedDlg 对话框

class CDeniedDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CDeniedDlg)

public:
	CDeniedDlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CDeniedDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	HICON m_hIcon;
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	virtual BOOL OnInitDialog();
	DECLARE_MESSAGE_MAP()
public:
	void OnBnClickedCancel();
};
