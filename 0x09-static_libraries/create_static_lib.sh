#!/bin/bash
cc -c *.c
ar rc liball *.o
ranlib liball.a
