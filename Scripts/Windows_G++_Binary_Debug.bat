cd ..

mkdir Binaries

echo #pragma once > Source\Configuration.h
echo #define WINDOWS >> Source\Configuration.h
echo #define DEBUG >> Source\Configuration.h

set /p file="Source File: "

g++ -g -Wall -std=c++17 Source/%file%.cpp -o Binaries/%file%_%~n0.exe

start Binaries/%file%_%~n0.exe