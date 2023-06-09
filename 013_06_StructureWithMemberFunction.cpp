//============================================================================
// Name        : 013_06_StructureWithMemberFunction.cpp
// Author      : Deepak
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
struct Book{
	private:
		int bID;
		char bName[30];
		float bPrice;
	public:
		void takeDetails(){
			cout<<"\nEnter Book ID: ";
			cin>>bID;
			cout<<"Enter Book Name : ";
			cin>>bName;
			cout<<"Enter Price : ";
			cin>>bPrice;
		}
		void diplayDetails(){
			cout<<"\nBook ID: "<<bID<<"\nBook Name : "<<bName<<"\nPrice : "<<bPrice;
		}
};
int main() {
	Book b1;
	b1.takeDetails();
	b1.diplayDetails();
	return 0;
}
