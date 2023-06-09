//============================================================================
// Name        : 009_01_multiDimensionalArray.cpp
// Author      : Deepak
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	//Declare and Initialize 2-D Array
	int arr[2][3]={{11,34,32},{45,65,44}};

	//Access A Element of 2-D Array
	cout<<"Access A Element of 2-D Array\n";
	cout<<"arr[1][2] : "<<arr[1][2]<<endl;

	//Modify 2-D Array of Given Coordinates
	arr[0][2]=-36;
	cout<<"\nModified 2-D Array of Given Coordinates\n";
	cout<<"arr[0][2] : "<<arr[0][2]<<endl;

	//Printing 2-D Array
	cout<<"\nPrinting 2-D Array\n";
	int row=sizeof(arr)/sizeof(arr[0]);
	int col=sizeof(arr[0])/sizeof(arr[0][0]);
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<"arr["<<i<<"]["<<j<<"] : "<<arr[i][j]<<"\t";
		}
		cout<<"\n";
	}

	//Using User Inputs Declare and Initialize 2-D Array
	cout<<"\nUsing User Inputs Declare and Initialize 2-D Array\n";
	int nrow, ncol;
	cout<<"Enter Numbers of Row : ";
	cin>>nrow;

	cout<<"Enter Numbers of Column : ";
	cin>>ncol;
	int arr1[nrow][ncol];
	cout<<"\nEnter Array Values\n";
	for(int i=0;i<nrow;i++){
		for(int j=0;j<ncol;j++){
			cout<<"arr1["<<i<<"]["<<j<<"] : ";
			cin>>arr1[i][j];
		}
	}

	//Display User Input Array
	cout<<"\nDisplaying User Input Array\n";
	for(int i=0;i<nrow;i++){
		for(int j=0;j<ncol;j++){
			cout<<"arr1["<<i<<"]["<<j<<"] : "<<arr1[i][j]<<"\t";
		}
		cout<<"\n";
	}
	return 0;
}
