#include<stdio.h>
main(){
	int a[5],max;
	int i;
	
	for(i=0;i<5;i++){
		printf("enter a[%d] :- ",i);
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=0;i<5;i++){
		if(a[i] > max){
            max = a[i];
        }
	}
	
	for(i=0;i<5;i++){
		printf("\n a[%d] = %d ",i,a[i]);
	}
	 printf("\nMaximum element in array = %d", max);
	
}
