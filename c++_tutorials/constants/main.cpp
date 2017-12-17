#include<iostream>
using namespace std;

class sally{
public:
void printz();
void printz2() const; //const function declaration;
};
void sally::printz(){
cout << "This is a normal function" << endl;
}
void sally::printz2() const{
cout << "This is a const function" << endl;
}

int main(){
sally ob;
ob.printz();
ob.printz2();

return 0;
}
