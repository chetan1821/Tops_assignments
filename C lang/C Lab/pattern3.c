#include<stdio.h>
void main(){
	int i,j,k;
	for(i=1;i<=26;i++){
		k='a';
		for(j=1;j<=i;j++){
			printf("%c",k);
			k++;
		}
		printf("\n");
	}
}
