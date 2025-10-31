#include<iostream>
using namespace std;
class Calculator{
	public :
		addtion(int a,int b){
			cout<<"\nAddtion :"<<a+b;
		}
		subtraction(int a,int b){
			cout<<"\nSubtraction :"<<a-b;
		}
		multiplication(int a,int b){
			cout<<"\nMultiplication :"<<a*b;
		}
		division(int a,int b){
			cout<<"\nDivision :"<<a/b;
		}
};
main(){
	int a,b;
	cout<<"Enter the value of a : ";
	cin>>a;
	cout<<"Enter the value of b : ";
	cin>>b;
	Calculator cal;
	cal.addtion(a,b);
	cal.subtraction(a,b);
	cal.multiplication(a,b);
	cal.division(a,b);
}
