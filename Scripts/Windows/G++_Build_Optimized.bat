cd ..
cd ..

mkdir Binaries/Windows

set projectName=Build_Optimized

g++ -O -std=c++17 Source/*.cpp -o Binaries/Windows/%projectName%

start Binaries/Windows/%projectName%