cd ..

mkdir Binaries

echo #pragma once > Source\Configuration.h
echo #define WINDOWS >> Source\Configuration.h
echo #define DLL_EXPORT >> Source\Configuration.h

set /p file="Source File: "
set file=%project%_%~n0

g++ -c -DDLL_EXPORT Source/file.cpp
g++ -shared -o %file%_%~n0.dll %file%_%~n0.o -Wl,--out-implib,libfile.a