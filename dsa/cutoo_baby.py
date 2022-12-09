#include librayy
import pylab
import numpy as np

#width of heart:
Xaxis = np.linspace(-2,2,10000)
#upper y-axis:
Y1axis = np.sqrt(1-(abs(Xaxis)-1)**2)
#setting -yaxis:
Y2axis = -3*np.sqrt(1-(abs(Xaxis)/2)**0.5)

#adjust colour for upper part of heart:
pylab.fill_between(Xaxis,Y1axis,color ="red")
#adjust colour for lower part of heart:
pylab.fill_between(Xaxis,Y2axis,color="red")
pylab.xlim([-2.5,2.5])
pylab.axis("off")
#text:
text = "I love you princess:)"
pylab.text(0,-0.4,text,fontsize=20,fontweight ="bold",color="white",horizontalalignment = "center")