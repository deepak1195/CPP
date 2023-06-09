//============================================================================
// Name        : 013_03_passByReference.cpp
// Author      : Deepak
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

void passByReference(int &,int &);

//Swap Values Using address

int main() {
	cout <<"Executing main() Function\n"<<endl;

	int a=22,b=11;
	cout <<"Value at a : "<<a<<", address of a : "<<&a<<endl;
	cout <<"Value at b : "<<b<<", address of b : "<<&b<<endl;

	cout <<"\nCalling passByReference() Function From main() Function\n"<<endl;

	passByReference(a,b);

	cout <<"Value at a : "<<a<<", address of a : "<<&a<<endl;
	cout <<"Value at b : "<<b<<", address of b : "<<&b<<endl;

	return 0;
}


void passByReference(int &x,int &y){
	cout <<"\nExecuting passByReference() Function\n"<<endl;

	cout <<"Value pointing by x : "<<x<<", address of x : "<<&x<<endl;
	cout <<"Value pointing by y : "<<y<<", address of y : "<<&y<<endl;
	int temp;
	temp = x;
	x=y;
	y=temp;

	cout <<"\nReturning Back to Calling Function(main) From passByReference() Function\n"<<endl;
}
