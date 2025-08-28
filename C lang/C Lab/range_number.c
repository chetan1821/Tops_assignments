#include<stdio.h>
void main(){
    int choice,num;
    printf("press 1 for range in 1 to 10 in forward order\n");
    printf("press 2 for range in 10 to 1 in reverse order\n");
    printf("enter your choice\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            for(num=1;num<=10;num++){
                printf("%d\n",num);
            }
            break;
        case 2:
            for(num=10;num>=1;num--){
                printf("%d\n",num);
            }
            break;
        default:
            printf("invalid choice\n");
    }
}