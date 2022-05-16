#!/bin/bash
touch liball.so
chmod 0775 liball.so
gcc -Wall -fPIC -c *.c
gcc -shared -o liball.so *.o
nm -D liball.so
