#include<stdio.h>
#include<conio.h>
void main()
{
    int i,sum=0;
    int n;
    printf("The sum of first n natural numbers is \n");
    scanf("%d",&n);
    i=1;
    while( i<=n)
    {sum +=i;
    ++i;
    }
    printf("%d Sum",sum);
    }
