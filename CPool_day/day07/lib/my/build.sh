#!/bin/bash
gcc *.c -c
ar rc libmy.a *.0
chmod 777 libmy.a
rm *.o
