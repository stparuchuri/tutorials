#include<iostream>

using namespace std;

class stankfirst{
public:
stankfirst(){stinkyVar=0;}
private:
int stinkyVar;
friend void stankysFriend(stankfirst &sfo); // TO MAKE a function a friend prototype it inside the class.
};

void stankysFriend(stankfirst &sfo){
sfo.stinkyVar = 99;
cout << sfo.stinkyVar << endl;

}

int main(){

stankfirst bob;
stankysFriend(bob);

return 0;
}
