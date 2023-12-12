#!/bin/bash
wget -P /tmp https://github.com/mohamed1kot/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libdynamic.so
export  LD_PRELOAD="/home/mohamed/Desktop/ALX_prgram/alx-low_level_programming/0x18-dynamic_libraries/libdynamic.so"
