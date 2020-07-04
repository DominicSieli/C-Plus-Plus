#!/usr/bin/env bash

cd ../..

mkdir -p Binaries/Linux

title=${PWD##*/}_Debug.bin

g++ -g -Wall -std=c++17 Source/*.cpp -o Binaries/Linux/$title

./Binaries/Linux/$title