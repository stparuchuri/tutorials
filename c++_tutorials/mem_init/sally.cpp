#include<iostream>
#include"sally.h"
using namespace std;

// member initializer function/constructor for initializing the const variables. It has a non-typical statement after the parantheses and before the body begins.
sally::sally(int a, int b)
:regVar(a),constVar(b) {
}

void sally::print(){
cout << "regVar : " << regVar << endl << "constVar : " << constVar << endl;
}
