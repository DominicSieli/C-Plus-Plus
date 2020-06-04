#!/usr/bin/env bash

cd ..
cd ..

mkdir -p Assembly/Linux

projectName=${PWD##*/}_Assembly_Optimized

g++ -S -O -std=c++17 Source/*.cpp -o Assembly/Linux/$projectName