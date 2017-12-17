#include<iostream>
#include"sally.h"
using namespace std;

int main(){

sally a(32);
sally b(21);
sally c;
c=a+b;
cout << c.num << endl;
return 0;
}
