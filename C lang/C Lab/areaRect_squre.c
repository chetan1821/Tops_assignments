#include<stdio.h>
void main(){
	float length, width, side;
    float areaRectangle, areaSquare;
    
    printf("Enter the length of Area :");
    scanf("%f",&length);
    
    printf("Enter the width of Area :");
    scanf("%f",&width);
    
//    area of rectangle =length * width;
	areaRectangle = length * width;
	printf("The area of Rectangle is : %.2f",areaRectangle);
//	find the area of squre =side * side;
	printf("\nEnter the side of squre :");
    scanf("%f",&side);
    areaSquare=side*side;
    printf("\nArea of squre : %.2f",areaSquare);
    
	


    
    
    
    
}

