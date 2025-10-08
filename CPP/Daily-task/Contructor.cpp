#include<iostream>
using namespace std;
class Maths{
	public :
		int a,b;
		Maths(){
			cout<<"Default Constroctor..";
		}
		Maths(int x,int y){
			a=x;
			b=y;
		}
		Maths(Maths &m2){
			a=m2.a;
			b=m2.b;
		}
		void display(){
			cout<<"\na = "<<a;
			cout<<"\nb = "<<b;
		}
};
main(){
	cout<<"\nDefault Con..";
	Maths m1;
	m1.display();
	cout<<"\nParameterized con..";
	Maths m2(12,34);
	m2.display();
	
	cout<<"\n Copy con..";
	Maths m3=m2;
	m3.display();
	
	}

