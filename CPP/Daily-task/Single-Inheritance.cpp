#include<iostream>
using namespace std;
//	Single Inheritance 
class category{
	protected :
		int cid;
		char cname[20];
		public :
			void getcategory(){
				cout<<"\n Enter category id and name : ";
				cin>>cid>>cname;
			}
};
class Product : public category{
	public :
		int pid;
		char pname[50];
		float price;
		void getProduct(){
			cout<<"Enter pid , pname , price :";
			cin>>pid>>pname>>price;
		}
		void showProduct(){
			cout<<"\n cid "<<cid<<"\t cname "<<cname;
			cout<<"\n pid "<<pid;
			cout<<"\n pname "<<pname;
			cout<<"\n price "<<price;
		}
};
main(){
	Product p1;
	p1.getcategory();
	p1.getProduct();
	p1.showProduct();
}

