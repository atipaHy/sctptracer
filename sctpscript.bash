#!/bin/bash

cp -a tcptrace-6.6.7 tcptrace-6.6.72
wait
cd tcptrace-6.6.72
wait
#Niklas ändring
#Jonas ändring
./configure
wait
make
wait
make install
wait
cd ..
wait
rm -rf tcptrace-6.6.72
wait
cd /usr/local/bin
wait
./tcptrace SkypeIRC.cap