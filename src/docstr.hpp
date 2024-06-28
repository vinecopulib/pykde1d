#pragma once

/*
  This file contains docstrings for use in the Python bindings.
  Do not edit! They were automatically extracted by pybind11_mkdoc.
 */

#define __EXPAND(x)                                      x
#define __COUNT(_1, _2, _3, _4, _5, _6, _7, COUNT, ...)  COUNT
#define __VA_SIZE(...)                                   __EXPAND(__COUNT(__VA_ARGS__, 7, 6, 5, 4, 3, 2, 1))
#define __CAT1(a, b)                                     a ## b
#define __CAT2(a, b)                                     __CAT1(a, b)
#define __DOC1(n1)                                       __doc_##n1
#define __DOC2(n1, n2)                                   __doc_##n1##_##n2
#define __DOC3(n1, n2, n3)                               __doc_##n1##_##n2##_##n3
#define __DOC4(n1, n2, n3, n4)                           __doc_##n1##_##n2##_##n3##_##n4
#define __DOC5(n1, n2, n3, n4, n5)                       __doc_##n1##_##n2##_##n3##_##n4##_##n5
#define __DOC6(n1, n2, n3, n4, n5, n6)                   __doc_##n1##_##n2##_##n3##_##n4##_##n5##_##n6
#define __DOC7(n1, n2, n3, n4, n5, n6, n7)               __doc_##n1##_##n2##_##n3##_##n4##_##n5##_##n6##_##n7
#define DOC(...)                                         __EXPAND(__EXPAND(__CAT2(__DOC, __VA_SIZE(__VA_ARGS__)))(__VA_ARGS__))

#if defined(__GNUG__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-variable"
#endif


static const char *__doc_kde1d_Kde1d = R"doc(//! Local-polynomial density estimation in 1-d.)doc";

static const char *__doc_kde1d_Kde1d_2 =
R"doc(//! constructor for fitting the density estimate. //!

Parameter ``xmin``:
    lower bound for the support of the density, `NaN` means no //!
    boundary. //!

Parameter ``xmax``:
    upper bound for the support of the density, `NaN` means no //!
    boundary. //!

Parameter ``type``:
    variable type: `VarType::continuous` for //! continuous variables,
    `VarType::discrete` for discrete integer //! variables, or
    `VarType::zero_inflated` for zero-inflated //! variables. //!

Parameter ``multiplier``:
    bandwidth multiplier (default is 1.0). //!

Parameter ``bandwidth``:
    positive bandwidth parameter (`NaN` means automatic //!
    selection). //!

Parameter ``degree``:
    degree of the local polynomial.)doc";

static const char *__doc_kde1d_Kde1d_3 =
R"doc(//! construct model from an already fit interpolation grid. //!

Parameter ``grid``:
    the interpolation grid. //!

Parameter ``xmin``:
    lower bound for the support of the density, `NaN` means no //!
    boundary. //!

Parameter ``xmax``:
    upper bound for the support of the density, `NaN` means no //!
    boundary. //!

Parameter ``type``:
    variable type: `VarType::continuous` for //! continuous variables,
    `VarType::discrete` for discrete integer //! variables, or
    `VarType::zero_inflated` for zero-inflated //! variables. //!

Parameter ``prob0``:
    point mass at 0.)doc";

static const char *__doc_kde1d_Kde1d_4 =
R"doc(//! constructor for fitting the density estimate. //!

Parameter ``xmin``:
    lower bound for the support of the density, `NaN` means no //!
    boundary. //!

Parameter ``xmax``:
    upper bound for the support of the density, `NaN` means no //!
    boundary. //!

Parameter ``type``:
    variable type; must be one of {"c", "cont", "continuous"} for //!
    continuous variables, one of {"d", "disc", "discrete"} for
    discrete //! integer variables, or one of {"zi", "zinfl", "zero-
    inflated"} for //! zero-inflated variables. //!

Parameter ``multiplier``:
    bandwidth multiplier (default is 1.0). //!

Parameter ``bandwidth``:
    positive bandwidth parameter (`NaN` means automatic //!
    selection). //!

Parameter ``degree``:
    degree of the local polynomial.)doc";

static const char *__doc_kde1d_Kde1d_5 =
R"doc(//! construct model from an already fit interpolation grid. //!

Parameter ``grid``:
    the interpolation grid. //!

