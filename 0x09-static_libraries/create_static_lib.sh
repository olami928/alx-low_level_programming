#!/bin/bash
gcc -c *.c
ar rcs liball.a *.
rm -f *.o
lso
