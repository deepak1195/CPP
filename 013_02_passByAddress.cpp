//============================================================================
// Name        : 013_02_passByAddress.cpp
// Author      : Deepak
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void passByAddress(int *,int *);

//Swap Values Using address

int main() {
	cout <<"Executing main() Function\n"<<endl;

	int a=22,b=11;
	cout <<"Value at a : "<<a<<", address of a : "<<&a<<endl;
	cout <<"Value at b : "<<b<<", address of b : "<<&b<<endl;

	cout <<"\nCalling passByAddress() Function From main() Function\n"<<endl;

	passByAddress(&a,&b);

	cout <<"Value at a : "<<a<<", address of a : "<<&a<<endl;
	cout <<"Value at b : "<<b<<", address of b : "<<&b<<endl;

	return 0;
}


void passByAddress(int *x,int *y){
	cout <<"\nExecuting passByAddress() Function\n"<<endl;

	cout <<"Value pointing by x : "<<*x <<", Address at x : "<<x<<", address of x : "<<&x<<endl;
	cout <<"Value pointing by y : "<<*y <<", Address at y : "<<y<<", address of y : "<<&y<<endl;
	int temp;
	temp = *x;
	*x=*y;
	*y=temp;

	cout <<"\nReturning Back to Calling Function(main) From passByAddress() Function\n"<<endl;
}
