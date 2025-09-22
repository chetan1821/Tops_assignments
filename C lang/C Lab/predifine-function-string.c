#include<stdio.h>
#include<string.h>
main(){
	char str1[20],str2[20];
	printf("Enter a string :- ");
	scanf("%s",str1);
	printf("str1 = %s",str1);
//	length of string 
	printf("\n length of string is %d",strlen(str1));
//	strcpy ==> strcopy
	strcpy(str2,str1);
	printf("\n str2 = %s",str2);
//	Compare string
	printf("\n compare : ",strcmp(str1, str2));
	
	
}
