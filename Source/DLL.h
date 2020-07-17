#pragma once

#include <iostream>

#define DLL_EXPORT

extern "C"
{
#ifdef DLL_EXPORT
#define DLL __declspec(dllexport)
#else
#define DLL __declspec(dllimport)
#endif

        __stdcall void DLL_Test()
        {
                std::cout << "DLL Success!" << '\n';
        }
}
#endif