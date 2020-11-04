cd ..

mkdir Assembly

echo #pragma once > Source\Configuration.h
echo #define WINDOWS >> Source\Configuration.h

set /p file="Source File: "

g++ -S -O3 -std=c++17 Source/%file%.cpp -o Assembly/%file%_%~n0