#include<stdio.h>
void main(){
	int num;
	
	printf("Enter the any number:- ");
	scanf("%d",&num);
	
	(num%2==0)?printf("this %d is even number",num):printf("this %d is odd number",num);
}
