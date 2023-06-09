//============================================================================
// Name        : 014_typeOfFunctions.cpp
// Author      : Deepak
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void takeNothingReturnNothing();
void takeSomethingReturnNothing(float);
int takeNothingReturnSomething();
float takeSomethingReturnSomething(float);

int main() {
	cout <<"Calling takeNothingReturnNothing() Function.\n";
	takeNothingReturnNothing();

	cout <<"\nCalling takeSomethingReturnNothing() Function.\n";
	float r;
	cout<<"To Calculate Area of Circle Enter Radius : ";
	cin>>r;
	takeSomethingReturnNothing(r);

	cout <<"\nCalling takeNothingReturnSomething() Function.\n";
	takeNothingReturnSomething();

	cout <<"\nCalling takeSomethingReturnSomething() Function.\n";
	float a,area;
	cout<<"To Calculate Area of Square Enter Side : ";
	cin>>a;
	area=takeSomethingReturnSomething(a);
	cout<<"Area of Square is : "<<area;

	return 0;
}

void takeNothingReturnNothing(){
	cout <<"\nInside takeNothingReturnNothing() Function.\n";
	int a;
	cout<<"Enter A Integer Number : ";
	cin>>a;
	if(a%2==0)
		cout<<a<<" is a Even Number.";
	else
		cout<<a<<" is a Odd Number.";
	cout <<"\nReturning back To main() Function.\n";
}

void takeSomethingReturnNothing(float a){
	cout <<"\nInside takeSomethingReturnNothing() Function.\n";
	float pi=3.14;
	cout<<"Area of Circle is :  "<<pi*a*a;
	cout <<"\nReturning back To main() Function.\n";
}

int takeNothingReturnSomething(){
	cout <<"\nInside takeNothingReturnSomething() Function.\n";
	float l,w;
	cout<<"Enter Length of Rectangle : ";
	cin>>l;
	cout<<"Enter Width of Rectangle : ";
	cin>>w;
	cout<<"Area of Rectangle is : "<<l*w;
	cout <<"\nReturning back To main() Function.\n";
	return 0;
}

float takeSomethingReturnSomething(float x){
	cout <<"\nInside takeSomethingReturnSomething() Function.\n";
	float ar=x*x;
	cout <<"\nReturning back To main() Function.\n";
	return ar;
}
