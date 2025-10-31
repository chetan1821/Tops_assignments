#include<iostream>
#include<fstream>
using namespace std;
main(){
	char data[100];
	ofstream f1;
	f1.open("cppfile.txt");
	f1<<"Hello chetan..";
	f1.close();
	
	ifstream f2;
	f2.open("cppfile.txt");
	f2.getline(data,100);
	cout<<"\n Reading data from file *** \n "<<data;
	f2.close();
}

