/* Goal: To demonstrate how functions are demonstrated in OOP fashion in C++ using a grand_parent, parent and child classes
@author: Surya Teja Paruchuri
@date: 08/29/2017
*/

#include<stdio.h>
#include<iostream>
using namespace std;

class gd_pt{
	public:
	int x = 1;
	void self_print(){
	cout << "This is executed from gd_pt\n";
	}
	void print_x(){
	cout << "executed from gd_pt" << "value of x is :" << this->x << "\n";
	}
};

int main(){

	gd_pt gd_pt1;
	gd_pt1.self_print();
	gd_pt1.print_x();

return 0;
}
