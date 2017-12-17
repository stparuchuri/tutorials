#include<iostream>
#include"birthday.h"
using namespace std;

birthday::birthday(int d, int m, int y){
month = m;
day = d;
year = y;
}

void birthday::printBday(){
cout << month << "/" << day << "/" << year << endl;
}
