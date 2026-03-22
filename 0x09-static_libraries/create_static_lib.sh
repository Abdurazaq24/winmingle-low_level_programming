#!/bin/bash
gcc -wall -pedantic -werror -wextre -c *.c
ar -rc liball.a *.o
ranlib liball.a
