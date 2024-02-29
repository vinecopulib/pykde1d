#pragma once
// GENERATED FILE DO NOT EDIT
// This file contains docstrings for the Python bindings that were
// automatically extracted by mkdoc.py.
#if defined(__GNUG__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-variable"
#endif
// #include "kde1d.hpp"
// #include "kde1d/dpik.hpp"
// #include "kde1d/interpolation.hpp"
// #include "kde1d/kde1d.hpp"
// #include "kde1d/kdefft.hpp"
// #include "kde1d/stats.hpp"
// #include "kde1d/tools.hpp"
// #include "kde1d/version.hpp"

// Symbol: pykde1d_doc
constexpr struct /* pykde1d_doc */ {
  // Symbol: kde1d
  struct /* kde1d */ {
    // Symbol: kde1d::Kde1d
    struct /* Kde1d */ {
      // Source: kde1d/kde1d.hpp:13
      const char* doc =
R"""(Local-polynomial density estimation in 1-d.)""";
      // Symbol: kde1d::Kde1d::Kde1d
      struct /* ctor */ {
        // Source: kde1d/kde1d.hpp:17
        const char* doc_6args =
R"""(constructor for fitting the density estimate.

Parameter ``nlevels``:
    number of levels for a discrete distribution (0 means a continuous
    distribution).

Parameter ``xmin``:
    lower bound for the support of the density, ``NaN`` means no
    boundary.

Parameter ``xmax``:
    upper bound for the support of the density, ``NaN`` means no
    boundary.

Parameter ``multiplier``:
    bandwidth multiplier (default is 1.0).

Parameter ``bandwidth``:
    positive bandwidth parameter (``NaN`` means automatic selection).

Parameter ``degree``:
    degree of the local polynomial.)""";
        // Source: kde1d/kde1d.hpp:24
        const char* doc_4args =
R"""(construct model from an already fit interpolation grid.

Parameter ``grid``:
    the interpolation grid.

Parameter ``nlevels``:
    number of factor levels; 0 for continuous variables.

Parameter ``xmin``:
    lower bound for the support of the density, ``NaN`` means no
    boundary.

Parameter ``xmax``:
    upper bound for the support of the density, ``NaN`` means no
    boundary.)""";
      } ctor;
      // Symbol: kde1d::Kde1d::cdf
      struct /* cdf */ {
        // Source: kde1d/kde1d.hpp:35
        const char* doc =
R"""(computes the cdf of the kernel density estimate by numerical
integration.

Parameter ``x``:
    vector of evaluation points.

Parameter ``check_fitted``:
    an optional logical to bypass the check.

Returns:
    a vector of cdf values.)""";
      } cdf;
      // Symbol: kde1d::Kde1d::fit
      struct /* fit */ {
        // Source: kde1d/kde1d.hpp:29
        const char* doc =
R"""(Parameter ``x``:
    vector of observations

Parameter ``weights``:
    vector of weights for each observation (optional).)""";
      } fit;
      // Symbol: kde1d::Kde1d::get_bandwidth
      struct /* get_bandwidth */ {
        // Source: kde1d/kde1d.hpp:50
        const char* doc = R"""()""";
      } get_bandwidth;
      // Symbol: kde1d::Kde1d::get_degree
      struct /* get_degree */ {
        // Source: kde1d/kde1d.hpp:51
        const char* doc = R"""()""";
      } get_degree;
      // Symbol: kde1d::Kde1d::get_edf
      struct /* get_edf */ {
        // Source: kde1d/kde1d.hpp:52
        const char* doc = R"""()""";
      } get_edf;
      // Symbol: kde1d::Kde1d::get_grid_points
      struct /* get_grid_points */ {
        // Source: kde1d/kde1d.hpp:45
        const char* doc = R"""()""";
      } get_grid_points;
      // Symbol: kde1d::Kde1d::get_loglik
      struct /* get_loglik */ {
        // Source: kde1d/kde1d.hpp:53
        const char* doc = R"""()""";
      } get_loglik;
      // Symbol: kde1d::Kde1d::get_multiplier
      struct /* get_multiplier */ {
        // Source: kde1d/kde1d.hpp:47
        const char* doc = R"""()""";
      } get_multiplier;
      // Symbol: kde1d::Kde1d::get_nlevels
      struct /* get_nlevels */ {
        // Source: kde1d/kde1d.hpp:49
        const char* doc = R"""()""";
      } get_nlevels;
      // Symbol: kde1d::Kde1d::get_values
      struct /* get_values */ {
        // Source: kde1d/kde1d.hpp:44
        const char* doc = R"""()""";
      } get_values;
      // Symbol: kde1d::Kde1d::get_xmax
      struct /* get_xmax */ {
        // Source: kde1d/kde1d.hpp:48
        const char* doc = R"""()""";
      } get_xmax;
      // Symbol: kde1d::Kde1d::get_xmin
      struct /* get_xmin */ {
        // Source: kde1d/kde1d.hpp:46
        const char* doc = R"""()""";
      } get_xmin;
      // Symbol: kde1d::Kde1d::pdf
      struct /* pdf */ {
        // Source: kde1d/kde1d.hpp:33
        const char* doc =
R"""(computes the pdf of the kernel density estimate by interpolation.

Parameter ``x``:
    vector of evaluation points.

Parameter ``check_fitted``:
    an optional logical to bypass the check.

Returns:
    a vector of pdf values.)""";
      } pdf;
      // Symbol: kde1d::Kde1d::quantile
      struct /* quantile */ {
        // Source: kde1d/kde1d.hpp:37
        const char* doc =
R"""(computes the cdf of the kernel density estimate by numerical
inversion.

Parameter ``x``:
    vector of evaluation points.

Parameter ``check_fitted``:
    an optional logical to bypass the check.

Returns:
    a vector of quantiles.)""";
      } quantile;
      // Symbol: kde1d::Kde1d::set_interpolation_grid
      struct /* set_interpolation_grid */ {
        // Source: kde1d/kde1d.hpp:67
        const char* doc = R"""()""";
      } set_interpolation_grid;
      // Symbol: kde1d::Kde1d::set_xmin_xmax
      struct /* set_xmin_xmax */ {
        // Source: kde1d/kde1d.hpp:54
        const char* doc = R"""()""";
      } set_xmin_xmax;
      // Symbol: kde1d::Kde1d::simulate
      struct /* simulate */ {
        // Source: kde1d/kde1d.hpp:365
        const char* doc =
R"""(simulates data from the model.

Parameter ``n``:
    the number of observations to simulate.

Parameter ``seeds``:
    an optional vector of seeds.

Parameter ``check_fitted``:
    an optional logical to bypass the check.

Returns:
    simulated observations from the kernel density.)""";
      } simulate;
      // Symbol: kde1d::Kde1d::str
      struct /* str */ {
        // Source: kde1d/kde1d.hpp:56
        const char* doc = R"""()""";
      } str;
    } Kde1d;
    // Symbol: kde1d::bandwidth
    struct /* bandwidth */ {
      // Symbol: kde1d::bandwidth::PluginBandwidthSelector
      struct /* PluginBandwidthSelector */ {
        // Source: kde1d/dpik.hpp:19
        const char* doc =
R"""(Bandwidth selection for local-likelihood density estimation.
Methodology is similar to Sheather and Jones(1991), but asymptotic
bias/variance expressions are adapted for higher-order polynomials and
nearest neighbor bandwidths.)""";
        // Symbol: kde1d::bandwidth::PluginBandwidthSelector::PluginBandwidthSelector
        struct /* ctor */ {
          // Source: kde1d/dpik.hpp:22
          const char* doc =
R"""(Parameter ``x``:
    vector of observations.

Parameter ``weigths``:
    optional vector of weights for each observation.)""";
        } ctor;
        // Symbol: kde1d::bandwidth::PluginBandwidthSelector::select_bandwidth
        struct /* select_bandwidth */ {
          // Source: kde1d/dpik.hpp:24
          const char* doc =
R"""(Selects the bandwidth for kernel density estimation.

Parameter ``degree``:
    degree of the local polynomial.)""";
        } select_bandwidth;
      } PluginBandwidthSelector;
    } bandwidth;
    // Symbol: kde1d::fft
    struct /* fft */ {
      // Symbol: kde1d::fft::KdeFFT
      struct /* KdeFFT */ {
        // Source: kde1d/kdefft.hpp:15
        const char* doc =
R"""(Bandwidth selection for local-likelihood density estimation.
Methodology is similar to Sheather and Jones(1991), but asymptotic
bias/variance expressions are adapted for higher-order polynomials and
nearest neighbor bandwidths.)""";
        // Symbol: kde1d::fft::KdeFFT::KdeFFT
        struct /* ctor */ {
          // Source: kde1d/kdefft.hpp:18
          const char* doc =
R"""(Parameter ``x``:
    vector of observations.

Parameter ``bandwidth``:
    the bandwidth parameter.

Parameter ``lower``:
    lower bound of the grid.

Parameter ``upper``:
    bound of the grid.

Parameter ``weigths``:
    optional vector of weights for each observation.)""";
        } ctor;
        // Symbol: kde1d::fft::KdeFFT::get_bin_counts
        struct /* get_bin_counts */ {
          // Source: kde1d/kdefft.hpp:25
          const char* doc = R"""()""";
        } get_bin_counts;
        // Symbol: kde1d::fft::KdeFFT::kde_drv
        struct /* kde_drv */ {
          // Source: kde1d/kdefft.hpp:24
          const char* doc =
R"""(Binned kernel density derivative estimate

Parameter ``drv``:
    order of derivative.

Returns:
    estimated derivative evaluated at the bin centers.)""";
        } kde_drv;
        // Symbol: kde1d::fft::KdeFFT::set_bandwidth
        struct /* set_bandwidth */ {
          // Source: kde1d/kdefft.hpp:26
          const char* doc = R"""()""";
        } set_bandwidth;
      } KdeFFT;
    } fft;
    // Symbol: kde1d::interp
    struct /* interp */ {
      // Symbol: kde1d::interp::InterpolationGrid
      struct /* InterpolationGrid */ {
        // Source: kde1d/interpolation.hpp:14
        const char* doc =
R"""(A class for cubic spline interpolation in one dimension

The class is used for implementing kernel estimators. It makes storing
the observations obsolete and allows for fast numerical integration.)""";
        // Symbol: kde1d::interp::InterpolationGrid::InterpolationGrid
        struct /* ctor */ {
          // Source: kde1d/interpolation.hpp:17
          const char* doc_0args = R"""()""";
          // Source: kde1d/interpolation.hpp:19
          const char* doc_3args =
R"""(Constructor

Parameter ``grid_points``:
    an ascending sequence of grid points.

Parameter ``values``:
    a vector of values of same length as grid_points.

Parameter ``norm_times``:
    how many times the normalization routine should run.)""";
        } ctor;
        // Symbol: kde1d::interp::InterpolationGrid::get_grid_max
        struct /* get_grid_max */ {
          // Source: kde1d/interpolation.hpp:32
          const char* doc = R"""()""";
        } get_grid_max;
        // Symbol: kde1d::interp::InterpolationGrid::get_grid_min
        struct /* get_grid_min */ {
          // Source: kde1d/interpolation.hpp:33
          const char* doc = R"""()""";
        } get_grid_min;
        // Symbol: kde1d::interp::InterpolationGrid::get_grid_points
        struct /* get_grid_points */ {
          // Source: kde1d/interpolation.hpp:31
          const char* doc = R"""()""";
        } get_grid_points;
        // Symbol: kde1d::interp::InterpolationGrid::get_values
        struct /* get_values */ {
          // Source: kde1d/interpolation.hpp:30
          const char* doc = R"""()""";
        } get_values;
        // Symbol: kde1d::interp::InterpolationGrid::integrate
        struct /* integrate */ {
          // Source: kde1d/interpolation.hpp:27
          const char* doc =
R"""(Integration along the grid

Parameter ``x``:
    a vector of evaluation points

Parameter ``normalize``:
    whether to normalize the integral to a maximum value of 1.)""";
        } integrate;
        // Symbol: kde1d::interp::InterpolationGrid::interpolate
        struct /* interpolate */ {
          // Source: kde1d/interpolation.hpp:25
          const char* doc =
R"""(Interpolation

Parameter ``x``:
    vector of evaluation points.)""";
        } interpolate;
        // Symbol: kde1d::interp::InterpolationGrid::normalize
        struct /* normalize */ {
          // Source: kde1d/interpolation.hpp:23
          const char* doc =
R"""(renormalizes the estimate to integrate to one

Parameter ``times``:
    how many times the normalization routine should run.)""";
        } normalize;
      } InterpolationGrid;
    } interp;
    // Symbol: kde1d::stats
    struct /* stats */ {
      // Symbol: kde1d::stats::dnorm
      struct /* dnorm */ {
        // Source: kde1d/stats.hpp:21
        const char* doc =
R"""(standard normal density

Parameter ``x``:
    evaluation points.

Returns:
    matrix of pdf values.)""";
      } dnorm;
      // Symbol: kde1d::stats::dnorm_drv
      struct /* dnorm_drv */ {
        // Source: kde1d/stats.hpp:33
        const char* doc =
R"""(standard normal density

Parameter ``x``:
    evaluation points.

Parameter ``drv``:
    order of the derivative

Returns:
    matrix of pdf values.)""";
      } dnorm_drv;
      // Symbol: kde1d::stats::equi_jitter
      struct /* equi_jitter */ {
        // Source: kde1d/stats.hpp:151
        const char* doc = R"""()""";
      } equi_jitter;
      // Symbol: kde1d::stats::pnorm
      struct /* pnorm */ {
        // Source: kde1d/stats.hpp:52
        const char* doc =
R"""(standard normal cdf

Parameter ``x``:
    evaluation points.

Returns:
    matrix of cdf values.)""";
      } pnorm;
      // Symbol: kde1d::stats::qnorm
      struct /* qnorm */ {
        // Source: kde1d/stats.hpp:63
        const char* doc =
R"""(standard normal quantiles

Parameter ``x``:
    evaluation points.

Returns:
    matrix of quantiles.)""";
      } qnorm;
      // Symbol: kde1d::stats::quantile
      struct /* quantile */ {
        // Source: kde1d/stats.hpp:75
        const char* doc_2args =
R"""(empirical quantiles

Parameter ``x``:
    data.

Parameter ``q``:
    evaluation points.

Returns:
    vector of quantiles.)""";
        // Source: kde1d/stats.hpp:102
        const char* doc_3args =
R"""(empirical quantiles

Parameter ``x``:
    data.

Parameter ``q``:
    evaluation points.

Parameter ``w``:
    vector of weights.

Returns:
    vector of quantiles.)""";
      } quantile;
      // Symbol: kde1d::stats::simulate_uniform
      struct /* simulate_uniform */ {
        // Source: kde1d/stats.hpp:207
        const char* doc =
R"""(simulates from the standard uniform distribution.

Parameter ``n``:
    number of observations.

Parameter ``seeds``:
    seeds of the random number generator; if empty (default), the
    random number generator is seeded randomly.

Returns:
    An size n vector of independent :math:`\mathrm{U}[0, 1]` random
    variables.)""";
      } simulate_uniform;
    } stats;
    // Symbol: kde1d::tools
    struct /* tools */ {
      // Symbol: kde1d::tools::get_order
      struct /* get_order */ {
        // Source: kde1d/tools.hpp:87
        const char* doc = R"""()""";
      } get_order;
      // Symbol: kde1d::tools::invert_f
      struct /* invert_f */ {
        // Source: kde1d/tools.hpp:36
        const char* doc =
R"""(computes the inverse :math:`f^{-1}` of a function :math:`f` by the
bisection method.

Parameter ``x``:
    evaluation points.

Parameter ``f``:
    the function to invert.

Parameter ``lb``:
    lower bound.

Parameter ``ub``:
    upper bound.

Parameter ``n_iter``:
    the number of iterations for the bisection.

Returns:
    :math:`f^{-1}(x)`.)""";
      } invert_f;
      // Symbol: kde1d::tools::linbin
      struct /* linbin */ {
        // Source: kde1d/tools.hpp:104
        const char* doc =
R"""(Computes bin counts for univariate data via the linear binning
strategy.

Parameter ``x``:
    vector of observations

Parameter ``weights``:
    vector of weights for each observation.)""";
      } linbin;
      // Symbol: kde1d::tools::remove_nans
      struct /* remove_nans */ {
        // Source: kde1d/tools.hpp:60
        const char* doc =
R"""(remove rows of a matrix which contain nan values or have zero weight

Parameter ``x``:
    the matrix.

Parameter ``a``:
    vector of weights that is either empty or whose size is equal to
    the number of columns of x.)""";
      } remove_nans;
      // Symbol: kde1d::tools::unaryExpr_or_nan
      struct /* unaryExpr_or_nan */ {
        // Source: kde1d/tools.hpp:14
        const char* doc =
R"""(applies a function to each non-NaN value, otherwise returns NaN

Parameter ``x``:
    function argument.

Parameter ``func``:
    function to be applied.)""";
      } unaryExpr_or_nan;
    } tools;
  } kde1d;
} pykde1d_doc;

#if defined(__GNUG__)
#pragma GCC diagnostic pop
#endif
