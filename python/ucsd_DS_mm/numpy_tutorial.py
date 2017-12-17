# -*- coding: utf-8 -*-
"""
Created on Sun Jul  9 05:05:32 2017
numpy tutorial
@author: surya
"""
import numpy as np
# nd arrays
# Rank-1
an_array = np.array([1,2,33])
print(an_array.shape, an_array[1])
print(an_array)
an_array[1] = 888
print(an_array[1])
print(an_array)
# Rank-2
# Notice the 2 swaure matrices
a_matrix = np.array([[1,2,3],[4,5,6]])
print(a_matrix)
print(a_matrix[0, 1],a_matrix[1, 1])
# zero nd array
z_arr = np.zeros((2,2))
print(z_arr)
# fill a matrix with same number
f_arr = np.full((2,2),5.0)
print(f_arr)
# diagonal matrix
d_arr = np.eye(3,2)
print(d_arr)
# ones function
o_arr = np.ones((1,2))
print(o_arr)
# random array
r_arr = np.random.random((2,2))
print(r_arr)

#Accessing and array algebra
an_array2 = np.array([[11,12,13],[21,22,23],[31,32,33]])
print(an_array2)

#slice of a mtrix and changes to a slice
a_slice = an_array2[:2,1:3] # matrix(0:1,1:2)
print(a_slice)
a_slice[0,0] = 0
print(a_slice)
print(an_array2)
# to make a copy of the slice of the matrix
a_slice2 = np.array(an_array2[:2,1:3])
print(a_slice2)
# conditional indexing
an_array3 = np.array([[-1,5,-5],[-6,6,9],[0,-2,5]])
filter = an_array3>=0 # could also use braces arond the expression.
print(filter)
print(an_array3[filter])
# nd arrays with data types
an_array4 = np.array([11,12],dtype=np.int64)
print(an_array4)
# array size is imutable
#an_array5 = np.array([1,2])
#an_array5[2]=5
#print(an_array5)
# array multiply
m1=np.array([[1,2],[3,4]])
m2=np.array([[1,2],[3,4]])
m3 = m1*m2
print(m3)
# statistical functions
a_matrix = np.random.random([2,5])
print(a_matrix.mean())
print(a_matrix.mean(axis = 1)) # mean by rows
print(a_matrix.mean(axis = 0)) # mean by columns
print(a_matrix.sum())
print(np.median(a_matrix,axis =1))
# unique, sort function of array
print(np.sort(a_matrix))
print(np.unique(a_matrix))
# set functions
# intersection1d, setdiff, union1d etc,
