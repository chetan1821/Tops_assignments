#include<stdio.h>
main(){
	char str[10]={'c','h','e','t','a','n','\0'};
	printf("String :- %s ",str);
	
	char name[20];
	printf("\n Enter a name :- ");
//	scanf("%s",name);
	gets(name);
	puts(name);
//	printf("\n Name :- %s",name);
}
