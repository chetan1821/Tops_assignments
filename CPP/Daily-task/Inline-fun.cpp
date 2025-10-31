#include<iostream>
class Test{
	public :
	inline void display(){
		std::cout<<"\nInline Function";
	}
};
main(){
	Test t[3];
	int i;
	for(i=0;i<3;i++){
		t[i].display();
	}
}
