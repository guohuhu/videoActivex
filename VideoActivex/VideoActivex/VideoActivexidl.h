

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0366 */
/* at Fri Jul 27 10:51:40 2012
 */
/* Compiler settings for .\VideoActivex.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 440
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __VideoActivexidl_h__
#define __VideoActivexidl_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ___DVideoActivex_FWD_DEFINED__
#define ___DVideoActivex_FWD_DEFINED__
typedef interface _DVideoActivex _DVideoActivex;
#endif 	/* ___DVideoActivex_FWD_DEFINED__ */


#ifndef ___DVideoActivexEvents_FWD_DEFINED__
#define ___DVideoActivexEvents_FWD_DEFINED__
typedef interface _DVideoActivexEvents _DVideoActivexEvents;
#endif 	/* ___DVideoActivexEvents_FWD_DEFINED__ */


#ifndef __VideoActivex_FWD_DEFINED__
#define __VideoActivex_FWD_DEFINED__

#ifdef __cplusplus
typedef class VideoActivex VideoActivex;
#else
typedef struct VideoActivex VideoActivex;
#endif /* __cplusplus */

#endif 	/* __VideoActivex_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 


#ifndef __VideoActivexLib_LIBRARY_DEFINED__
#define __VideoActivexLib_LIBRARY_DEFINED__

/* library VideoActivexLib */
/* [control][helpstring][helpfile][version][uuid] */ 


EXTERN_C const IID LIBID_VideoActivexLib;

#ifndef ___DVideoActivex_DISPINTERFACE_DEFINED__
#define ___DVideoActivex_DISPINTERFACE_DEFINED__

/* dispinterface _DVideoActivex */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__DVideoActivex;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("AE4A5113-6325-4E4A-9F3D-8712CE545286")
    _DVideoActivex : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DVideoActivexVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DVideoActivex * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DVideoActivex * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DVideoActivex * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DVideoActivex * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DVideoActivex * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DVideoActivex * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DVideoActivex * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DVideoActivexVtbl;

    interface _DVideoActivex
    {
        CONST_VTBL struct _DVideoActivexVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DVideoActivex_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define _DVideoActivex_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define _DVideoActivex_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define _DVideoActivex_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define _DVideoActivex_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define _DVideoActivex_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define _DVideoActivex_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DVideoActivex_DISPINTERFACE_DEFINED__ */


#ifndef ___DVideoActivexEvents_DISPINTERFACE_DEFINED__
#define ___DVideoActivexEvents_DISPINTERFACE_DEFINED__

/* dispinterface _DVideoActivexEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__DVideoActivexEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("15993967-3958-4CB5-ABC4-5B5911064592")
    _DVideoActivexEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DVideoActivexEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DVideoActivexEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DVideoActivexEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DVideoActivexEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DVideoActivexEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DVideoActivexEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DVideoActivexEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DVideoActivexEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DVideoActivexEventsVtbl;

    interface _DVideoActivexEvents
    {
        CONST_VTBL struct _DVideoActivexEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DVideoActivexEvents_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define _DVideoActivexEvents_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define _DVideoActivexEvents_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define _DVideoActivexEvents_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define _DVideoActivexEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define _DVideoActivexEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define _DVideoActivexEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DVideoActivexEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_VideoActivex;

#ifdef __cplusplus

class DECLSPEC_UUID("F1F71C14-D8D6-4256-BCD3-C50521B50D89")
VideoActivex;
#endif
#endif /* __VideoActivexLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


