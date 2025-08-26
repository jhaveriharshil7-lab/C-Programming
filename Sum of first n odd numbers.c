#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n;
    int sum=0;
    printf("The sum of first n odd numbers is \n");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {sum +=2*i-1;
    }
    printf("%d Sum",sum);
    }
