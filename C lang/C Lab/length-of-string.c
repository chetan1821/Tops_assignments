#include<stdio.h>
main(){
	char name[20];
	int i=0;
	printf("Enter the name :- ");
	gets(name);
//	scanf("%s",name);
	
	while(name[i] != '\0'){
		i++;
	}
	printf("\n length of string = %d",i);
}