Parameter ``xmin``:
    lower bound for the support of the density, `NaN` means no //!
    boundary. //!

Parameter ``xmax``:
    upper bound for the support of the density, `NaN` means no //!
    boundary. //!

Parameter ``type``:
    variable type; must be one of {"c", "cont", "continuous"} for //!
    continuous variables, one of {"d", "disc", "discrete"} for
    discrete //! integer variables, or one of {"zi", "zinfl", "zero-
    inflated"} for //! zero-inflated variables. //!

Parameter ``prob0``:
    point mass at 0.)doc";

static const char *__doc_kde1d_Kde1d_Kde1d =
R"doc(//! constructor for fitting the density estimate. //!

Parameter ``xmin``:
    lower bound for the support of the density, `NaN` means no //!
    boundary. //!

Parameter ``xmax``:
    upper bound for the support of the density, `NaN` means no //!
    boundary. //!

Parameter ``type``:
    variable type: `VarType::continuous` for //! continuous variables,
    `VarType::discrete` for discrete integer //! variables, or
    `VarType::zero_inflated` for zero-inflated //! variables. //!

Parameter ``multiplier``:
    bandwidth multiplier (default is 1.0). //!

Parameter ``bandwidth``:
    positive bandwidth parameter (`NaN` means automatic //!
    selection). //!

Parameter ``degree``:
    degree of the local polynomial.)doc";

static const char *__doc_kde1d_Kde1d_Kde1d_2 =
R"doc(//! constructor for fitting the density estimate. //!

Parameter ``xmin``:
    lower bound for the support of the density, `NaN` means no //!
    boundary. //!

Parameter ``xmax``:
    upper bound for the support of the density, `NaN` means no //!
    boundary. //!

Parameter ``type``:
    variable type; must be one of {"c", "cont", "continuous"} for //!
    continuous variables, one of {"d", "disc", "discrete"} for
    discrete //! integer variables, or one of {"zi", "zinfl", "zero-
    inflated"} for //! zero-inflated variables. //!

Parameter ``multiplier``:
    bandwidth multiplier (default is 1.0). //!

Parameter ``bandwidth``:
    positive bandwidth parameter (`NaN` means automatic //!
    selection). //!

Parameter ``degree``:
    degree of the local polynomial.)doc";

static const char *__doc_kde1d_Kde1d_Kde1d_3 =
R"doc(//! construct model from an already fit interpolation grid. //!

Parameter ``grid``:
    the interpolation grid. //!

Parameter ``xmin``:
    lower bound for the support of the density, `NaN` means no //!
    boundary. //!

Parameter ``xmax``:
    upper bound for the support of the density, `NaN` means no //!
    boundary. //!

Parameter ``type``:
    variable type: `VarType::continuous` for //! continuous variables,
    `VarType::discrete` for discrete integer //! variables, or
    `VarType::zero_inflated` for zero-inflated //! variables. //!

Parameter ``prob0``:
    point mass at 0.)doc";

static const char *__doc_kde1d_Kde1d_Kde1d_4 =
R"doc(//! construct model from an already fit interpolation grid. //!

Parameter ``grid``:
    the interpolation grid. //!

Parameter ``xmin``:
    lower bound for the support of the density, `NaN` means no //!
    boundary. //!

Parameter ``xmax``:
    upper bound for the support of the density, `NaN` means no //!
    boundary. //!

Parameter ``type``:
    variable type; must be one of {"c", "cont", "continuous"} for //!
    continuous variables, one of {"d", "disc", "discrete"} for
    discrete //! integer variables, or one of {"zi", "zinfl", "zero-
    inflated"} for //! zero-inflated variables. //!

Parameter ``prob0``:
    point mass at 0.)doc";

static const char *__doc_kde1d_Kde1d_as_enum = R"doc()doc";

static const char *__doc_kde1d_Kde1d_as_str = R"doc()doc";

static const char *__doc_kde1d_Kde1d_bandwidth = R"doc()doc";

static const char *__doc_kde1d_Kde1d_boundary_correct =
R"doc(//! corrects the density estimate for a preceding boundary
transformation of //! the data. //!

Parameter ``x``:
    evaluation points (in original domain). //!

Parameter ``fhat``:
    the density estimate evaluated in the transformed domain. //!

Returns:
    corrected density estimates at `x`.)doc";

static const char *__doc_kde1d_Kde1d_boundary_transform =
R"doc(//! transformations for density estimates with bounded support. //!

