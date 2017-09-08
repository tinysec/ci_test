#ifndef _PRECOMPILE_HEADER_FILE_
	#define _PRECOMPILE_HEADER_FILE_
////////////////////////////////////////////////////////////////////

#ifdef _WIN64
	
	// For Windows Vista
	
#ifndef WINVER
		#define WINVER          0x0600
	#endif

	#ifndef _WIN32_WINNT
		#define _WIN32_WINNT    0x0600
	#endif

	#ifndef _WIN32_IE
		#define _WIN32_IE       0x0600	
	#endif

	#ifndef NTDDI_VERSION
		#define NTDDI_VERSION   0x06000000	
	#endif

#else

	#ifndef WINVER
		#define WINVER          0x0501
	#endif

	#ifndef _WIN32_WINNT
		#define _WIN32_WINNT    0x0501
	#endif

	#ifndef _WIN32_IE
		#define _WIN32_IE       0x0501
	#endif

	#ifndef NTDDI_VERSION
		#define NTDDI_VERSION   0x05010000
	#endif

#endif  //_WIN64



#include <ntifs.h>
#define NTSTRSAFE_NO_DEPRECATE
#include <ntstrsafe.h>

#include <ntimage.h>

#include "marcos.h"

#include "version.h"

///////////////////////////////////////////////////////////////////
#endif // _PRECOMPILE_HEADER_FILE_


