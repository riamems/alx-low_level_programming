#!/bin/bash
gcc -Wall -pedantic  -Werror -Wextra -C *.C
ar  rcs liball.a *.o
ranlib liball.a
