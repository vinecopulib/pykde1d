import numpy as np
import pykde1d as pk


def test_continuous():
  kde_cont = pk.Kde1d()
  x_cont = np.random.normal(size=100)
  kde_cont.fit(x_cont)
  pdf = kde_cont.pdf(np.linspace(-2.5, 2.5, num=5))
  cdf = kde_cont.cdf(np.linspace(-2.5, 2.5, num=5))
  assert pdf.shape == (5,)
  assert cdf.shape == (5,)


def test_discrete():
  x_disc = np.random.randint(0, 10, size=100, dtype="int32")
  kde_disc = pk.Kde1d(xmin=0, xmax=10, type="discrete")
  kde_disc.fit(x_disc)
  pdf = kde_disc.pdf(np.linspace(-1, 11, num=13))
  cdf = kde_disc.cdf(np.linspace(-1, 11, num=13))
  assert pdf.shape == (13,)
  assert cdf.shape == (13,)