Parameter ``x``:
    evaluation points. //!

Parameter ``inverse``:
    whether the inverse transformation should be applied. //!

Returns:
    the transformed evaluation points.)doc";

static const char *__doc_kde1d_Kde1d_calculate_infl =
R"doc(//! calculate influence for data point for density estimate based on
//! quantities pre-computed in `fit_lp()`.)doc";

static const char *__doc_kde1d_Kde1d_cdf =
R"doc(//! computes the cdf of the kernel density estimate by numerical //!
integration. //!

Parameter ``x``:
    vector of evaluation points. //!

Parameter ``check_fitted``:
    an optional logical to bypass the check. //!

Returns:
    a vector of cdf values.)doc";

static const char *__doc_kde1d_Kde1d_cdf_continuous = R"doc()doc";

static const char *__doc_kde1d_Kde1d_cdf_discrete = R"doc()doc";

static const char *__doc_kde1d_Kde1d_cdf_zi = R"doc()doc";

static const char *__doc_kde1d_Kde1d_check_boundaries = R"doc()doc";

static const char *__doc_kde1d_Kde1d_check_fitted = R"doc()doc";

static const char *__doc_kde1d_Kde1d_check_inputs = R"doc()doc";

static const char *__doc_kde1d_Kde1d_check_notfitted = R"doc()doc";

static const char *__doc_kde1d_Kde1d_check_xmin_xmax = R"doc()doc";

static const char *__doc_kde1d_Kde1d_construct_grid_points =
R"doc(//! constructs a grid later used for interpolation //!

Parameter ``x``:
    vector of observations. //!

Returns:
    a grid of size 50.)doc";

static const char *__doc_kde1d_Kde1d_degree = R"doc()doc";

static const char *__doc_kde1d_Kde1d_edf = R"doc()doc";

static const char *__doc_kde1d_Kde1d_finalize_grid =
R"doc(//! moves the boundary points of the grid to xmin/xmax (if non-NaN).
//!

Parameter ``grid_points``:
    the grid points.)doc";

static const char *__doc_kde1d_Kde1d_fit =
R"doc(//!

Parameter ``x``:
    vector of observations //!

Parameter ``weights``:
    vector of weights for each observation (optional).)doc";

static const char *__doc_kde1d_Kde1d_fit_lp =
R"doc(//! (analytically) evaluates the kernel density estimate and its
influence //! function on a user-supplied grid. //!

Parameter ``x_ev``:
    evaluation points. //!

Parameter ``x``:
    observations. //!

Parameter ``weights``:
    vector of weights for each observation (can be empty). //!

Returns:
    a two-column matrix containing the density estimate in the first
    //! and the influence function in the second column.)doc";

static const char *__doc_kde1d_Kde1d_get_bandwidth = R"doc()doc";

static const char *__doc_kde1d_Kde1d_get_degree = R"doc()doc";

static const char *__doc_kde1d_Kde1d_get_edf = R"doc()doc";

static const char *__doc_kde1d_Kde1d_get_grid_points = R"doc()doc";

static const char *__doc_kde1d_Kde1d_get_loglik = R"doc()doc";

static const char *__doc_kde1d_Kde1d_get_multiplier = R"doc()doc";

static const char *__doc_kde1d_Kde1d_get_prob0 = R"doc()doc";

static const char *__doc_kde1d_Kde1d_get_type = R"doc()doc";

static const char *__doc_kde1d_Kde1d_get_type_str = R"doc()doc";

static const char *__doc_kde1d_Kde1d_get_values = R"doc()doc";

static const char *__doc_kde1d_Kde1d_get_xmax = R"doc()doc";

static const char *__doc_kde1d_Kde1d_get_xmin = R"doc()doc";

static const char *__doc_kde1d_Kde1d_grid = R"doc()doc";

static const char *__doc_kde1d_Kde1d_kern_gauss =
R"doc(//! Gaussian kernel (truncated at +/- 5). //!

Parameter ``x``:
    vector of evaluation points.)doc";

static const char *__doc_kde1d_Kde1d_loglik = R"doc()doc";

static const char *__doc_kde1d_Kde1d_multiplier = R"doc()doc";

static const char *__doc_kde1d_Kde1d_pdf =
R"doc(//! computes the pdf of the kernel density estimate by interpolation.
//!

