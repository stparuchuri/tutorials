#include<iostream>

using namespace std;

template <class bucky> bucky addfunc(bucky a, bucky b){
return a+b;
}

int main (){

int x=7, y=43,z;
z=addfunc(x,y);
cout << z << endl;
return 0;
}
