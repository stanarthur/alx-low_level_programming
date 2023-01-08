#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -o *.c
ar rcs liball.a *.o
ranlib liball.a