#include <stdio.h>
void main(){
	int a,b,temp;
	printf("Enter the value of a :- ");
	scanf("%d",&a);
	printf("\nEnter the value of b :- ");
	scanf("%d",&b);
	
//	swap the value a to b and b to c
	temp = a;
	a = b;
	b = temp;
	printf("After swapping the value");
	printf("\n a=%d \t b=%d ",a,b);
	
}
