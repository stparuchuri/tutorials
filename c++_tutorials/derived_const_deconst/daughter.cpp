#include<iostream>
#include"mother.h"
#include"daughter.h"

using namespace std;

daughter::daughter(){
cout << "I am the daughter constructor" << endl;

}

daughter::~daughter(){
cout << "I am the daughter deconstructor" << endl;
}
