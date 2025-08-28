#include<stdio.h>
void main(){
	int a,b;
	printf("Enter the value of a :- ");
	scanf("%d",&a);
	printf("\nEnter the value of b :- ");
	scanf("%d",&b);
//	swap the values without using the 3rd variable
	
	a = a+b; 
	b = a-b;
	a = a-b;
	 
	printf("After swapping the value");
	printf("\n a=%d \t b=%d ",a,b);
}
