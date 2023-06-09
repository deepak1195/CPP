//============================================================================
// Name        : 013_04_FunctionOverloading.cpp
// Author      : Deepak
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int addNumbers(int a, int b){
	cout<<"\nAdding Two Integer Numbers Where a="<<a<<", b="<<b<<endl;
	return a+b;
}
int addNumbers(int a,int b,int c){
	cout<<"\nAdding Two Integer Numbers Where a="<<a<<", b="<<b<<", c"<<c<<endl;
	return a+b+c;
}
double addNumbers(double a,double b){
	cout<<"\nAdding Two Double Numbers Where a="<<a<<", b="<<b<<endl;
	return a+b;
}
string addNumbers(string a,string b){
	cout<<"\nAdding Two Char Where a="<<a<<", b="<<b<<endl;
	return a+b;
}
float areaCalculate(float l,float b){
	cout<<"\nCalculating Area of Rectangle Where l="<<l<<", b="<<b<<endl;
	return l*b;
}
float areaCalculate(float r){
	cout<<"\nCalculating Area of Circle Where r="<<r<<endl;
	return 3.14*r*r;
}
int main() {
	cout<<addNumbers(5,6)<<endl;
	cout<<addNumbers(5,6,3)<<endl;
	cout<<addNumbers(5.2,3.1)<<endl;
	cout<<addNumbers('5','6')<<endl;
	cout<<areaCalculate(5)<<endl;

	cout<<areaCalculate(5,6)<<endl;
	return 0;
}
