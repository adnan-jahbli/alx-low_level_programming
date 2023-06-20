#!/bin/bash
gcc -c *.c -fpic
gcc *.o -shared -Wl,-soname,liball.so -o liball.so
