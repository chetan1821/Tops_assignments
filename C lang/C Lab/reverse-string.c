#include<stdio.h>
main(){
//	reverse of string
	char name[20],name2[20];
	int i=0,j=0,len;
	
	printf("Enter the name :- ");
	scanf("%s",name);
	
	while(name[i]!='\0'){
		i++;
	}
	len=i;
	
	printf("\n length = %d",len);
	i--;
	
	while(i>=0){
		printf("\n i = %d  c=%d",i,name[i]);
		name2[j]=name[i];
		printf("\t j=%d c=%c",j,name2[j]);
		i--;
		j++;
	}
	name2[j]='\0';
	printf("\n Reverse string = %s", name2);
}
