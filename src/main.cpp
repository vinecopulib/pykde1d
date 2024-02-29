#include "docstr.hpp"
#include <kde1d.hpp>
#include <pybind11/eigen.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

template<typename... Args>
using overload_cast_ = pybind11::detail::overload_cast_impl<Args...>;

using namespace kde1d;

PYBIND11_MODULE(pykde1d, pk)
{

  constexpr auto& doc = pykde1d_doc;
  constexpr auto& kde1d_doc = doc.kde1d.Kde1d;

  pk.doc() = R"pbdoc(
  The pykde1d package
  -------------------------
  )pbdoc";

  py::class_<Kde1d>(pk, "Kde1d", kde1d_doc.doc)
    .def(py::init<size_t, double, double, double, double, size_t>(),
         py::arg("nlevels") = 0,
         py::arg("xmin") = NAN,
         py::arg("xmax") = NAN,
         py::arg("multiplier") = 1.0,
         py::arg("bandwidth") = NAN,
         py::arg("deg") = 2,
         kde1d_doc.ctor.doc_6args)
    .def_property_readonly(
      "nlevels",
      &Kde1d::get_xmin,
      "The number of levels for discrete data (0 means continuous).")
    .def_property_readonly(
      "xmin", &Kde1d::get_xmin, "The lower bound of the support.")
    .def_property_readonly(
      "xmax", &Kde1d::get_xmax, "The upper bound of the support.")
    .def_property_readonly("multiplier",
                           &Kde1d::get_multiplier,
                           "The kernel's bandwidth multiplier.")
    .def_property_readonly(
      "bandwidth", &Kde1d::get_bandwidth, "The kernel's bandwidth.")
    .def_property_readonly("degree",
                           &Kde1d::get_degree,
                           "The local likelihood approximation's degree.")
    .def_property_readonly(
      "edf",
      &Kde1d::get_edf,
      "The equivalent degrees of freedom (only for fitted objects).")
    .def_property_readonly("loglik",
                           &Kde1d::get_loglik,
                           "The log-likelihood (only for fitted objects).")
    .def("__repr__",
         [](const Kde1d& kde1d) { return "<pykde1d.Kde1d>\n" + kde1d.str(); })
    .def("str", &Kde1d::str, kde1d_doc.str.doc)
    .def("pdf",
         &Kde1d::pdf,
         py::arg("x"),
         py::arg("check_fitted") = true,
         kde1d_doc.pdf.doc)
    .def("cdf",
         &Kde1d::cdf,
         py::arg("x"),
         py::arg("check_fitted") = true,
         kde1d_doc.cdf.doc)
    .def("quantile",
         &Kde1d::quantile,
         py::arg("x"),
         py::arg("check_fitted") = true,
         kde1d_doc.quantile.doc)
    .def("simulate",
         &Kde1d::simulate,
         py::arg("n"),
         py::arg("seeds") = std::vector<int>(),
         py::arg("check_fitted") = true,
         kde1d_doc.simulate.doc)
    .def("fit",
         &Kde1d::fit,
         py::arg("data"),
         py::arg("weights") = Eigen::VectorXd(),
         kde1d_doc.fit.doc);

#ifdef VERSION_INFO
  pk.attr("__version__") = VERSION_INFO;
#else
  pk.attr("__version__") = "dev";
#endif
}
