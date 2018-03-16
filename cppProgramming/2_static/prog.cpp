#include <iostream>
#include "prog.h"

myClass::myClass(){
	numObj++;
}

myClass::~myClass(){
	numObj--;
}

int myClass::nobjs(){
	return numObj;
}

int main(){
	myClass obj, obj2;
	if (1){
		myClass tmp;
		cout << "Number of instances = " << tmp.nobjs() << endl;
	}
	
	cout << "Number of instances now = " << obj.nobjs() << endl;
}
