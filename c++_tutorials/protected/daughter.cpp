#include<iostream>
#include"mother.h"
#include"daughter.h"

using namespace std;

void daughter::dosomething(){
publicv = 1; // results in no error;
protectedv = 2; //results in no error;
// privatev = 3; // results in error;
}
