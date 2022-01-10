import numpy as np
import pykde1d as pk

kde_cont = pk.Kde1d()
x_cont = np.random.normal(size=100)
kde_cont.fit(x_cont)
kde_cont.pdf(x_cont)
kde_cont.cdf(x_cont)

x_disc = np.random.randint(0, 10, size=100, dtype='int32')
kde_disc = pk.Kde1d()
kde_disc.fit(x_disc)
kde_disc.pdf(x_disc)
kde_disc.cdf(x_disc)
