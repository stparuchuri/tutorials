# -*- coding: utf-8 -*-
"""
Created on Tue Aug  8 20:11:28 2017
MatPLOT Lib lecture tutorial.
@author: surya
"""

# other plotting libraries: Seaborn, ggplot, Altair, Bokesh, Plotly, Folium.
# components of MATPLOTLIB: chart type,axes range,label,title,legend, 
#                           aesthetics,annotations
import matplotlib.pyplot as plt
import random
signal = [random.sample(range(0,1),100)]
time = range(0,99)
#plt.plot(time,signal)