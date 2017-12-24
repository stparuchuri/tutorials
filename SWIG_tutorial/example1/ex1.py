#####################################################################
# Example1: a simple script to use a swig generated interface.
# @author: Surya Paruchuri
# @date: December 23 2017.
# (c) Surya Paruchuri.
#####################################################################

from swig_ex1 import *

def main():
	print("++++++++ Calling the Generated interface function ++++++++")
	#print(dir(swig_ex1))
	printNumber(5)
	print("++++++++ End of main ++++++++")

if __name__ == "__main__": main()
