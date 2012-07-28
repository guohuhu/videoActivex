#pragma once

// VideoActivexPropPage.h : CVideoActivexPropPage 属性页类的声明。


// CVideoActivexPropPage : 有关实现的信息，请参阅 VideoActivexPropPage.cpp。

class CVideoActivexPropPage : public COlePropertyPage
{
	DECLARE_DYNCREATE(CVideoActivexPropPage)
	DECLARE_OLECREATE_EX(CVideoActivexPropPage)

// 构造函数
public:
	CVideoActivexPropPage();

// 对话框数据
	enum { IDD = IDD_PROPPAGE_VIDEOACTIVEX };

// 实现
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 消息映射
protected:
	DECLARE_MESSAGE_MAP()
};

