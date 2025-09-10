#include<stdio.h>
#include<math.h>

// Function declarations
void SimpleInterest();
void CheckPrime();
void CheckArmstrong();
void AreaOfCircle();
void AreaOfRectangle();
void FibonacciSeries();

void main(){
    int ch;
    
    while(1){  // Infinite loop until user exits
        printf("\n\n===== MENU =====");
        printf("\n 1. Calculate Simple Interest");
        printf("\n 2. Check Prime Number");
        printf("\n 3. Check Armstrong Number");
        printf("\n 4. Find Area of Circle");
        printf("\n 5. Find Area of Rectangle");
        printf("\n 6. Print Fibonacci Series");
        printf("\n 7. Exit");
        
        printf("\n\n Enter your choice :- ");
        scanf("%d",&ch);
        
        switch(ch){
            case 1:
                SimpleInterest();
            break;
            
            case 2:
                CheckPrime();
            break;
            
            case 3:
                CheckArmstrong();
            break;
            
            case 4:
                AreaOfCircle();
            break;
            
            case 5:
                AreaOfRectangle();
            break;
            
            case 6:
                FibonacciSeries();
            break;
            
            case 7:
                printf("\n Exiting program... Goodbye!\n");
                return; // exits main()
            
            default:
                printf("\n Wrong choice! Please try again.\n");
        }
    }
}

// Function Definitions
void SimpleInterest(){
    int p,r,t,si;
    printf("\n Enter the Principal amount :- ");
    scanf("%d",&p);
    printf(" Enter the rate :- ");
    scanf("%d",&r);
    printf(" Enter the time (years) :- ");
    scanf("%d",&t);
    
    si = (p*r*t)/100;
    printf("\n The Simple Interest is %d\n",si); 
}

void CheckPrime(){
    int num,i,flag=0;
    printf("\n Enter a number :- ");
    scanf("%d",&num);
    
    if(num<=1){
        printf("%d is not a prime number.\n",num);
        return;
    }
    
    for(i=2;i<=num/2;i++){
        if(num%i==0){
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("%d is a prime number.\n",num);
    else
        printf("%d is not a prime number.\n",num);
}

void CheckArmstrong(){
    int num,rem,sum=0,temp;
    printf("\n Enter a number :- ");
    scanf("%d",&num);
    temp=num;
    while(num>0){
        rem=num%10;
        sum=sum+(rem*rem*rem);
        num=num/10;
    }
    if(temp==sum)
        printf("%d is an Armstrong number.\n",temp);
    else
        printf("%d is not an Armstrong number.\n",temp);
}

void AreaOfCircle(){
    float r,area;
    printf("\n Enter radius of the circle :- ");
    scanf("%f",&r);
    area=3.14*r*r;
    printf(" Area of circle is %.2f\n",area);
}

void AreaOfRectangle(){
    float l,b,area;
    printf("\n Enter length :- ");
    scanf("%f",&l);
    printf(" Enter breadth :- ");
    scanf("%f",&b);
    area=l*b;
    printf(" Area of rectangle is %.2f\n",area);
}

void FibonacciSeries(){
    int n,i,t1=0,t2=1,nextTerm;
    printf("\n Enter the number of terms :- ");
    scanf("%d",&n);
    printf(" Fibonacci Series: ");
    for(i=1;i<=n;i++){
        printf("%d ",t1);
        nextTerm=t1+t2;
        t1=t2;
        t2=nextTerm;
    }
    printf("\n");
}

