#include<stdio.h>
main(){
	int a=0,b=1,c,n;
	printf("Enter terms of number : ");
	scanf("%d",&n);
	printf("%d\t%d",a,b);
	while(n != 0){
		c=a+b;
		
		printf("\t%d",c);
		a=b;
		b=c;
		n--;
	}

}
