#!/bin/bash
gcc -Wall -pedntic -Werror -Wextra -c *.c
ar rc liball.a *.o
ranlib liball
