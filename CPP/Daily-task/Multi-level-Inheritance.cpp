#include<iostream>
using namespace std;
//	Multi-level Inheritance
class Person{
	public :
		char name[50],email[20];
		int contact;
		getPersonalDetail(){
			cout<<"\n Enter name : ";
			cin>>name;
			cout<<"\n Enter email : ";
			cin>>email;
			cout<<"\n Enter Contact no : ";
			cin>>contact;
		}
};
class Employee : public Person{
	public :
		int empid;
		char dept[20];
		
};
