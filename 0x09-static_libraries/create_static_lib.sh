#!/bin/bash
ar -r liball.a
grep -E ".c"
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 .c -o .c
ar -r liball.a .o

