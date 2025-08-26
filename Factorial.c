#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n;
    int fact=1;
    printf("Enter number to get its factorial");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {fact=fact*i;
    }
    printf("Factorial of %d is %d",n,fact);
    }
