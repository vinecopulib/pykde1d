#!/bin/bash
# Extracts the doxygen documentation from the kde1d sources

python3 scripts/mkdocs.py -I'lib/kde1d/include' -I'lib/eigen/' $(find lib/kde1d/include -regextype awk -regex ".*(kde1d|stats)\.(hpp|ipp)" -print) -output='src/docstr.hpp'
