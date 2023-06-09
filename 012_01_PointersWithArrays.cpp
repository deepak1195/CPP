//============================================================================
// Name        : 012_01_PointersWithArrays.cpp
// Author      : Deepak
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void sortArray(int*);
void printArray(int*);
int main() {
	int arr[5];
	cout<<"Enter Integer Values for Array.\n";
	for(int i=0; i<5; i++){
		cout<<"arr["<<i<<"] : ";
		cin>>arr[i];
	}

	cout<<"\nBefore Calling sortArray() Function"<<endl;
	printArray(arr);

	//Calling sortArray() Function
	sortArray(arr);

	cout<<"\nAfter Calling sortArray() Function"<<endl;
	printArray(arr);
	return 0;
}

void sortArray(int* a){
	for(int i=0;i<4;i++){
		for(int j=i+1;j<5;j++){
			if(a[i]>a[j]){
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}

void printArray(int* a){
	for(int i=0; i<5; i++){
		cout<<a[i]<<" | ";
	}
	cout<<endl;
}
