#!/usr/bin/bash
###########################################
# Build script to generate the
# makefile using cmake.
#
# @author: Surya Paruchuri
# @date: March 18 2018.
###########################################
cmake -G "Unix Makefiles" -DCMAKE_BUILD_TYPE=Debug
