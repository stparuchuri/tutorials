# -*- coding: utf-8 -*-
"""
Created on Thu Jul  6 21:07:47 2017
Demonstration of common Data structures in Python
@author: surya
"""

# strings
word = "Hello"
print("12"*6)

# lists
list1 = [5,6,8]
list2 = [1,2,3]
list1.append(4)
print(list1)
list2.insert(0,15)
print(list2)
list2.extend(list1)
print(list2)

list2.pop(3)
for x1,y1 in zip(list1,list2):
    print(x1, ", ", y1)
list3 = [10,11,12]
#create a copy of list3, separate memory copy
list4 = list(list3)
print(list4)

# example for tuples 
tuple1 = ("Honda","Civic",4,2017,"$21,000") # are immutable

#dictionary,  mapping first to last name
dict1 = {"surya":"paruchuri", "mounika":"paruchuri"}
dict2 = {("surya","paruchuri"):"VIT University", ("mounika","paruchuri"):"GITAM University"}
print(dict1)
print(dict2)
print(dict1["surya"]) ## search using the key
dict2[("Srinivasa Rao","Paruchuri")] = "Nagarjuna University"
print(dict2)

e1 = dict1.get("mounika")
if e1 != None:
    print(e1)
## dictionary: or another methods
print("mounika" in dict1)

## pop and del functions of a dict
dict1.pop("surya")
print(dict1)
dict1["surya"] ="paruchuri"
del dict1["surya"]
print(dict1)
dict1["surya"] ="paruchuri"

# comprehensions
list5 = [i**2 for i in range(0,10)]
print(list5)
dict3 = {i:i**2 for i in range(0,10)}
print(dict3)


# sets
primary_set_of_colors = set(["red","black","Blue","Yellow"])
print(primary_set_of_colors)
primary_set_of_colors.add("White")
print(primary_set_of_colors)
primary_set_of_colors.discard("White") # return nothing if the value is not present
print(primary_set_of_colors)
primary_set_of_colors.add("White")
print(primary_set_of_colors)
primary_set_of_colors.remove("White")
print(primary_set_of_colors)
secondary_colors = set(["Green","Violet","Brown","Pink"])
print(secondary_colors)
primary_secondary_colors = primary_set_of_colors.union(secondary_colors)
print(primary_secondary_colors)
