// VideoActivexCtrl.cpp : CVideoActivexCtrl ActiveX �ؼ����ʵ�֡�

#include "stdafx.h"
#include "playCommon.h"
#include "VideoActivex.h"
#include "VideoActivexCtrl.h"
#include "VideoActivexPropPage.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


IMPLEMENT_DYNCREATE(CVideoActivexCtrl, COleControl)



// ��Ϣӳ��

BEGIN_MESSAGE_MAP(CVideoActivexCtrl, COleControl)
	ON_OLEVERB(AFX_IDS_VERB_PROPERTIES, OnProperties)
END_MESSAGE_MAP()



// ����ӳ��

BEGIN_DISPATCH_MAP(CVideoActivexCtrl, COleControl)
	DISP_FUNCTION_ID(CVideoActivexCtrl, "AboutBox", DISPID_ABOUTBOX, AboutBox, VT_EMPTY, VTS_NONE)
	DISP_FUNCTION_ID(CVideoActivexCtrl, "startVideo", dispidstartVideo, startVideo, VT_EMPTY, VTS_BSTR)
	DISP_FUNCTION_ID(CVideoActivexCtrl, "videoPlay", dispidvideoPlay, videoPlay, VT_EMPTY, VTS_PI1)
END_DISPATCH_MAP()



// �¼�ӳ��

BEGIN_EVENT_MAP(CVideoActivexCtrl, COleControl)
END_EVENT_MAP()



// ����ҳ

// TODO: ����Ҫ��Ӹ�������ҳ�����ס���Ӽ���!
BEGIN_PROPPAGEIDS(CVideoActivexCtrl, 1)
	PROPPAGEID(CVideoActivexPropPage::guid)
END_PROPPAGEIDS(CVideoActivexCtrl)



// ��ʼ���๤���� guid

IMPLEMENT_OLECREATE_EX(CVideoActivexCtrl, "VIDEOACTIVEX.VideoActivexCtrl.1",
	0xf1f71c14, 0xd8d6, 0x4256, 0xbc, 0xd3, 0xc5, 0x5, 0x21, 0xb5, 0xd, 0x89)



// ����� ID �Ͱ汾

IMPLEMENT_OLETYPELIB(CVideoActivexCtrl, _tlid, _wVerMajor, _wVerMinor)



// �ӿ� ID

const IID BASED_CODE IID_DVideoActivex =
		{ 0xAE4A5113, 0x6325, 0x4E4A, { 0x9F, 0x3D, 0x87, 0x12, 0xCE, 0x54, 0x52, 0x86 } };
const IID BASED_CODE IID_DVideoActivexEvents =
		{ 0x15993967, 0x3958, 0x4CB5, { 0xAB, 0xC4, 0x5B, 0x59, 0x11, 0x6, 0x45, 0x92 } };



// �ؼ�������Ϣ

static const DWORD BASED_CODE _dwVideoActivexOleMisc =
	OLEMISC_ACTIVATEWHENVISIBLE |
	OLEMISC_SETCLIENTSITEFIRST |
	OLEMISC_INSIDEOUT |
	OLEMISC_CANTLINKINSIDE |
	OLEMISC_RECOMPOSEONRESIZE;

IMPLEMENT_OLECTLTYPE(CVideoActivexCtrl, IDS_VIDEOACTIVEX, _dwVideoActivexOleMisc)



// CVideoActivexCtrl::CVideoActivexCtrlFactory::UpdateRegistry -
// ��ӻ��Ƴ� CVideoActivexCtrl ��ϵͳע�����

BOOL CVideoActivexCtrl::CVideoActivexCtrlFactory::UpdateRegistry(BOOL bRegister)
{
	// TODO: ��֤���Ŀؼ��Ƿ���ϵ�Ԫģ���̴߳������
	// �йظ�����Ϣ����ο� MFC ����˵�� 64��
	// ������Ŀؼ������ϵ�Ԫģ�͹�����
	// �����޸����´��룬��������������
	// afxRegApartmentThreading ��Ϊ 0��

	if (bRegister)
		return AfxOleRegisterControlClass(
			AfxGetInstanceHandle(),
			m_clsid,
			m_lpszProgID,
			IDS_VIDEOACTIVEX,
			IDB_VIDEOACTIVEX,
			afxRegApartmentThreading,
			_dwVideoActivexOleMisc,
			_tlid,
			_wVerMajor,
			_wVerMinor);
	else
		return AfxOleUnregisterClass(m_clsid, m_lpszProgID);
}



// CVideoActivexCtrl::CVideoActivexCtrl - ���캯��

CVideoActivexCtrl::CVideoActivexCtrl()
{
	InitializeIIDs(&IID_DVideoActivex, &IID_DVideoActivexEvents);
	// TODO: �ڴ˳�ʼ���ؼ���ʵ�����ݡ�
}



// CVideoActivexCtrl::~CVideoActivexCtrl - ��������

CVideoActivexCtrl::~CVideoActivexCtrl()
{
	// TODO: �ڴ�����ؼ���ʵ�����ݡ�
}



// CVideoActivexCtrl::OnDraw - ��ͼ����

void CVideoActivexCtrl::OnDraw(
			CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid)
{
	//if (!pdc)
	//	return;

	//// TODO: �����Լ��Ļ�ͼ�����滻����Ĵ��롣
	//pdc->FillRect(rcBounds, CBrush::FromHandle((HBRUSH)GetStockObject(WHITE_BRUSH)));
	//pdc->Ellipse(rcBounds);
}



// CVideoActivexCtrl::DoPropExchange - �־���֧��

void CVideoActivexCtrl::DoPropExchange(CPropExchange* pPX)
{
	ExchangeVersion(pPX, MAKELONG(_wVerMinor, _wVerMajor));
	COleControl::DoPropExchange(pPX);

	// TODO: Ϊÿ���־õ��Զ������Ե��� PX_ ������
}



// CVideoActivexCtrl::OnResetState - ���ؼ�����ΪĬ��״̬

void CVideoActivexCtrl::OnResetState()
{
	COleControl::OnResetState();  // ���� DoPropExchange ���ҵ���Ĭ��ֵ

	// TODO: �ڴ��������������ؼ�״̬��
}



// CVideoActivexCtrl::AboutBox - ���û���ʾ�����ڡ���

void CVideoActivexCtrl::AboutBox()
{
	CDialog dlgAbout(IDD_ABOUTBOX_VIDEOACTIVEX);
	dlgAbout.DoModal();
}



// CVideoActivexCtrl ��Ϣ�������

void CVideoActivexCtrl::startVideo(LPCTSTR rtsp_url)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	/*MessageBox(_T("video Play"));*/
	//MessageBox(rtsp_url);
	CDC *apdc=GetDC();
	
	recvRTSP(apdc->GetSafeHdc(),rtsp_url);
	// TODO: �ڴ���ӵ��ȴ���������
}

void CVideoActivexCtrl::videoPlay(CHAR* rtspUrl)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	//MessageBox(_T("hello"));
//	MessageBox(_T(rtspUrl));
	//CDC *apdc=GetDC();
	//recvRTSP(apdc->GetSafeHdc(),rtspUrl);
	// TODO: �ڴ���ӵ��ȴ���������
}
