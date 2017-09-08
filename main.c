/*
********************************************************************
 Created:	2016-10-30 16:36:59
 Filename: 	main.c 
 Author:	root[at]TinySec.net
 Version	0.0.0.1
 Purpose:	main of of ci_test
*********************************************************************
*/

#include "precompile.h"


extern ULONG* InitSafeBootMode;

//////////////////////////////////////////////////////////////////////////

__drv_functionClass(DRIVER_UNLOAD)
__drv_requiresIRQL(PASSIVE_LEVEL)
__drv_sameIRQL
VOID NTAPI OnDriverUnload(__in DRIVER_OBJECT* pDriverObject)
{
	NTSTATUS Status = STATUS_UNSUCCESSFUL;
	
	do 
	{
		KdPrint(("[*] %s(%d) Is going to unload! \n"  , __FUNCTION__, __LINE__ ));
		
		// destroy log system
		Status = STATUS_SUCCESS;
	} while (FALSE);
}

NTSTATUS NTAPI DriverEntry(__in DRIVER_OBJECT* pDriverObject , __in UNICODE_STRING* pusRegRootPath)
{
	NTSTATUS	FinalStatus = STATUS_NOT_SUPPORTED;
	NTSTATUS	Status = STATUS_UNSUCCESSFUL;
	ULONG		i = 0;

	do 
	{
		if (*InitSafeBootMode > 0)
		{
			KdPrint(("[-] %s(%d) Not Supported Safe Mode !\n", __FUNCTION__, __LINE__ ));
			FinalStatus = STATUS_NOT_SUPPORTED;
			break;
		}
		
		KdPrint(("[*] %s(%d) start! \n"  , __FUNCTION__, __LINE__ ));
a

		FinalStatus = STATUS_SUCCESS;
	} while (FALSE);

	return FinalStatus;
}




