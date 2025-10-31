#include<iostream>
using namespace std;
class Parent{
	public :
		virtual void display(){
			cout<<"Parent class method called..";
		}
		
}; 
class child : public Parent{
	public :
		void display(){
			cout<<"\n child class method called..";
		}
};
main(){
	Parent *p1;
	child c1;
	p1=&c1;
	p1->display();
	c1.display();
}
