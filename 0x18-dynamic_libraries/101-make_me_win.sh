#!/bin/bash
wget -P .. https://raw.githubusercontent.com/Nelly696/alx_low_level_programming/master/0x18-dynamic_libraries/libhack.so
export LD_PRELOAD="$PWD/ ../libhack.so"
