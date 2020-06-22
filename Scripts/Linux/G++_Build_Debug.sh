#!/usr/bin/env bash

cd ../..

mkdir -p Binaries/Linux

projectName=${PWD##*/}_Build_Debug

g++ -g -Wall -std=c++17 Source/*.cpp -o Binaries/Linux/$projectName

./Binaries/Linux/$projectName