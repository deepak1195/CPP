//============================================================================
// Name        : 017_OOPs_ClassMethods.cpp
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

		//Define Display() Method Inside the class
		void Display(){
			cout<<"Name : "<<name<<"\nAge : "<<age<<endl;
		}

		//Declaration of setVaues() Method
		void setValues();
};

//Defining setValues() Method Outside the class
void Student::setValues(){
	cout<<"\nEnter Student Name : ";
	getline(cin, name);
	cout<<"Enter Student Age : ";
	cin>>age;
}

int main() {
	//Creating Object of Student Class
	Student stud1;

	//Display Attributes Values
	cout<<"Before Calling setValues() Method"<<endl;
	stud1.Display();

	//Set Values Using setValues() Function
	stud1.setValues();

	//Display Attributes Values After Calling setValues() Method
	cout<<"\nAfter Calling setValues() Method"<<endl;
	stud1.Display();

	return 0;
}
