#include<iostream>
#include"birthday.h"
#include"people.h"

using namespace std;

int main(){

birthday b(12, 11, 1992);
people surya("Surya",b);
surya.printinfo();

return 0;
}
