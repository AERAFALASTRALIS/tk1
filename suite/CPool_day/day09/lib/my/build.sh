#!/bin/bash
gcc *.c -c
ar rc libmy.a *.o
chmod 777 libmy.a
rm *.o
