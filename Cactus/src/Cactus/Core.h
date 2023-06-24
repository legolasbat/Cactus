#pragma once

#ifdef CT_PLATFORM_WINDOWS
	#ifdef CT_BUILD_DLL
		#define CT_API __declspec(dllexport)
	#else
		#define CT_API __declspec(dllimport)
	#endif
#else
	#error Cactus Engine only supports Windows
#endif
