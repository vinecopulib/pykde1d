#pragma once
// GENERATED FILE DO NOT EDIT
// This file contains docstrings for the Python bindings that were
// automatically extracted by mkdoc.py.
#if defined(__GNUG__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-variable"
#endif
// #include "kde1d.hpp"
// #include "kde1d/kde1d.hpp"
// #include "kde1d/stats.hpp"

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
        // Source: kde1d/kde1d.hpp:23
        const char* doc_3args =
R"""(construct model from an already fit interpolation grid.

Parameter ``grid``:
    the interpolation grid.

Parameter ``xmin``:
    lower bound for the support of the density, ``NaN`` means no
    boundary.

Parameter ``xmax``:
    upper bound for the support of the density, ``NaN`` means no
    boundary.)""";
        // Source: kde1d/kde1d.hpp:115
        const char* doc_5args =
R"""(constructor for fitting the density estimate.

Parameter ``bw``:
    positive bandwidth parameter (NaN means automatic selection).

Parameter ``mult``:
    bandwidth multiplier.

Parameter ``xmin``:
    lower bound for the support of the density, ``NaN`` means no
    boundary.

Parameter ``xmax``:
    upper bound for the support of the density, ``NaN`` means no
    boundary.

Parameter ``deg``:
    order of the local polynomial.)""";
      } ctor;
      // Symbol: kde1d::Kde1d::calculate_infl
      struct /* calculate_infl */ {
        // Source: kde1d/kde1d.hpp:438
        const char* doc =
R"""(calculate influence for data point for density estimate based on
quantities pre-computed in ``fit_lp()``.)""";
      } calculate_infl;
      // Symbol: kde1d::Kde1d::cdf
      struct /* cdf */ {
        // Source: kde1d/kde1d.hpp:36
        const char* doc =
R"""(computes the cdf of the kernel density estimate by numerical
integration.

Parameter ``x``:
    vector of evaluation points.

Returns:
    a vector of cdf values.)""";
      } cdf;
      // Symbol: kde1d::Kde1d::fit
      struct /* fit */ {
        // Source: kde1d/kde1d.hpp:27
        const char* doc =
R"""(Parameter ``x``:
    vector of observations

Parameter ``weights``:
    vector of weights for each observation (optional).)""";
      } fit;
      // Symbol: kde1d::Kde1d::get_bw
      struct /* get_bw */ {
        // Source: kde1d/kde1d.hpp:44
        const char* doc = R"""()""";
      } get_bw;
      // Symbol: kde1d::Kde1d::get_deg
      struct /* get_deg */ {
        // Source: kde1d/kde1d.hpp:46
        const char* doc = R"""()""";
      } get_deg;
      // Symbol: kde1d::Kde1d::get_edf
      struct /* get_edf */ {
        // Source: kde1d/kde1d.hpp:49
        const char* doc = R"""()""";
      } get_edf;
      // Symbol: kde1d::Kde1d::get_grid_points
      struct /* get_grid_points */ {
        // Source: kde1d/kde1d.hpp:43
        const char* doc = R"""()""";
      } get_grid_points;
      // Symbol: kde1d::Kde1d::get_loglik
      struct /* get_loglik */ {
        // Source: kde1d/kde1d.hpp:50
        const char* doc = R"""()""";
      } get_loglik;
      // Symbol: kde1d::Kde1d::get_mult
      struct /* get_mult */ {
        // Source: kde1d/kde1d.hpp:45
        const char* doc = R"""()""";
      } get_mult;
      // Symbol: kde1d::Kde1d::get_values
      struct /* get_values */ {
        // Source: kde1d/kde1d.hpp:42
        const char* doc = R"""()""";
      } get_values;
      // Symbol: kde1d::Kde1d::get_xmax
      struct /* get_xmax */ {
        // Source: kde1d/kde1d.hpp:48
        const char* doc = R"""()""";
      } get_xmax;
      // Symbol: kde1d::Kde1d::get_xmin
      struct /* get_xmin */ {
        // Source: kde1d/kde1d.hpp:47
        const char* doc = R"""()""";
      } get_xmin;
      // Symbol: kde1d::Kde1d::pdf
      struct /* pdf */ {
        // Source: kde1d/kde1d.hpp:34
        const char* doc =
R"""(computes the pdf of the kernel density estimate by interpolation.

Parameter ``x``:
    vector of evaluation points.

Returns:
    a vector of pdf values.)""";
      } pdf;
      // Symbol: kde1d::Kde1d::quantile
      struct /* quantile */ {
        // Source: kde1d/kde1d.hpp:38
        const char* doc =
R"""(computes the cdf of the kernel density estimate by numerical
inversion.

Parameter ``x``:
    vector of evaluation points.

Returns:
    a vector of quantiles.)""";
      } quantile;
      // Symbol: kde1d::Kde1d::select_bw
      struct /* select_bw */ {
        // Source: kde1d/kde1d.hpp:593
        const char* doc = R"""()""";
      } select_bw;
      // Symbol: kde1d::Kde1d::simulate
      struct /* simulate */ {
        // Source: kde1d/kde1d.hpp:354
        const char* doc =
R"""(simulates data from the model.

Parameter ``n``:
    the number of observations to simulate.

Parameter ``seeds``:
    an optional vector of seeds.

Returns:
    simulated observations from the kernel density.)""";
      } simulate;
      // Symbol: kde1d::Kde1d::str
      struct /* str */ {
        // Source: kde1d/kde1d.hpp:52
        const char* doc = R"""()""";
      } str;
    } Kde1d;
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
        // Source: kde1d/stats.hpp:152
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
        // Source: kde1d/stats.hpp:208
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
  } kde1d;
} pykde1d_doc;

#if defined(__GNUG__)
#pragma GCC diagnostic pop
#endif
