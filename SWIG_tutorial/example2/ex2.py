###############################################################
# Test Script to demonstrate the use of testmaps.i in SWIG to
# map inputs and outputs.
# @author: Surya Paruchuri
# @date: December 23 2017.
###############################################################

from swig_ex2 import *

def main():
	print("++++++++++ Main function execution begins ++++++++++++")
	print("++++ calling printSum ++++")
	printSum(5,10)
	print("++++ calling storeSum +++++")
	storeVar = storeSum(115,230)
	print("The value returned is: %s"%storeVar)
	

if __name__== "__main__": main()
