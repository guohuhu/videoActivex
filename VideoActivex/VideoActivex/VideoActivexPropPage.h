#pragma once

// VideoActivexPropPage.h : CVideoActivexPropPage ����ҳ���������


// CVideoActivexPropPage : �й�ʵ�ֵ���Ϣ������� VideoActivexPropPage.cpp��

class CVideoActivexPropPage : public COlePropertyPage
{
	DECLARE_DYNCREATE(CVideoActivexPropPage)
	DECLARE_OLECREATE_EX(CVideoActivexPropPage)

// ���캯��
public:
	CVideoActivexPropPage();

// �Ի�������
	enum { IDD = IDD_PROPPAGE_VIDEOACTIVEX };

// ʵ��
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

// ��Ϣӳ��
protected:
	DECLARE_MESSAGE_MAP()
};

