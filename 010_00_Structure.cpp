//============================================================================
// Name        : 010_00_Structure.cpp
// Author      : Deepak
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	//Structure Declaration
	struct {
		string name;
		int age;
	} person;

	//Assigning Values to Member Variables
	person.name="Ram Singh";
	person.age=56;

	//Printing  Member Variables
	cout<<"Name : "<<person.name<<" | Age : "<<person.age<<endl;

	//Named Structure
	struct Employee{
		int eid;
		string ename;
		float salary;
	};

	//Multiple Variables Using Single Structure
	Employee e1,e2;

	e1.eid=001;
	e1.ename="Deepak";
	e1.salary=100000.00;

	e2.eid=002;
	e2.ename="Rahul";
	e2.salary=110000.00;


	cout<<"Employee Id : "<<e1.eid<<" | Nmae : "<<e1.ename<<" | Salary : "<<e1.salary<<endl;
	cout<<"Employee Id : "<<e2.eid<<" | Nmae : "<<e2.ename<<" | Salary : "<<e2.salary<<endl;

	return 0;
}
