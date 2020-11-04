cd ..

mkdir Assembly

echo #pragma once > Source\Configuration.h
echo #define WINDOWS >> Source\Configuration.h
echo #define DEBUG >> Source\Configuration.h

set /p file="Source File: "

g++ -S -g -Wall -std=c++17 Source/%file%.cpp -o Assembly/%file%_%~n0