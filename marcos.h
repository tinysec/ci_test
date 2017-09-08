
/*
********************************************************************
 Created:	2017-09-07 18:38:36
 Filename: 	marcos.h
 Author:	root[at]TinySec.net
 Version	0.0.0.1
 Purpose:	
*********************************************************************
*/
#ifndef _MARCOS_HEADER_FILE_
	#define _MARCOS_HEADER_FILE_
#ifdef __cplusplus
extern "C"
	{
#endif
////////////////////////////////////////////////////////////////////


#ifndef MAKEULONG
	#define MAKEULONG(low , high )	((ULONG)(((USHORT)((ULONG_PTR)(low) & 0xffff)) | ((ULONG)((USHORT)((ULONG_PTR)(high) & 0xffff))) << 16))
#endif // #ifndef MAKEULONG
 
#ifndef MAKEUSHORT
	#define MAKEUSHORT(low,high) ((USHORT)(((UCHAR)(low)) | ((USHORT)((UCHAR)(high))) << 8))
#endif // #ifndef MAKEUSHORT


#ifndef MAKE_VERSION
	#define MAKE_VERSION( v1 , v2 , v3 , v4 ) MAKEULONG( MAKEUSHORT(v4 , v3 ) , MAKEUSHORT(v2 , v1 ) )
#endif // #ifndef MAKE_VERSION



///////////////////////////////////////////////////////////////////
#ifdef __cplusplus
	}
#endif
#endif // _MARCOS_HEADER_FILE_


