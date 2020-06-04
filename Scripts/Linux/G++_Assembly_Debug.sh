#!/usr/bin/env bash

cd ..
cd ..

mkdir -p Assembly/Linux

projectName=${PWD##*/}_Assembly_Debug

g++ -S -g -Wall -std=c++17 Source/*.cpp -o Assembly/Linux/$projectName