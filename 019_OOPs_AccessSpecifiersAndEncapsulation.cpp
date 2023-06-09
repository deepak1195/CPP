//============================================================================
// Name        : 019_OOPs_AccessSpecifiersAndEncapsulation.cpp
// Author      : Deepak
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Person{
	//Members are Accessible from Outside the class
	public:
		string name;
		int age;

		Person(){
			name="";
			age=0;
			salary=0.0;
		}

		Person(string n,int a){
			name=n;
			age=a;
			salary=0.0;
		}

		// To assess Private Defining get and set methods
		void setSalary(){
			cout<<"Enter Salary of "<<name<<" : ";
			cin>>salary;
		}
		double getSalary(){
			return salary;
		}
	//Members cannot be Accessible from Outside the class
	private:
		double salary; //Declaring class attribute as Private is a example of Encapsulation

	//Members cannot be Accessible from Outside the class but can be Accessed in Inherited classes
//	protected:
};

int main() {

	Person p1=Person();
	p1.name="Satyam Sukla";
	p1.age=36;
	//p1.salary=250000.00;	//This will give error because Salary is a private.
	p1.setSalary();	//setSalary() function is use to set value of salary.

	Person p2=Person("Priya Rai",27);
	p2.setSalary();	//setSalary() function is use to set value of salary.

	cout<<"\nName : "<<p1.name<<"\nAge : "<<p1.age<<"\nSalary : "<<p1.getSalary()<<endl;
	cout<<"\nName : "<<p2.name<<"\nAge : "<<p2.age<<"\nSalary : "<<p2.getSalary()<<endl;

	return 0;
}
