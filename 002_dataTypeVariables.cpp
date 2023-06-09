//============================================================================
// Name        : 002_dataTypeVariables.cpp
// Author      : Deepak
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	char a;
	short b;
	int c;
	float d;
	double e;
	long f;
	a='h';b=2;c=12;d=3.14;e=2345.56787;f=235.432;

	cout << "a Contain : "<<a << " Size of char : " << sizeof(char) << endl;
	cout << "b Contain : "<<b << " Size of short : " << sizeof(short) << endl;
	cout << "c Contain : "<<c << " Size of int : " << sizeof(int) << endl;
	cout << "d Contain : "<<d << " Size of float : " << sizeof(float) << endl;
	cout << "e Contain : "<<e << " Size of double : " << sizeof(double) << endl;
	cout << "f Contain : "<<f << " Size of long : " << sizeof(long) << endl;



	return 0;
}
