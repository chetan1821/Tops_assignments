#include<stdio.h>
void swap(int *a,int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
main(){
	int a=10,b=10;
	swap(10,20);
	printf("a= %d b=%d",a,b);
}
