#include<iostream>

using namespace std;

class enemy{
protected:
int attackPower;
public:
void setAttackPower(int a){ attackPower = a;};
};

class ninja: public enemy{
public:
void attack(){ cout << "I am a ninja! -" << attackPower << endl; }
};

class monster: public enemy{
public:
void attack(){ cout << "monster must eat you!!! -" << attackPower << endl; }
};

int main(){

ninja n;
monster m;

/* because ninjaor monster is of type enemy, an enemy pointer can point to a ninja or a monster */

enemy *enemy1 = &n; 
enemy *enemy2 = &m;
enemy1->setAttackPower(20);
enemy2->setAttackPower(55);
n.attack();
m.attack();

return 0;
}