Parameter ``x``:
    vector of evaluation points. //!

Parameter ``check_fitted``:
    an optional logical to bypass the check. //!

Returns:
    a vector of pdf values.)doc";

static const char *__doc_kde1d_Kde1d_pdf_continuous = R"doc()doc";

static const char *__doc_kde1d_Kde1d_pdf_discrete = R"doc()doc";

static const char *__doc_kde1d_Kde1d_pdf_zi = R"doc()doc";

static const char *__doc_kde1d_Kde1d_prob0 = R"doc()doc";

static const char *__doc_kde1d_Kde1d_quantile =
R"doc(//! computes the cdf of the kernel density estimate by numerical
inversion. //!

Parameter ``x``:
    vector of evaluation points. //!

Parameter ``check_fitted``:
    an optional logical to bypass the check. //!

Returns:
    a vector of quantiles.)doc";

static const char *__doc_kde1d_Kde1d_quantile_continuous = R"doc()doc";

static const char *__doc_kde1d_Kde1d_quantile_discrete = R"doc()doc";

static const char *__doc_kde1d_Kde1d_quantile_zi = R"doc()doc";

static const char *__doc_kde1d_Kde1d_select_bandwidth = R"doc()doc";

static const char *__doc_kde1d_Kde1d_set_interpolation_grid = R"doc()doc";

static const char *__doc_kde1d_Kde1d_set_xmin_xmax = R"doc()doc";

static const char *__doc_kde1d_Kde1d_simulate =
R"doc(//! simulates data from the model. //!

Parameter ``n``:
    the number of observations to simulate. //!

Parameter ``seeds``:
    an optional vector of seeds. //!

Parameter ``check_fitted``:
    an optional logical to bypass the check. //!

Returns:
    simulated observations from the kernel density.)doc";

static const char *__doc_kde1d_Kde1d_str = R"doc()doc";

static const char *__doc_kde1d_Kde1d_type = R"doc()doc";

static const char *__doc_kde1d_Kde1d_xmax = R"doc()doc";

static const char *__doc_kde1d_Kde1d_xmin = R"doc()doc";

static const char *__doc_kde1d_VarType = R"doc()doc";

static const char *__doc_kde1d_VarType_continuous = R"doc()doc";

static const char *__doc_kde1d_VarType_discrete = R"doc()doc";

static const char *__doc_kde1d_VarType_zero_inflated = R"doc()doc";

static const char *__doc_kde1d_as_enum = R"doc()doc";

static const char *__doc_kde1d_as_str = R"doc()doc";

static const char *__doc_kde1d_bandwidth_PluginBandwidthSelector =
R"doc(//! Bandwidth selection for local-likelihood density estimation. //!
Methodology is similar to Sheather and Jones(1991), but asymptotic //!
bias/variance expressions are adapted for higher-order polynomials and
//! nearest neighbor bandwidths.)doc";

static const char *__doc_kde1d_bandwidth_PluginBandwidthSelector_2 =
R"doc(//!

Parameter ``x``:
    vector of observations. //!

Parameter ``weigths``:
    optional vector of weights for each observation.)doc";

static const char *__doc_kde1d_bandwidth_PluginBandwidthSelector_PluginBandwidthSelector =
R"doc(//!

Parameter ``x``:
    vector of observations. //!

Parameter ``weigths``:
    optional vector of weights for each observation.)doc";

static const char *__doc_kde1d_bandwidth_PluginBandwidthSelector_bin_counts = R"doc()doc";

static const char *__doc_kde1d_bandwidth_PluginBandwidthSelector_get_bandwidth_for_bkfe =
R"doc(//! optimal bandwidths for kernel functionals (see Wand and Jones'
book, 3.5) //! only works for even drv //!

Parameter ``drv``:
    order of the derivative in the kernel functional.)doc";

static const char *__doc_kde1d_bandwidth_PluginBandwidthSelector_kde = R"doc()doc";

static const char *__doc_kde1d_bandwidth_PluginBandwidthSelector_ll_ibias2 =
R"doc(//! computes the integrated squared bias (without bandwidth and n
terms). //! Bias expressions can be found in Geenens (JASA, 2014) //!

Parameter ``degree``:
    degree of the local polynomial.)doc";

static const char *__doc_kde1d_bandwidth_PluginBandwidthSelector_ll_ivar =
R"doc(//! computes the integrated squared variance (without bandwidth and n
terms). //! Variance expressions can be found in Geenens (JASA, 2014)
//!

