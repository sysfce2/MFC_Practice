#pragma once


// CDlgSetting 对话框

class CDlgSetting : public CDialog
{
	DECLARE_DYNAMIC(CDlgSetting)

public:
	CDlgSetting(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CDlgSetting();

// 对话框数据
	enum { IDD = IDD_SETTING };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	static UINT m_nLineWidth;
	static int m_nLineStyle;
	afx_msg void OnEnChangeEdtLinewidth();
	afx_msg void OnBnClickedRad1();
	afx_msg void OnPaint();
};
