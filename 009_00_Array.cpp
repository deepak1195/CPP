//============================================================================
// Name        : 009_00_Array.cpp
// Author      : Deepak
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	//Array Creation and Initialization
	int arr[5]={12,22,43,22,12};

	//Access A Element of Array
	cout<<"Access A Element of Array\n";
	cout<<"arr[3] : "<<arr[3]<<endl;

	//Modify Value at particular Index
	cout<<"\nModify Value at particular Index\n";
	arr[3]=105;
	cout<<"arr[3] : "<<arr[3]<<endl;

	//Array Traversing and Print
	cout<<"\nPrint Complete Array";
	int size=sizeof(arr)/sizeof(int);
	for(int i=0;i<size;++i){
		cout<<"\narr["<<i<<"]"<<" : "<<arr[i];
	}

	//Using Foreach Loop
	cout<<"\n\nUsing Foreach Loop";
	int idx=0;
	for(int i:arr){
		cout<<"\narr["<<idx<<"]"<<" : "<<i;
		idx+=1;
	}

	//Omit Array Size
	string arr2[]={"India","USA","Japan","UAE"};
	cout<<"\n\nPrint Omitted Array";
	for(int i=0;i<=3;++i){
		cout<<"\narr2["<<i<<"]"<<" : "<<arr2[i];
	}

	//Omit Elements on Declaration
	string arr3[3];
	arr3[0]="Apple";
	arr3[1]="Banana";
	arr3[2]="Grapes";
	cout<<"\n\nPrint Omitted Array";
	for(int i=0;i<=2;++i){
		cout<<"\narr3["<<i<<"]"<<" : "<<arr3[i];
	}
	return 0;
}
