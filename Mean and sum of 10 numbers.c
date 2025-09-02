#include<stdio.h>
#include<conio.h>
void main()
{   int numbers[10];
    int sum=0;
    int i;
    float mean;
    printf("Enter 10 integer values");
    for(i=0;i<10;i++)
    {printf(" Enter value %d :",i+1);
    scanf("%d",&numbers[i]);
    sum+=numbers[i];}
    mean=sum/10.0;
    printf("Sum of 10 numbers %d",sum);
    printf("Mean of 10 numbers %.2f",mean);
    getch();
    }
