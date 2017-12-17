#include<iostream>
using namespace std;

class enemy{
public:
virtual void attack(){ cout << "I am the enemy class" << endl; } // virtual func which is overloaded;
virtual void pure_attack() = 0; // pure virtual function
};

class ninja: public enemy{
public:
void attack(){ cout << "ninja attack!!" << endl; }
void pure_attack(){ cout << "pure virtual function - ninja attack!!" << endl; }

};

class monster: public enemy{
public:
void attack(){ cout << "monster attack!!" << endl; }
void pure_attack(){ cout << "pure virtual function - monster attack!!" << endl; }
};

class monster2: public enemy{
void pure_attack(){ cout << "pure virtual function - monster2 attack!!" << endl; }
};

int main(){

ninja n;
monster m;
monster2 m1;
enemy *enemy1=&n,*enemy2=&m, *enemy3=&m1;
enemy1->attack();
enemy2->attack();
enemy3->attack(); // This calls the base class function as the monster2 doesn't define one.
enemy1->pure_attack();
enemy2->pure_attack();
enemy3->pure_attack();

return 0;
}
