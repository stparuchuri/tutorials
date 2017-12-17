#include<iostream>
using namespace std;

template<class FIRST, class SECOND> FIRST smaller(FIRST a, SECOND b){
return(a<b?a:b);
}

int main(){

int x=89;
double y=56.78;
cout << smaller(x,y) << endl; //ideally the call should be as smaller<int,double>(x,y); 
return 0;
}
