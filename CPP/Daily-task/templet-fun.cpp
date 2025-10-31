#include<iostream>
using namespace std;
template <typename T>
T add(T a, T b){
	cout<<"\naddtion of "<<a<<"and"<<b<<" = "<<(a+b);
}
main(){
	add<int>(12,33);
	add<float>(12.3,44.5);
}
