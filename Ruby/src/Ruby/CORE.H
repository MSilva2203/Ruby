#pragma once

#ifdef RB_PLATFORM_WINDOWS
	#ifdef RUBY_BUILD_DLL	
		#define RUBY_API __declspec(dllexport)
	#else
		#define RUBY_API __declspec(dllimport)
	#endif
#else
	#error Ruby only supports Windows!
#endif