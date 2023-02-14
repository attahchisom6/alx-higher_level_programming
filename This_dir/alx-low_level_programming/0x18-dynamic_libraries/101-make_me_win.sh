#!/bin/bash
wget -P /tmp https://github.com/attahchisom6/alx-low_level_programming/raw/main/0x18-dynamic_libraries/Gigamil.so
export LD_PRELOAD=/tmp/Gigamil.so
