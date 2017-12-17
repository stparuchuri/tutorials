#include <iostream>
using namespace std;

void incr_print(int& a_ref){
a_ref++;
}

int main(){

int x=1;
int& ref=x;
cout << "original value in x:" << x << endl;
incr_print(ref);
cout << "after calling the function" << x << endl;
return 0;
}
