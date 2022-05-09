#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra *.c -c -fPIC
gcc -Wall -pedantic -Werror -Wextra *.o -shared -o liball.so
