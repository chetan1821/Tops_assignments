#include <stdio.h>
void main(){
	float radius;
	float pi=3.14;
	float area;
//	area = pi*r*r;
	
    printf("\n Enter the radius of circle :");
	scanf("%f",&radius);

	area = pi*radius*radius;
	printf("the Area of circle : %.2f",area);
	
	
}
