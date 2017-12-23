#####################################################################
# Example1: a simple script to use a swig generated interface.
# @author: Surya Paruchuri
# @date: December 23 2017.
# (c) Surya Paruchuri.
#####################################################################

import example1

def main():
	print("++++++++ Calling the Generated interface function ++++++++")
	printNumber(5)
	print("++++++++ End of main ++++++++")

if __name__ == "__main__": main()
