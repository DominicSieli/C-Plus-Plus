#!/usr/bin/env bash

cd ../..

mkdir -p Binaries/Linux

projectName=${PWD##*/}_Build_Optimized

g++ -O3 -std=c++17 Source/*.cpp -o Binaries/Linux/$projectName

./Binaries/Linux/$projectName