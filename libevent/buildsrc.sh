#!/bin/sh

cd src

gcc -Wall -g libsu_new_program.c libsu_old_program.c -fPIC -shared -o libsu.so   \
-I../../../cppmaven/cpprepos/libevent-2.0.21-stable/include/   \
-L../../../cppmaven/cpprepos/libevent-2.0.21-stable/lib/ -levent_core

mv libsu.so ../lib/
cd ..
