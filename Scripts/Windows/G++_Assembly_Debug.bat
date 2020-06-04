cd ..
cd ..

mkdir Assembly/Windows

set projectName=Assembly_Optimized

g++ -S -g -Wall -std=c++17 Source/*.cpp -o Assembly/Windows/%projectName%