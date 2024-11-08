#!/bin/bash
export Boost_INCLUDE_DIR=$CONDA_PREFIX/include
export EIGEN3_INCLUDE_DIR=$CONDA_PREFIX/include/eigen3
export LIBCLANG_PATH=$(find "$CONDA_PREFIX" -name libclang.so | head -n 1)