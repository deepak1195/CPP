//============================================================================
// Name        : 012_00_Pointer.cpp
// Author      : Deepak
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void swap(int*,int*);

int main() {

	int var=10;
	cout<<"Value assign to var :"<<var<<" |  Address of var : "<<&var<<endl;

	//Pointer Declaration and assigning address of var to pvar
	int* pvar=&var;
	cout<<"Value assign to pvar : "<<pvar<<" | pvar pointing at : "<<*pvar<<" | Address of pvar : "<<&pvar<<endl;

	//Using Pointer Variable pvar Change Value of var Variable
	*pvar=12;
	cout<<"\nNow Value of var : "<<var<<endl;

	int x=11,y=22;
	cout<<"\nBefore Calling swap Function x : "<<x<<", y : "<<y<<endl;
	swap(&x,&y);
	cout<<"After Calling swap Function x : "<<x<<", y : "<<y<<endl;

	return 0;
}
void swap(int* a,int* b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
