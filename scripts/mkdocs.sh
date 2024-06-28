#!/bin/bash
# Extracts the doxygen documentation from the kde1d sources

echo "Using libclang at ${LIBCLANG_PATH}"
echo "Using boost at ${Boost_INCLUDE_DIR}"
echo "Using eigen3 at ${EIGEN3_INCLUDE_DIR}"
python3 -m pybind11_mkdoc -I 'lib/kde1d/include' -I $Boost_INCLUDE_DIR  -I ${EIGEN3_INCLUDE_DIR} $(find lib/kde1d/include -regextype awk -regex ".*.hpp" -print) --output 'src/docstr.hpp'
