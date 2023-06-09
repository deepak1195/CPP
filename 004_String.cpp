//============================================================================
// Name        : 004_String.cpp
// Author      : Deepak
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

int main() {
	string fname,lname;
	cout<<"Enter Your First Name : ";
	cin>>fname;
	cout<<"Enter Your Last Name : ";
	cin>>lname;

	//Concatenation
	cout<<"\nEntered Name Is "<<fname+" "+lname<<".";

	//String Length
	cout<<"\nYour Name Has "<<fname.length()+lname.length()<<" Alphabets.";

	//Access String and Change characters.
	cout<<"\nYou Can Also Use Short Name as "<<fname[0]<<lname[0]<<".\n\n";

	string greeting="hello";
	cout<<greeting<<" "<<fname+" "+lname<<".\n";

	greeting[0]='H';
	cout<<"\nAfter Changing 0th Index Value.\n\n";
	cout<<greeting<<" "<<fname+" "+lname<<".\n";

	//String Input
	string fatherName;
	cout<<"\nEnter Your Father's Full Name : ";
	cin.ignore();
	getline(cin,fatherName);
	cout<<"\nYour Father Name Is "<<fatherName<<".";

	return 0;
}
