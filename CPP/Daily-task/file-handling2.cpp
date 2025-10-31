#include<iostream>
#include<fstream>
using namespace std;
main(){
	char line[100],ch;
	int enroll;
	char name[20];
	char email[20];
	fstream f1;
	f1.open("student.csv",ios::app);
	cout<<"\n Enter Enroll name and email : ";
	cin>>enroll>>name>>email;
	f1<<enroll<<","<<name<<","<<email<<"\n";
	f1.close();
	
	fstream f2;
	f2.open("student.csv",ios::in);
	while(f2.getline(line,200)){
		cout<<line;
		cout<<"\n";
	}
	
}
