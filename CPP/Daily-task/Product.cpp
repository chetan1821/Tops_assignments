#include<iostream>
using namespace std;
class Product{
	public :
		int pid;
		char pname[50];
		float price;
	void getProduct(){
		cout<<"Enter product id : ";
		cin>>pid;
		cout<<"Enter product name : ";
		cin>>pname;
		cout<<"Enter product price : ";
		cin>>price;
	}
	void showProduct(){
		cout<<"\n Product Id : "<<pid;
		cout<<"\n Product name : "<<pname;
		cout<<"\n Product price : "<<price;
	}
};
main(){
	Product p1;
	p1.getProduct();
	p1.showProduct();
}
