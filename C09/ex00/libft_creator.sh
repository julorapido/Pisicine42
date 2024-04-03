#!/bin/bash
cc -c *.c -Wall -Wextra -Werror | ar -rc libft.a
rm *.o
