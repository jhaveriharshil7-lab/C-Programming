#include<stdio.h>
#include<conio.h>
void main()
{
    int i=1;
    int n;
    printf("The first n natural numbers are \n");
    scanf("%d",&n);
    do
    {printf("%d\n",i);
    i++;
    }
    while( i<=n);
    }
