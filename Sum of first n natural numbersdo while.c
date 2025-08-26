#include<stdio.h>
#include<conio.h>
void main()
{
    int i=1,sum=0;
    int n;
    printf("The first n natural numbers are \n");
    scanf("%d",&n);
    do
    {sum +=i;
    i++;
    }
    while( i<=n);
    printf("%d Sum",sum);
}
