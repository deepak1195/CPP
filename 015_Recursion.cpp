//============================================================================
// Name        : 015_Recursion.cpp
// Author      : Deepak
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int fibinacci(int);
int main() {
	int n,term;
	cout<<"Enter A Number To get nth Term of Fibonacci : ";
	cin>>n;
	term=fibinacci(n);
	cout<<n<<"th Term is : "<<term;
	return 0;
}
int fibinacci(int num){
	if((num<=0)||(num==1)){
		return num;
	}
	else{
		return(fibinacci(num-1)+fibinacci(num-2));
	}
}
