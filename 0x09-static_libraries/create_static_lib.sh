#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -o *.c
ar rsc liball.a *.o