#include<iostream>

using namespace std;

int main(){

try{
int momsAge = 30;
int sonsAge = 34;

if(sonsAge > momsAge){
throw 99;
}
}catch(int x){
cout << "Son cannot be older than mon, ERROR NUMBER: " << x << endl;
}

/* Note: catch(...){  } --> A generic excepion to catch everything */
return 0;
}
