#include<iostream>
using namespace std;

template <class T>
class surya{
 T first, second;
public: 
surya(T a, T b){
first =a;
second=b;
}
T bigger();
};

// Define the function of template class -  should be done outside always.
template <class T>
T surya<T>::bigger(){
return(first>second?first:second);
}


int main(){
surya <int> su(10,100);
cout << su.bigger() << endl ;

return 0;
}
