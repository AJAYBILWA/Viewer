#pragma once

#ifdef HTM_EXPORTS
#define HTM_API __declspec(dllexport)
#else
#define HTM_API __declspec(dllimport)
#endif

extern "C" HTM_API void Init_HTM();