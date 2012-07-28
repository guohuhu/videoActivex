// VideoActivexPropPage.cpp : CVideoActivexPropPage 属性页类的实现。

#include "stdafx.h"
#include "VideoActivex.h"
#include "VideoActivexPropPage.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


IMPLEMENT_DYNCREATE(CVideoActivexPropPage, COlePropertyPage)



// 消息映射

BEGIN_MESSAGE_MAP(CVideoActivexPropPage, COlePropertyPage)
END_MESSAGE_MAP()



// 初始化类工厂和 guid

IMPLEMENT_OLECREATE_EX(CVideoActivexPropPage, "VIDEOACTIVEX.VideoActivexPropPage.1",
	0x53db3c3d, 0xfe5e, 0x48b9, 0xbc, 0xb8, 0xdb, 0x22, 0x6c, 0x8f, 0x51, 0xd3)



// CVideoActivexPropPage::CVideoActivexPropPageFactory::UpdateRegistry -
// 添加或移除 CVideoActivexPropPage 的系统注册表项

BOOL CVideoActivexPropPage::CVideoActivexPropPageFactory::UpdateRegistry(BOOL bRegister)
{
	if (bRegister)
		return AfxOleRegisterPropertyPageClass(AfxGetInstanceHandle(),
			m_clsid, IDS_VIDEOACTIVEX_PPG);
	else
		return AfxOleUnregisterClass(m_clsid, NULL);
}



// CVideoActivexPropPage::CVideoActivexPropPage - 构造函数

CVideoActivexPropPage::CVideoActivexPropPage() :
	COlePropertyPage(IDD, IDS_VIDEOACTIVEX_PPG_CAPTION)
{
}



// CVideoActivexPropPage::DoDataExchange - 在页和属性间移动数据

void CVideoActivexPropPage::DoDataExchange(CDataExchange* pDX)
{
	DDP_PostProcessing(pDX);
}



// CVideoActivexPropPage 消息处理程序
