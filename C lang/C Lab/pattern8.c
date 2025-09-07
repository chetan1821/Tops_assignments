#include<stdio.h>
void main(){
	int i,j,n;
	char ch='a';
	printf("Enter the number of row :- ");
	scanf("%d",&n);
	

	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf("%c",ch);
			ch++;
		}
		printf("\n");
	}
	
}
