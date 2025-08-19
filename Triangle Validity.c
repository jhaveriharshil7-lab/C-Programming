#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b,c;
    printf("Enter 3 sides of triangle");
    scanf("%d %d %d",&a,&b,&c);
    if(a+b>c && b+c>a && a+c>b)
    {
    printf("The triangle is valid");
    }
    else
    {
    printf("The triangle is invalid");
    }
    getch();
}
