#include<stdio.h>
main(){
	int a[3][3],b[3][3],c[3][3],i,j,k;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Enter of a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
		
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\na[%d][%d]=%d",i,j,a[i][j]);
		}
		
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Enter of b[%d][%d] : ",i,j);
			scanf("%d",&b[i][j]);
		}
		
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\nb[%d][%d]=%d",i,j,b[i][j]);
		}
		
	}
	
	
	printf("\nMatrix Addition (C = A + B):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            c[i][j] = a[i][j] + b[i][j];
            printf("%4d", c[i][j]);
        }
        printf("\n");
    }

	
//	for(i=0;i<3;i++){
//		for(j=0;j<3;j++){
//			c[i][j]=0;
//			for(k=0;k<3;k++){
//				c[i][j]+=a[i][k]*b[k][j];
//			}
//			
//		}
//		printf("\n Mul of Array c[%d][%d]=%d",i,j,c[i][j]);
//	}
printf("\nMatrix Multiplication (C = A * B):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            c[i][j] = 0; // reset before summation
            for (k = 0; k < 3; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
            printf("%4d", c[i][j]);
        }
        printf("\n");
    }
	
	
	
	
}
