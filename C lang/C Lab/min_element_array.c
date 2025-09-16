#include<stdio.h>
main(){
	int a[5],min;
	int i;
	
	for(i=0;i<5;i++){
		printf("enter a[%d] :- ",i);
		scanf("%d",&a[i]);
	}
	min=a[0];
	for(i=0;i<5;i++){
		if(a[i] < min){
            min = a[i];
        }
	}
	
	for(i=0;i<5;i++){
		printf("\n a[%d] = %d ",i,a[i]);
	}
	 printf("\nMinimum element in array = %d", min);
	
}
