#include<iostream>

using namespace std;

template <class T>
class spunky{
public:
spunky(T x){ cout << x << " is  not a character!!" << endl; }
};


/* template specialization */
template<>
class spunky<char>{
public: 
spunky(char x) { cout << x << " is  indeed a character!!" << endl; }
};

int main(){

spunky <int> obj(7);
spunky <double> obj2(5.30435);
spunky <char> obj3('Q');
return 0;
}
