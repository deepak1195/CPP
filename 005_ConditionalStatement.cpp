//============================================================================
// Name        : 005_ConditionalStatement.cpp
// Author      : Deepak
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;



//If Statement
//int main() {
//	int age;
//	cout<<"Enter Your Age : ";
//	cin>>age;
//	if(age>=18){
//		cout<<"yes!, You can Apply for the Driving License.";
//	}
//}

//else Statement
// int main() {
//	 	int age;
//	 	cout<<"Enter Your Age : ";
//	 	cin>>age;
//	 	if(age>=18){
//	 		cout<<"yes!, You can Apply for the Driving License.";
//	 	}
//	 	else{
//	 		cout<<"To Apply Driving License Wait For "<<18-age<<" Years.";
//	 	}
// }

//Short Hand If-Else
//int main() {
//	 	int age;
//	 	cout<<"Enter Your Age : ";
//	 	cin>>age;
//	 	string ans=(age>=18) ? "yes!, You can Apply for the Driving License." : "Sorry You Can't Apply For Driving License.";
//	 	cout<<ans;
//}

 //Else-If Statement
// int main() {
//	 	int num;
//	 	cout<<"Enter A Number : ";
//	 	cin>>num;
//	 	if(num>0){
//	 		cout<<num<<" Is A Positive Number";
//	 	}
//	 	else if(num<0){
//	 		cout<<num<<" Is A Negative Number";
//	 	}
//	 	else{
//	 		cout<<"Oh! You Entered : "<<num;
//	 	}
// }

//Nested If-Else
 int main() {
	 	int num1,num2,num3;
	 	cout<<"Enter Three Numbers : ";
	 	cin>>num1>>num2>>num3;

	 	cout<<"Num1 Is : "<<num1<<"\nNum2 Is : "<<num2<<"\nnum3 Is : "<<num3<<endl;

	 	if((num1>num2)&&(num1>num3)){
	 		cout<<num1<<" Is Biggest Number And ";
	 		if(num1%2==0){
	 			cout<<num1<<" Is Even Number."<<endl;
	 		}
	 		else{
	 			cout<<num1<<" Is Odd Number.";
	 		}
	 	}
	 	else if((num2>num1)&&(num2>num3)){
			cout<<num2<<" Is Biggest Number And ";
	 		if(num2%2==0){
				cout<<num2<<" Is Even Number."<<endl;
			}
			else{
				cout<<num2<<" Is Odd Number.";
			}
	 	}
	 	else{
			cout<<num3<<" Is Biggest Number And ";
	 		if(num3%2==0){
				cout<<num3<<" Is Even Number."<<endl;
			}
			else{
				cout<<num3<<" Is Odd Number.";
			}

	 	}
 }
