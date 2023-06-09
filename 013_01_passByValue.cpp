//============================================================================
// Name        : 013_01_passByValue.cpp
// Author      : Deepak
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int passByValue(float,float);


int main() {
	cout <<"Executing main() Function\n"<<endl;

	int a=22.2,b=11.1;
	cout <<"Value at a : "<<a<<", address of a : "<<&a<<endl;
	cout <<"Value at b : "<<b<<", address of b : "<<&b<<endl;

	cout <<"\nCalling passByValue() Function From main() Function\n"<<endl;

	int c=passByValue(a,b);

	cout <<"Value at c : "<<c<<", address of c : "<<&c<<endl;
	return 0;
}


int passByValue(float x,float y){
	cout <<"\nExecuting passByValue() Function\n"<<endl;

	cout <<"Value at x : "<<x<<", address of x : "<<&x<<endl;
	cout <<"Value at y : "<<y<<", address of y : "<<&y<<endl;

	int z=x+y;

	cout <<"Value at z : "<<z<<", address of z : "<<&z<<endl;

	cout <<"\nReturning Back to Calling Function(main) From passByValue() Function\n"<<endl;
	return z;
}
