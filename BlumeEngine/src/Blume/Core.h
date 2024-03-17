#pragma once

#ifdef BE_PLATFORM_WINDOWS
	#ifdef BE_BUILD_DLL
		#define BLUME_API __declspec(dllexport)
	#else
		#define BLUME_API __declspec(dllimport)
	#endif
#else
	#error Blume currently only has support for windows
#endif