//============================================================================
// Name        : 011_refranceVariable.cpp
// Author      : Deepak
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int val=15;

	int &rval=val;
	cout<< "Address of val : "<<&val<<"\nval Contains : "<<val<<"\n\nAddress of rval : "<<&rval<<"\nrval Contains : "<<rval<<endl;
	rval=++rval;
	cout<<"\nAfter ++rval Statement\n";
	cout<<"\nrval : "<<rval;
	cout<<"\nval : "<<val;
	return 0;
}
