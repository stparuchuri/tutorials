#ifndef PEOPLE_H
#define PEOPLE_H

#include<string>
#include"birthday.h"

using namespace std;

class people{
public:
people(string n, birthday b);
void printinfo();

private:
string name;
birthday dob;
};

#endif
