#include<iostream>
using namespace std;
class Test{
	int a;
	public :
		Test(int a){
			this->a=a;
		}
		friend class Friendclass;
};

class Friendclass{
	public :
		void dispaly(Test t1){
			cout<<"\n a="<<t1.a;
		}
};
main(){
	Test t1(3);
	Friendclass f1;
	f1.dispaly(t1);
}
