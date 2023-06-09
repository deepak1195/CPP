//============================================================================
// Name        : 013_05_StructureWithArray.cpp
// Author      : Deepak
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

struct Student{
	int sId;
	string sName;
	string sSub[5];
};

void enterRecord(Student* ,int);
void displayRecords(Student* ,int);
int main() {

	int n;
	cout<<"Enter Number of Students You Want to Store : ";
	cin>>n;
	Student s[n];
	enterRecord(s,n);
	displayRecords(s,n);

	return 0;
}

void enterRecord(Student* sRec, int n){
	for(int i=0;i<n;i++){
		cout<<"\nEnter Info of Student Number "<<i+1<<".\n";
		cout<<"\nStudent ID: ";
		cin>>sRec[i].sId;;
		cout<<"Name : ";
		cin>>sRec[i].sName;
		for(int j=0;j<5;j++){
			cout<<"Subject "<<j+1<<" : ";
			getline(cin, sRec[i].sSub[j]);
		}
		cout<<endl;
	}
}
void displayRecords(Student* sRec, int n){
	for(int i=0;i<n;i++){
		cout<<"\nStudent ID: "<<sRec[i].sId<<"\nName : "<<sRec[i].sName<<"\nSubjects name : ";
		for(int j=0;j<5;j++){
			cout<<sRec[i].sSub[j]<<", ";
		}
		cout<<endl;
	}
}
