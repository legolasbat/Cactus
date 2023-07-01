#pragma once

#ifdef CT_PLATFORM_WINDOWS
	#ifdef CT_BUILD_DLL
		#define CACTUS_API __declspec(dllexport)
	#else
		#define CACTUS_API __declspec(dllimport)
	#endif
#else
	#error Cactus Engine only supports Windows
#endif

#ifdef CT_ENABLE_ASSERTS
	#define CACTUS_ASSERT(x, ...) { if(!(x)) { CACTUS_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
	#define CACTUS_CORE_ASSERT(x, ...) { if(!(x)) { CACTUS_CORE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
#else
	#define CACTUS_ASSERT(x, ...)
	#define CACTUS_CORE_ASSERT(x, ...)
#endif

#define BIT(x) (1 << x)
