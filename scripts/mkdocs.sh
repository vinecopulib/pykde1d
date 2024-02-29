#!/bin/bash
# Extracts the doxygen documentation from the vinecopulib sources

python3 scripts/mkdocs.py -I'lib/kde1d/include' -I'lib/eigen/' $(find lib/kde1d/include -regextype awk -regex ".*.hpp" -print) -output='src/docstr.hpp'
