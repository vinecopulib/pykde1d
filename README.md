# pykde1d

[![Build Status](https://github.com/vinecopulib/pykde1d/workflows/Build%20Status/badge.svg?branch=master)](https://github.com/vinecopulib/pykde1d/actions)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![Codacy Badge](https://api.codacy.com/project/badge/Grade/3c0056d3ca5244a5ba6a2b32f87be4cf)](https://www.codacy.com/gh/vinecopulib/pykde1d?utm_source=github.com&utm_medium=referral&utm_content=vinecopulib/pykde1d&utm_campaign=Badge_Grade)
[![Documentation](https://img.shields.io/website/http/vinecopulib.github.io/pykde1d.svg)](https://vinecopulib.github.io/pykde1d/)

### Summary

This library provides a fast and flexible univariate kernel density estimator for Python:

- It implements a univariate kernel density estimator that can handle
bounded and discrete data,
- It provides classical kernel density as well as log-linear and log-quadratic methods,
- It is highly efficient due to the Fast Fourier Transform, spline interpolation,
  and a C++ backend.

For details, see the
[API documentation](https://tnagler.github.io/kde1d/).

### Prerequisites

- numpy (>=1.14)
- To install from source:
    - pybind11 (>=2.4)
    - setuptools (>=30.3.0)
    - setuptools_scm (>=2.0.0)
    - a compiler with C++11 support (Linux, OS X) or Visual Studio 2015 (required for all Python versions, see notes below)
    - Eigen (the environment variable `EIGEN3_INCLUDE_DIR` must be set to the directory containing the Eigen headers)
    - boost (the environment variable `Boost_INCLUDE_DIR` must be set to the directory containing the boost headers)

### Installation

The easiest way to install the latest release is to use `pip`:

```
pip install pykde1d
```

To install from source, just clone this repository and do `pip install`.
Note the `--recursive` option which is needed for the `vinecopulib` and `wdm` submodules:

```bash
git clone --recursive https://github.com/vinecopulib/pykde1d.git
pip install ./pykde1d
```

Note that Eigen and Boost need to be available on your system for the build to succeed, using the environment variables `EIGEN3_INCLUDE_DIR` and `Boost_INCLUDE_DIR` respectively.
