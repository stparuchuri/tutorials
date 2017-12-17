#include<iostream>
#include"people.h"

using namespace std;

people::people(string n, birthday b)
:name(n), dob(b)
{

}

void people::printinfo(){
cout << name << "was born on ";
dob.printBday();
}
