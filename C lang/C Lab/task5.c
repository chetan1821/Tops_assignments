#include<stdio.h>
main(){
	int num,rem,rev=0,temp;
	printf("Enter num :- ");
	scanf("%d",&num);
	temp=num;
	
	while(num != 0){
		rem=num%10; =>1=>2=>1
		rev=rev*10+rem;=>1=>2=>1
		num=num/10;=>12=>1=>0
	}
	if(temp==rev){
		printf("\npalindrome");
	}
	else{
		printf("\n not palindrome");
	}
}
