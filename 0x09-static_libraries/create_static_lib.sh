#!/bin/bash
gcc -Wall -pedantic -Werrorn -Wextra -c *.c
ar -rc liball.a *.o
ranlib liball.a
