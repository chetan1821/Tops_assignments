#include<stdio.h>
void main(){
	int Principal,Rate,Time;
	int Interest;
	
	printf("Enter the principal ammout :");
	scanf("%d",&Principal);
	
	printf("\nEnter the rate :");
	scanf("%d",&Rate);
	
	printf("\nEnter the time :");
	scanf("%d",&Time);
	
//	Simple interest = principal * rate * time /100
	Interest = Principal*Rate*Time/100;
	printf("The simple interest is :%d",Interest);
}
