//============================================================================
// Name        : 007_breakContinue.cpp
// Author      : Deepak
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

//Break Statement
//int main() {
//	int num=0;
//	while(num>=0){
//		if(num>13){
//			break;
//		}
//		cout<<num<< endl;
//		num=num+1;
//	}
//	return 0;
//}

//Continue Statement
int main() {
	int num=0;
	while(num<10){
		num=num+1;
		if((num%2)!=0){
			continue;
		}
		cout<<num<< endl;
	}
	return 0;
}
