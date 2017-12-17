# -*- coding: utf-8 -*-
"""
Created on Thu Jul  6 19:39:46 2017

@author: surya
"""

print("Hello")
x=3
y=3.0
print("x+y:",x+y)
print(x is y)
print(x == y)
# loops
print("for loop")
for i in range(0,10,2):
    print(i)
i = 2
print("While loop")
while i<12:
    print(i)
    i=i+3
#conditions
a = 5
if a>5:
    print("a>5")
elif a == 5:
    print("a==5")
else:
    print("a<5")
    
#Functions
def my_print(a_string):
    print(a_string)
    return 0

rt = my_print("Print this string")

# classes