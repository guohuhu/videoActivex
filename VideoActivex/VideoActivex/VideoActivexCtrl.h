#pragma once

// VideoActivexCtrl.h : CVideoActivexCtrl ActiveX 控件类的声明。


// CVideoActivexCtrl : 有关实现的信息，请参阅 VideoActivexCtrl.cpp。

class CVideoActivexCtrl : public COleControl
{
	DECLARE_DYNCREATE(CVideoActivexCtrl)

// 构造函数
public:
	CVideoActivexCtrl();

// 重写
public:
	virtual void OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid);
	virtual void DoPropExchange(CPropExchange* pPX);
	virtual void OnResetState();

// 实现
protected:
	~CVideoActivexCtrl();

	DECLARE_OLECREATE_EX(CVideoActivexCtrl)    // 类工厂和 guid
	DECLARE_OLETYPELIB(CVideoActivexCtrl)      // GetTypeInfo
	DECLARE_PROPPAGEIDS(CVideoActivexCtrl)     // 属性页 ID
	DECLARE_OLECTLTYPE(CVideoActivexCtrl)		// 类型名称和杂项状态

// 消息映射
	DECLARE_MESSAGE_MAP()

// 调度映射
	DECLARE_DISPATCH_MAP()

	afx_msg void AboutBox();

// 事件映射
	DECLARE_EVENT_MAP()

// 调度和事件 ID
public:
	enum {
		dispidvideoPlay = 2L,
		dispidstartVideo = 1L
	};
protected:
	void startVideo(LPCTSTR rtsp_url);
	void videoPlay(CHAR* rtspUrl);
};

