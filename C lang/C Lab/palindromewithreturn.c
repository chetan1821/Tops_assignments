#include<stdio.h>
//	with return type with parameter

int ispalindrome(int n){
	int rem,rev=0,temp;
	
	while(n!=0){
		rem=rem%10;
		rev=rev*10+rem;
		n=n/10;
	}
	if(temp==rev){
		return 1;
	}
	else{
		return 0;
	}
} 
main(){
	int num;
	printf("Enter num : ");
	scanf("%d",&num);
	
	if(ispalindrome(num)){
		printf("is palindrome");
	}
	else{
		printf("not");
	}
	
}
