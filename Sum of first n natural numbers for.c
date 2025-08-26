#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n;
    int sum=0;
    printf("The sum of first n natural numbers is \n");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {sum +=i;
    }
    printf("%d Sum",sum);
    }
