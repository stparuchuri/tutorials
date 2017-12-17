#include<iostream>
#include"c_header.h"

using namespace std;

ex_class::ex_class(){
cout << "This is printed from the constructor" << endl;
}

ex_class::~ex_class() {
cout << "This is printed from the deconstructor" << endl;
}
