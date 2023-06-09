//============================================================================
// Name        : 016_OOPs_ClassAndObject.cpp
// Author      : Deepak
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

// Creating Class
class Student{
	public:	            //Access specifier
		string name;	//Attribute(Member Variable)
		int age;	    //Attribute(Member Variable)
};
int main() {
	//Creating Object of Student Class
	Student stud1;

	//Access Attributes and Set Values
	stud1.name="Rohan Singh";
	stud1.age=29;

	//Display Attributes Values
	cout<<"Name : "<<stud1.name<<"\nAge : "<<stud1.age;

	return 0;
}
