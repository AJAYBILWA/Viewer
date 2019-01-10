#pragma once

#ifdef BIM_EXPORTS
#define BIM_API __declspec(dllexport)
#else
#define BIM_API __declspec(dllimport)
#endif

extern "C" BIM_API void Init_BIM();