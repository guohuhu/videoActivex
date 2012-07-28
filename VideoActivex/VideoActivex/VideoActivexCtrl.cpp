// VideoActivexCtrl.cpp : CVideoActivexCtrl ActiveX 控件类的实现。

#include "stdafx.h"
#include "playCommon.h"
#include "VideoActivex.h"
#include "VideoActivexCtrl.h"
#include "VideoActivexPropPage.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


IMPLEMENT_DYNCREATE(CVideoActivexCtrl, COleControl)



// 消息映射

BEGIN_MESSAGE_MAP(CVideoActivexCtrl, COleControl)
	ON_OLEVERB(AFX_IDS_VERB_PROPERTIES, OnProperties)
END_MESSAGE_MAP()



// 调度映射

BEGIN_DISPATCH_MAP(CVideoActivexCtrl, COleControl)
	DISP_FUNCTION_ID(CVideoActivexCtrl, "AboutBox", DISPID_ABOUTBOX, AboutBox, VT_EMPTY, VTS_NONE)
	DISP_FUNCTION_ID(CVideoActivexCtrl, "startVideo", dispidstartVideo, startVideo, VT_EMPTY, VTS_BSTR)
	DISP_FUNCTION_ID(CVideoActivexCtrl, "videoPlay", dispidvideoPlay, videoPlay, VT_EMPTY, VTS_PI1)
END_DISPATCH_MAP()



// 事件映射

BEGIN_EVENT_MAP(CVideoActivexCtrl, COleControl)
END_EVENT_MAP()



// 属性页

// TODO: 按需要添加更多属性页。请记住增加计数!
BEGIN_PROPPAGEIDS(CVideoActivexCtrl, 1)
	PROPPAGEID(CVideoActivexPropPage::guid)
END_PROPPAGEIDS(CVideoActivexCtrl)



// 初始化类工厂和 guid

IMPLEMENT_OLECREATE_EX(CVideoActivexCtrl, "VIDEOACTIVEX.VideoActivexCtrl.1",
	0xf1f71c14, 0xd8d6, 0x4256, 0xbc, 0xd3, 0xc5, 0x5, 0x21, 0xb5, 0xd, 0x89)



// 键入库 ID 和版本

IMPLEMENT_OLETYPELIB(CVideoActivexCtrl, _tlid, _wVerMajor, _wVerMinor)



// 接口 ID

const IID BASED_CODE IID_DVideoActivex =
		{ 0xAE4A5113, 0x6325, 0x4E4A, { 0x9F, 0x3D, 0x87, 0x12, 0xCE, 0x54, 0x52, 0x86 } };
const IID BASED_CODE IID_DVideoActivexEvents =
		{ 0x15993967, 0x3958, 0x4CB5, { 0xAB, 0xC4, 0x5B, 0x59, 0x11, 0x6, 0x45, 0x92 } };



// 控件类型信息

static const DWORD BASED_CODE _dwVideoActivexOleMisc =
	OLEMISC_ACTIVATEWHENVISIBLE |
	OLEMISC_SETCLIENTSITEFIRST |
	OLEMISC_INSIDEOUT |
	OLEMISC_CANTLINKINSIDE |
	OLEMISC_RECOMPOSEONRESIZE;

IMPLEMENT_OLECTLTYPE(CVideoActivexCtrl, IDS_VIDEOACTIVEX, _dwVideoActivexOleMisc)



// CVideoActivexCtrl::CVideoActivexCtrlFactory::UpdateRegistry -
// 添加或移除 CVideoActivexCtrl 的系统注册表项

BOOL CVideoActivexCtrl::CVideoActivexCtrlFactory::UpdateRegistry(BOOL bRegister)
{
	// TODO: 验证您的控件是否符合单元模型线程处理规则。
	// 有关更多信息，请参考 MFC 技术说明 64。
	// 如果您的控件不符合单元模型规则，则
	// 必须修改如下代码，将第六个参数从
	// afxRegApartmentThreading 改为 0。

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



// CVideoActivexCtrl::CVideoActivexCtrl - 构造函数

CVideoActivexCtrl::CVideoActivexCtrl()
{
	InitializeIIDs(&IID_DVideoActivex, &IID_DVideoActivexEvents);
	// TODO: 在此初始化控件的实例数据。
}



// CVideoActivexCtrl::~CVideoActivexCtrl - 析构函数

CVideoActivexCtrl::~CVideoActivexCtrl()
{
	// TODO: 在此清理控件的实例数据。
}



// CVideoActivexCtrl::OnDraw - 绘图函数

void CVideoActivexCtrl::OnDraw(
			CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid)
{
	//if (!pdc)
	//	return;

	//// TODO: 用您自己的绘图代码替换下面的代码。
	//pdc->FillRect(rcBounds, CBrush::FromHandle((HBRUSH)GetStockObject(WHITE_BRUSH)));
	//pdc->Ellipse(rcBounds);
}



// CVideoActivexCtrl::DoPropExchange - 持久性支持

void CVideoActivexCtrl::DoPropExchange(CPropExchange* pPX)
{
	ExchangeVersion(pPX, MAKELONG(_wVerMinor, _wVerMajor));
	COleControl::DoPropExchange(pPX);

	// TODO: 为每个持久的自定义属性调用 PX_ 函数。
}



// CVideoActivexCtrl::OnResetState - 将控件重置为默认状态

void CVideoActivexCtrl::OnResetState()
{
	COleControl::OnResetState();  // 重置 DoPropExchange 中找到的默认值

	// TODO: 在此重置任意其他控件状态。
}



// CVideoActivexCtrl::AboutBox - 向用户显示“关于”框

void CVideoActivexCtrl::AboutBox()
{
	CDialog dlgAbout(IDD_ABOUTBOX_VIDEOACTIVEX);
	dlgAbout.DoModal();
}



// CVideoActivexCtrl 消息处理程序

void CVideoActivexCtrl::startVideo(LPCTSTR rtsp_url)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	/*MessageBox(_T("video Play"));*/
	//MessageBox(rtsp_url);
	CDC *apdc=GetDC();
	
	recvRTSP(apdc->GetSafeHdc(),rtsp_url);
	// TODO: 在此添加调度处理程序代码
}

void CVideoActivexCtrl::videoPlay(CHAR* rtspUrl)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	//MessageBox(_T("hello"));
//	MessageBox(_T(rtspUrl));
	//CDC *apdc=GetDC();
	//recvRTSP(apdc->GetSafeHdc(),rtspUrl);
	// TODO: 在此添加调度处理程序代码
}