Parameter ``degree``:
    degree of the local polynomial.)doc";

static const char *__doc_kde1d_bandwidth_PluginBandwidthSelector_scale = R"doc()doc";

static const char *__doc_kde1d_bandwidth_PluginBandwidthSelector_scale_est =
R"doc(//! Scale estimate (minimum of standard deviation and robust
equivalent) //!

Parameter ``x``:
    vector of observations.)doc";

static const char *__doc_kde1d_bandwidth_PluginBandwidthSelector_select_bandwidth =
R"doc(//! Selects the bandwidth for kernel density estimation. //!

Parameter ``degree``:
    degree of the local polynomial.)doc";

static const char *__doc_kde1d_bandwidth_PluginBandwidthSelector_weights = R"doc()doc";

static const char *__doc_kde1d_bandwidth_get_bandwidth_for_bkfe =
R"doc(//! optimal bandwidths for kernel functionals (see Wand and Jones'
book, 3.5) //! only works for even drv //!

Parameter ``drv``:
    order of the derivative in the kernel functional.)doc";

static const char *__doc_kde1d_bandwidth_ll_ibias2 =
R"doc(//! computes the integrated squared bias (without bandwidth and n
terms). //! Bias expressions can be found in Geenens (JASA, 2014) //!

Parameter ``degree``:
    degree of the local polynomial.)doc";

static const char *__doc_kde1d_bandwidth_ll_ivar =
R"doc(//! computes the integrated squared variance (without bandwidth and n
terms). //! Variance expressions can be found in Geenens (JASA, 2014)
//!

Parameter ``degree``:
    degree of the local polynomial.)doc";

static const char *__doc_kde1d_bandwidth_scale_est =
R"doc(//! Scale estimate (minimum of standard deviation and robust
equivalent) //!

Parameter ``x``:
    vector of observations.)doc";

static const char *__doc_kde1d_bandwidth_select_bandwidth =
R"doc(//! Selects the bandwidth for kernel density estimation. //!

Parameter ``degree``:
    degree of the local polynomial.)doc";

static const char *__doc_kde1d_boundary_correct =
R"doc(//! corrects the density estimate for a preceding boundary
transformation of //! the data. //!

Parameter ``x``:
    evaluation points (in original domain). //!

Parameter ``fhat``:
    the density estimate evaluated in the transformed domain. //!

Returns:
    corrected density estimates at `x`.)doc";

static const char *__doc_kde1d_boundary_transform =
R"doc(//! transformations for density estimates with bounded support. //!

Parameter ``x``:
    evaluation points. //!

Parameter ``inverse``:
    whether the inverse transformation should be applied. //!

Returns:
    the transformed evaluation points.)doc";

static const char *__doc_kde1d_calculate_infl =
R"doc(//! calculate influence for data point for density estimate based on
//! quantities pre-computed in `fit_lp()`.)doc";

static const char *__doc_kde1d_cdf =
R"doc(//! computes the cdf of the kernel density estimate by numerical //!
integration. //!

Parameter ``x``:
    vector of evaluation points. //!

Parameter ``check_fitted``:
    an optional logical to bypass the check. //!

Returns:
    a vector of cdf values.)doc";

static const char *__doc_kde1d_cdf_continuous = R"doc()doc";

static const char *__doc_kde1d_cdf_discrete = R"doc()doc";

static const char *__doc_kde1d_cdf_zi = R"doc()doc";

static const char *__doc_kde1d_check_boundaries = R"doc()doc";

static const char *__doc_kde1d_check_fitted = R"doc()doc";

static const char *__doc_kde1d_check_inputs = R"doc()doc";

static const char *__doc_kde1d_check_notfitted = R"doc()doc";

static const char *__doc_kde1d_check_xmin_xmax = R"doc()doc";

static const char *__doc_kde1d_construct_grid_points =
R"doc(//! constructs a grid later used for interpolation //!

Parameter ``x``:
    vector of observations. //!

Returns:
    a grid of size 50.)doc";

static const char *__doc_kde1d_fft_KdeFFT =
R"doc(//! Bandwidth selection for local-likelihood density estimation. //!
Methodology is similar to Sheather and Jones(1991), but asymptotic //!
bias/variance expressions are adapted for higher-order polynomials and
//! nearest neighbor bandwidths.)doc";

