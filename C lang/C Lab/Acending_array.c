#include<stdio.h>
main(){
	int a[5];
	int i,j,temp;
//	input
	for(i=0;i<5;i++){
		printf("\n enter a[%d]= ",i);
		scanf("%d",&a[i]);
	}
//	sorting
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(a[i]>a[j]){  //for decending order < sing in this condition..
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
//	output printing
	for(i=0;i<5;i++){
		printf("\n a[%d]=%d",i,a[i]);
	}
}
