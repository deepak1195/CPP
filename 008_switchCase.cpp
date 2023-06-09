//============================================================================
// Name        : 008_switchCase.cpp
// Author      : Deepak
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int month;
	cout<<"Enter A Number Between 1 to 12 : ";
	cin>>month;
	switch(month){
		case 1:
			cout<<month<<"st Month of A Year is : "<<"January";
			break;
		case 2:
			cout<<month<<"nd Month of A Year is : "<<"February";
			break;
		case 3:
			cout<<month<<"rd Month of A Year is : "<<"March";
			break;
		case 4:
			cout<<month<<"th Month of A Year is : "<<"April";
			break;
		case 5:
			cout<<month<<"th Month of A Year is : "<<"May";
			break;
		case 6:
			cout<<month<<"th Month of A Year is : "<<"June";
			break;
		case 7:
			cout<<month<<"th Month of A Year is : "<<"July";
			break;
		case 8:
			cout<<month<<"th Month of A Year is : "<<"August";
			break;
		case 9:
			cout<<month<<"th Month of A Year is : "<<"September";
			break;
		case 10:
			cout<<month<<"th Month of A Year is : "<<"October";
			break;
		case 11:
			cout<<month<<"th Month of A Year is : "<<"November";
			break;
		case 12:
			cout<<month<<"th Month of A Year is : "<<"December";
			break;
	}

	return 0;
}