static const char *__doc_kde1d_fft_KdeFFT_2 =
R"doc(//!

Parameter ``x``:
    vector of observations. //!

Parameter ``bandwidth``:
    the bandwidth parameter. //!

Parameter ``lower``:
    lower bound of the grid. //!

Parameter ``upper``:
    bound of the grid. //!

Parameter ``weigths``:
    optional vector of weights for each observation.)doc";

static const char *__doc_kde1d_fft_KdeFFT_KdeFFT =
R"doc(//!

Parameter ``x``:
    vector of observations. //!

Parameter ``bandwidth``:
    the bandwidth parameter. //!

Parameter ``lower``:
    lower bound of the grid. //!

Parameter ``upper``:
    bound of the grid. //!

Parameter ``weigths``:
    optional vector of weights for each observation.)doc";

static const char *__doc_kde1d_fft_KdeFFT_bandwidth = R"doc()doc";

static const char *__doc_kde1d_fft_KdeFFT_bin_counts = R"doc()doc";

static const char *__doc_kde1d_fft_KdeFFT_get_bin_counts = R"doc()doc";

static const char *__doc_kde1d_fft_KdeFFT_kde_drv =
R"doc(//! Binned kernel density derivative estimate //!

Parameter ``drv``:
    order of derivative. //!

Returns:
    estimated derivative evaluated at the bin centers.)doc";

static const char *__doc_kde1d_fft_KdeFFT_lower = R"doc()doc";

static const char *__doc_kde1d_fft_KdeFFT_set_bandwidth = R"doc()doc";

static const char *__doc_kde1d_fft_KdeFFT_upper = R"doc()doc";

static const char *__doc_kde1d_fft_kde_drv =
R"doc(//! Binned kernel density derivative estimate //!

Parameter ``drv``:
    order of derivative. //!

Returns:
    estimated derivative evaluated at the bin centers.)doc";

static const char *__doc_kde1d_finalize_grid =
R"doc(//! moves the boundary points of the grid to xmin/xmax (if non-NaN).
//!

Parameter ``grid_points``:
    the grid points.)doc";

static const char *__doc_kde1d_fit =
R"doc(//!

Parameter ``x``:
    vector of observations //!

Parameter ``weights``:
    vector of weights for each observation (optional).)doc";

static const char *__doc_kde1d_fit_lp =
R"doc(//! (analytically) evaluates the kernel density estimate and its
influence //! function on a user-supplied grid. //!

Parameter ``x_ev``:
    evaluation points. //!

Parameter ``x``:
    observations. //!

Parameter ``weights``:
    vector of weights for each observation (can be empty). //!

Returns:
    a two-column matrix containing the density estimate in the first
    //! and the influence function in the second column.)doc";

static const char *__doc_kde1d_interp_InterpolationGrid =
R"doc(//! A class for cubic spline interpolation in one dimension //! //!
The class is used for implementing kernel estimators. It makes storing
the //! observations obsolete and allows for fast numerical
integration.)doc";

static const char *__doc_kde1d_interp_InterpolationGrid_2 =
R"doc(//! Constructor //! //!

Parameter ``grid_points``:
    an ascending sequence of grid points. //!

Parameter ``values``:
    a vector of values of same length as grid_points. //!

Parameter ``norm_times``:
    how many times the normalization routine should run.)doc";

static const char *__doc_kde1d_interp_InterpolationGrid_InterpolationGrid = R"doc()doc";

static const char *__doc_kde1d_interp_InterpolationGrid_InterpolationGrid_2 =
R"doc(//! Constructor //! //!

Parameter ``grid_points``:
    an ascending sequence of grid points. //!

Parameter ``values``:
    a vector of values of same length as grid_points. //!

Parameter ``norm_times``:
    how many times the normalization routine should run.)doc";

static const char *__doc_kde1d_interp_InterpolationGrid_cubic_indef_integral =
R"doc(//! Indefinite integral of a cubic polynomial //! //!

Parameter ``x``:
    evaluation point. //!

Parameter ``a``:
    polynomial coefficients.)doc";

static const char *__doc_kde1d_interp_InterpolationGrid_cubic_integral =
R"doc(//! Definite integral of a cubic polynomial //! //!

Parameter ``lower``:
    lower limit of the integral. //!

Parameter ``upper``:
    upper limit of the integral. //!

Parameter ``a``:
    polynomial coefficients.)doc";

