// VideoActivex.cpp : CVideoActivexApp 和 DLL 注册的实现。

#include "stdafx.h"
#include "VideoActivex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


CVideoActivexApp theApp;

const GUID CDECL BASED_CODE _tlid =
		{ 0x71CD4399, 0x1D9E, 0x40E3, { 0xA3, 0xF4, 0xE4, 0x87, 0x4F, 0xD9, 0xD5, 0x78 } };
const WORD _wVerMajor = 1;
const WORD _wVerMinor = 0;



// CVideoActivexApp::InitInstance - DLL 初始化

BOOL CVideoActivexApp::InitInstance()
{
	BOOL bInit = COleControlModule::InitInstance();

	if (bInit)
	{
		// TODO: 在此添加您自己的模块初始化代码。
	}

	return bInit;
}



// CVideoActivexApp::ExitInstance - DLL 终止

int CVideoActivexApp::ExitInstance()
{
	// TODO: 在此添加您自己的模块终止代码。

	return COleControlModule::ExitInstance();
}



// DllRegisterServer - 将项添加到系统注册表

STDAPI DllRegisterServer(void)
{
	AFX_MANAGE_STATE(_afxModuleAddrThis);

	if (!AfxOleRegisterTypeLib(AfxGetInstanceHandle(), _tlid))
		return ResultFromScode(SELFREG_E_TYPELIB);

	if (!COleObjectFactoryEx::UpdateRegistryAll(TRUE))
		return ResultFromScode(SELFREG_E_CLASS);

	return NOERROR;
}



// DllUnregisterServer - 将项从系统注册表中移除

STDAPI DllUnregisterServer(void)
{
	AFX_MANAGE_STATE(_afxModuleAddrThis);

	if (!AfxOleUnregisterTypeLib(_tlid, _wVerMajor, _wVerMinor))
		return ResultFromScode(SELFREG_E_TYPELIB);

	if (!COleObjectFactoryEx::UpdateRegistryAll(FALSE))
		return ResultFromScode(SELFREG_E_CLASS);

	return NOERROR;
}
