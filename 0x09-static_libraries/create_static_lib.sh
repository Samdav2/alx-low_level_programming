#!/bin/bash
gcc -Wall -pendatic -Werro -Wextra -c *.c
ar rc liball.a *.o
ranlib liball.a
