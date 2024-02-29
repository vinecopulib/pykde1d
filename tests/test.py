import numpy as np
import pykde1d as pk

kde_cont = pk.Kde1d()
x_cont = np.random.normal(size=100)
kde_cont.fit(x_cont)
kde_cont.pdf(np.linspace(-2.5, 2.5, num=5))
kde_cont.cdf(np.linspace(-2.5, 2.5, num=5))

x_disc = np.random.randint(0, 10, size=100, dtype='int32')
kde_disc = pk.Kde1d(nlevels=10)
kde_disc.fit(x_disc)
kde_disc.pdf(np.linspace(-1, 10, num=12))
kde_disc.cdf(np.linspace(-1, 10, num=12))