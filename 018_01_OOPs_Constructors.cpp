//============================================================================
// Name        : 018_01_OOPs_Constructors.cpp
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

		//Defining Constructor Inside the class
		Student(string n, int a){	//Always public and does't return any value
			name=n;
			age=a;
		}
};
int main() {
	//Creating Object of Student Class and call Constructor by Passing Values
	Student stud1("Rohan Singh",25);

	//Display Attributes Values
	cout<<"Name : "<<stud1.name<<"\nAge : "<<stud1.age;

	return 0;
}
