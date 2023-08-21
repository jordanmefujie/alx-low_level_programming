#!/bin/bash
wget -P /tmp https://github.com/jordanmefujie/alx/raw/main/0x18%20C%20-%20Dynamic%20libraries/libdynamic.so
export LD_PRELOAD=/tmp/libgiga.so
