#include<stdio.h>
void main(){
	char ch;
	printf("Enter any char :- ");
	scanf("%c",&ch);
	
//	(ch=="aeiouAEIOU")?printf("this charcter is vowel"):printf("This charcter is constant");
	(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
 	ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    ? printf("This character is vowel")
    : printf("This character is consonant");

}
