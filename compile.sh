#!/bin/bash

ag++ -c src/main.cpp
ag++ -c src/BalanceAspect.ah

g++ -o bank *.o

rm *.o
