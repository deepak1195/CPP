//============================================================================
// Name        : 006_Loops.cpp
// Author      : Deepak
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

//For loop
//int main() {
//	cout<<"Enter A Number For Table : ";
//	int num;
//	cin>>num;
//	for(int i=1;i<=10;i++){
//		cout<<num<<" * "<<i<<" = "<<(num*i)<<endl;
//	}
//	return 0;
//}

//While loop
//int main() {
//	cout<<"Enter A Number For Table : ";
//	int num,i=1;
//	cin>>num;
//	while(i<=10){
//		cout<<num<<" * "<<i<<" = "<<(num*i)<<endl;
//		i++;
//	}
//	return 0;
//}

//Do-While loop
//int main() {
//	cout<<"Enter A Number For Table : ";
//	int num,i=1;
//	cin>>num;
//
//	do{
//		cout<<num<<" * "<<i<<" = "<<(num*i)<<endl;
//		i++;
//	}while(i<=10);
//	return 0;
//}

//Nested-For loop
int main() {
	cout<<"Enter A Number For Table : ";
	int num;
	cin>>num;
	for(int i=1;i<=10;i++){
		for(int j=1;j<=num;j++){
			cout<<j<<" * "<<i<<" = "<<(i*j)<<"\t";
		}
		cout<<endl;
	}
	return 0;
}
