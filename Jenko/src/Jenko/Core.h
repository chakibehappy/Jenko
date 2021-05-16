#pragma once

#ifdef JK_PLATFORM_WINDOWS
	#ifdef JK_BUILD_DLL
		#define JENKO_API __declspec(dllexport)
	#else
		#define JENKO_API __declspec(dllimport)
	#endif
#else
	#error Jenko Only Supports Windows!
#endif
