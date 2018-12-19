// Contains declarations of math functions
#pragma once

#ifdef HUMAN_EXPORTS
#define HUMAN_API __declspec(dllexport)
#else
#define HUMAN_API __declspec(dllimport)
#endif

extern "C" HUMAN_API void hello();
