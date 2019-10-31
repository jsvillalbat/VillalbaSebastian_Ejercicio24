#!/usr/bin/env python
# coding: utf-8

# In[5]:


import numpy as np
import matplotlib.pyplot as plt


# In[3]:


datos = np.loadtxt('metropolis.dat')


# In[6]:


plt.figure()
plt.hist(datos)
plt.savefig('metropolis.png')


# In[ ]:




