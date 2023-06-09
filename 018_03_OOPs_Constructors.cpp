//============================================================================
// Name        : 018_02_OOPs_Constructors.cpp
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

		//Declare Parameterized Constructor
		Student(string n, int a){
			name=n;
			age=a;
		}

		//Declare Overloaded Constructor
		Student(int a){
			age=a;
		}

		//Declare Copy Constructor
		Student(Student &s){
			name=s.name;
			age=s.age;
		}
};

int main() {
	//Creating Object of Student Class and call Constructor by Passing Values
	Student stud1("Rohan Singh",25);
	Student stud2("Divya Rai",21);


	//Display Attributes Values
	cout<<"Name : "<<stud1.name<<"\nAge : "<<stud1.age;
	cout<<"\nName : "<<stud2.name<<"\nAge : "<<stud2.age;


	//Calling Overloaded Constructor
	cout<<"\n\nCalling Overloaded Constructor";
	Student stud3(19);
	cout<<"\nName : "<<stud3.name<<"\nAge : "<<stud3.age;

	//Calling Copy Constructor
	cout<<"\n\nCalling Copy Constructor";
	Student stud4(stud2);
	cout<<"\nName : "<<stud4.name<<"\nAge : "<<stud4.age;

	return 0;
}
