#!/bin/bash
touch libdynamic.so
chmod 0775 libdynamic.so
gcc -Wall -fPIC -c *.c
gcc -shared -o libdynamic.so *.o
nm -D libdynamic.so
