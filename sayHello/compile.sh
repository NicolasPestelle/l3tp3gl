#!/bin/sh

g++ -std=c++14 -c module1.cpp
g++ -c sayHello.cpp
g++  -o sayhello.out  module1.o sayHello.o
