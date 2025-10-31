#include<iostream>
using namespace std;
class Parent{
	public :
		Parent(){
			cout<<"Parent class called..";
		}
		Parent(int x){
			cout<<"\n In Parent x="<<x;
		}
};
class child : public Parent{
	public :
		child(){
			cout<<"\n child class con called ";
		}
		child(int m,int y,int x):Parent (x){
			cout<<"\n In child M="<<m<<"\t y = "<<y;			
		}
};
main(){
	child c1;
	child c2(10,30,40);
	
}
