#include<iostream>
using namespace std;

void printNumber(int x){
cout << "I am printing an integer \n" << endl;
}

void printNumber(float x){
cout << "I am printing an float \n" << endl;
}

int main(){

int x=1;
float y=0.134;
printNumber(x);
printNumber(y);
return 0;
}