static const char *__doc_kde1d_interp_InterpolationGrid_cubic_poly =
R"doc(//! Evaluate a cubic polynomial //! //!

Parameter ``x``:
    evaluation point. //!

Parameter ``a``:
    polynomial coefficients)doc";

static const char *__doc_kde1d_interp_InterpolationGrid_find_cell = R"doc()doc";

static const char *__doc_kde1d_interp_InterpolationGrid_find_cell_coefs =
R"doc(//! Calculate coefficients for cubic intrpolation spline //! //!

Parameter ``k``:
    the cell index.)doc";

static const char *__doc_kde1d_interp_InterpolationGrid_get_grid_max = R"doc()doc";

static const char *__doc_kde1d_interp_InterpolationGrid_get_grid_min = R"doc()doc";

static const char *__doc_kde1d_interp_InterpolationGrid_get_grid_points = R"doc()doc";

static const char *__doc_kde1d_interp_InterpolationGrid_get_values = R"doc()doc";

static const char *__doc_kde1d_interp_InterpolationGrid_grid_points = R"doc()doc";

static const char *__doc_kde1d_interp_InterpolationGrid_integrate =
R"doc(//! Integration along the grid //! //!

Parameter ``x``:
    a vector of evaluation points //!

Parameter ``normalize``:
    whether to normalize the integral to a maximum value of 1.)doc";

static const char *__doc_kde1d_interp_InterpolationGrid_interpolate =
R"doc(//! Interpolation //!

Parameter ``x``:
    vector of evaluation points.)doc";

static const char *__doc_kde1d_interp_InterpolationGrid_normalize =
R"doc(//! renormalizes the estimate to integrate to one //! //!

Parameter ``times``:
    how many times the normalization routine should run.)doc";

static const char *__doc_kde1d_interp_InterpolationGrid_values = R"doc()doc";

static const char *__doc_kde1d_interp_cubic_indef_integral =
R"doc(//! Indefinite integral of a cubic polynomial //! //!

Parameter ``x``:
    evaluation point. //!

Parameter ``a``:
    polynomial coefficients.)doc";

static const char *__doc_kde1d_interp_cubic_integral =
R"doc(//! Definite integral of a cubic polynomial //! //!

Parameter ``lower``:
    lower limit of the integral. //!

Parameter ``upper``:
    upper limit of the integral. //!

Parameter ``a``:
    polynomial coefficients.)doc";

static const char *__doc_kde1d_interp_cubic_poly =
R"doc(//! Evaluate a cubic polynomial //! //!

Parameter ``x``:
    evaluation point. //!

Parameter ``a``:
    polynomial coefficients)doc";

static const char *__doc_kde1d_interp_find_cell = R"doc()doc";

static const char *__doc_kde1d_interp_find_cell_coefs =
R"doc(//! Calculate coefficients for cubic intrpolation spline //! //!

Parameter ``k``:
    the cell index.)doc";

static const char *__doc_kde1d_interp_integrate =
R"doc(//! Integration along the grid //! //!

Parameter ``x``:
    a vector of evaluation points //!

Parameter ``normalize``:
    whether to normalize the integral to a maximum value of 1.)doc";

static const char *__doc_kde1d_interp_interpolate =
R"doc(//! Interpolation //!

Parameter ``x``:
    vector of evaluation points.)doc";

static const char *__doc_kde1d_interp_normalize =
R"doc(//! renormalizes the estimate to integrate to one //! //!

Parameter ``times``:
    how many times the normalization routine should run.)doc";

static const char *__doc_kde1d_kern_gauss =
R"doc(//! Gaussian kernel (truncated at +/- 5). //!

Parameter ``x``:
    vector of evaluation points.)doc";

static const char *__doc_kde1d_pdf =
R"doc(//! computes the pdf of the kernel density estimate by interpolation.
//!

Parameter ``x``:
    vector of evaluation points. //!

Parameter ``check_fitted``:
    an optional logical to bypass the check. //!

Returns:
    a vector of pdf values.)doc";

static const char *__doc_kde1d_pdf_continuous = R"doc()doc";

static const char *__doc_kde1d_pdf_discrete = R"doc()doc";

static const char *__doc_kde1d_pdf_zi = R"doc()doc";

static const char *__doc_kde1d_quantile =
R"doc(//! computes the cdf of the kernel density estimate by numerical
inversion. //!

