#pragma once

// VideoActivexCtrl.h : CVideoActivexCtrl ActiveX �ؼ����������


// CVideoActivexCtrl : �й�ʵ�ֵ���Ϣ������� VideoActivexCtrl.cpp��

class CVideoActivexCtrl : public COleControl
{
	DECLARE_DYNCREATE(CVideoActivexCtrl)

// ���캯��
public:
	CVideoActivexCtrl();

// ��д
public:
	virtual void OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid);
	virtual void DoPropExchange(CPropExchange* pPX);
	virtual void OnResetState();

// ʵ��
protected:
	~CVideoActivexCtrl();

	DECLARE_OLECREATE_EX(CVideoActivexCtrl)    // �๤���� guid
	DECLARE_OLETYPELIB(CVideoActivexCtrl)      // GetTypeInfo
	DECLARE_PROPPAGEIDS(CVideoActivexCtrl)     // ����ҳ ID
	DECLARE_OLECTLTYPE(CVideoActivexCtrl)		// �������ƺ�����״̬

// ��Ϣӳ��
	DECLARE_MESSAGE_MAP()

// ����ӳ��
	DECLARE_DISPATCH_MAP()

	afx_msg void AboutBox();

// �¼�ӳ��
	DECLARE_EVENT_MAP()

// ���Ⱥ��¼� ID
public:
	enum {
		dispidvideoPlay = 2L,
		dispidstartVideo = 1L
	};
protected:
	void startVideo(LPCTSTR rtsp_url);
	void videoPlay(CHAR* rtspUrl);
};

