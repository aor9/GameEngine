#pragma once

#ifdef AOR_PLATFORM_WINDOWS
	#ifdef AOR_BUILD_DLL
		#define  AOR_API __declspec(dllexport)
	#else
		#define  AOR_API __declspec(dllimport)
	#endif 
#else
	#error Aor only supports Windows!
#endif