Parameter ``x``:
    vector of evaluation points. //!

Parameter ``check_fitted``:
    an optional logical to bypass the check. //!

Returns:
    a vector of quantiles.)doc";

static const char *__doc_kde1d_quantile_continuous = R"doc()doc";

static const char *__doc_kde1d_quantile_discrete = R"doc()doc";

static const char *__doc_kde1d_quantile_zi = R"doc()doc";

static const char *__doc_kde1d_select_bandwidth = R"doc()doc";

static const char *__doc_kde1d_set_interpolation_grid = R"doc()doc";

static const char *__doc_kde1d_set_xmin_xmax = R"doc()doc";

static const char *__doc_kde1d_simulate =
R"doc(//! simulates data from the model. //!

Parameter ``n``:
    the number of observations to simulate. //!

Parameter ``seeds``:
    an optional vector of seeds. //!

Parameter ``check_fitted``:
    an optional logical to bypass the check. //!

Returns:
    simulated observations from the kernel density.)doc";

static const char *__doc_kde1d_stats_dnorm =
R"doc(//! standard normal density //!

Parameter ``x``:
    evaluation points. //!

Returns:
    matrix of pdf values.)doc";

static const char *__doc_kde1d_stats_dnorm_drv =
R"doc(//! standard normal density //!

Parameter ``x``:
    evaluation points. //!

Parameter ``drv``:
    order of the derivative //!

Returns:
    matrix of pdf values.)doc";

static const char *__doc_kde1d_stats_equi_jitter = R"doc()doc";

static const char *__doc_kde1d_stats_pnorm =
R"doc(//! standard normal cdf //!

Parameter ``x``:
    evaluation points. //!

Returns:
    matrix of cdf values.)doc";

static const char *__doc_kde1d_stats_qnorm =
R"doc(//! standard normal quantiles //!

Parameter ``x``:
    evaluation points. //!

Returns:
    matrix of quantiles.)doc";

static const char *__doc_kde1d_stats_quantile =
R"doc(//! empirical quantiles //!

Parameter ``x``:
    data. //!

Parameter ``q``:
    evaluation points. //!

Returns:
    vector of quantiles.)doc";

static const char *__doc_kde1d_stats_quantile_2 =
R"doc(//! empirical quantiles //!

Parameter ``x``:
    data. //!

Parameter ``q``:
    evaluation points. //!

Parameter ``w``:
    vector of weights. //!

Returns:
    vector of quantiles.)doc";

static const char *__doc_kde1d_stats_simulate_uniform =
R"doc(//! simulates from the standard uniform distribution. //! //!

Parameter ``n``:
    number of observations. //!

Parameter ``seeds``:
    seeds of the random number generator; if empty (default), //! the
    random number generator is seeded randomly. //! //!

Returns:
    An size n vector of independent :math:` \mathrm{U}[0, 1] ` random
    //! variables.)doc";

static const char *__doc_kde1d_tools_get_order = R"doc()doc";

static const char *__doc_kde1d_tools_invert_f =
R"doc(//! computes the inverse :math:` f^{-1} ` of a function :math:` f ` by
the //! bisection method. //! //!

Parameter ``x``:
    evaluation points. //!

Parameter ``f``:
    the function to invert. //!

Parameter ``lb``:
    lower bound. //!

Parameter ``ub``:
    upper bound. //!

Parameter ``n_iter``:
    the number of iterations for the bisection. //! //!

Returns:
    :math:` f^{-1}(x) `.)doc";

static const char *__doc_kde1d_tools_linbin =
R"doc(//! Computes bin counts for univariate data via the linear binning
strategy. //!

Parameter ``x``:
    vector of observations //!

Parameter ``weights``:
    vector of weights for each observation.)doc";

static const char *__doc_kde1d_tools_remove_nans =
R"doc(//! remove rows of a matrix which contain nan values or have zero
weight //!

Parameter ``x``:
    the matrix. //!

Parameter ``a``:
    vector of weights that is either empty or whose size is equal to
    //! the number of columns of x.)doc";

static const char *__doc_kde1d_tools_unaryExpr_or_nan =
R"doc(//! applies a function to each non-NaN value, otherwise returns NaN
//!

Parameter ``x``:
    function argument. //!

Parameter ``func``:
    function to be applied.)doc";

#if defined(__GNUG__)
#pragma GCC diagnostic pop
#endif

