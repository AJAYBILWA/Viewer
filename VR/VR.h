#pragma once

#ifdef VR_EXPORTS
#define VR_API __declspec(dllexport)
#else
#define VR_API __declspec(dllimport)
#endif

extern "C" VR_API void Init_VR();