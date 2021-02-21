#!/bin/bash
gcc $1 -o main `pkg-config --libs --cflags gtk+-3.0`