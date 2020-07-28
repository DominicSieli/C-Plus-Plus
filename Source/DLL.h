#pragma once

#include <iostream>

#include "Configuration.h"

extern "C"
{

#ifdef LINUX

#ifdef DLL_EXPORT
#define API __declspec(dllexport)
#endif

#ifdef DLL_IMPORT
#define API __declspec(dllimport)
#endif

#endif

#ifdef WINDOWS

#ifdef DLL_EXPORT
#define API __declspec(dllexport)
#endif

#ifdef DLL_IMPORT
#define API __declspec(dllimport)
#endif

#endif

        void API DLL_Test()
        {
                std::cout << "Success!" << '\n';
        }
}