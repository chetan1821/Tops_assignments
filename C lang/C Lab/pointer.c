#include<stdio.h>
main(){
	int a=10;
	int *ptr;
	ptr=&a;
	printf("Address :- %p and value :- %d ",ptr,*ptr);
	
}
