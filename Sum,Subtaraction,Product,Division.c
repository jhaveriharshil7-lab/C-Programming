#include<stdio.h>
#include<conio.h>
void main()
{   int a,b,c,x,y,z ;
    printf("Enter first number");
    scanf("%d",&a);
    printf("Enter second number");
    scanf("%d",&b);
    c=a+b;
    x=a-b;
    y=a*b;
    z=a/b;
    printf("The sum of %d and %d is %d",a,b,c);
    printf("The subtraction of %d and %d is %d",a,b,x);
    printf("The product of %d and %d is %d",a,b,y);
    printf("The division of %d and %d is %d",a,b,z);
    getch();
}
