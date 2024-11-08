#!/bin/bash
# Extracts the doxygen documentation from the kde1d sources


echo "Using boost at ${Boost_INCLUDE_DIR}"
echo "Using eigen3 at ${EIGEN3_INCLUDE_DIR}"
python3 scripts/mkdocs.py -I'lib/vinecopulib/include' -I'/usr/include' $(find lib/kde1d/include -regextype awk -regex ".*.hpp" -print) -output='src/include/docstr.hpp'