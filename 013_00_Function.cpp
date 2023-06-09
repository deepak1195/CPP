//============================================================================
// Name        : 013_00_Function.cpp
// Author      : Deepak
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int sum(int,int);//Function Declaration
int sub(int,int);
int mul(int,int);
int dive(int,int);

int main() {
	int a=20,b=10;
	cout <<a<<" + "<<b<<" : ";
	cout <<sum(a,b) << endl; //Function Call
	cout <<a<<" - "<<b<<" : "<<sub(a,b) << endl;
	cout <<a<<" * "<<b<<" : "<<mul(a,b) << endl;
	cout <<a<<" / "<<b<<" : "<<dive(a,b) << endl;
	return 0;
}



int sum(int x,int y){//Function Definition
	return x+y;
}

int sub(int x,int y){
	return x-y;
}

int mul(int x,int y){
	return x*y;
}

int dive(int x,int y){
	return x/y;
}
