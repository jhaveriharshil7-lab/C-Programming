#include<stdio.h>
#include<conio.h>
void main()
{   float a,b,c,total,average;
    printf("Enter marks for 3 subjects");
    scanf("%f %f %f",&a,&b,&c);
    total=a+b+c;
    average=total/3.0;
    printf("%f Total Marks",total);
    printf("%f Average",average);
    if(a<35||b<35||c<35)
    {
    printf("Result:Fail");
    }
    else if(average>70)
    {
    printf("Result:Distinction");
    }
    else if(average>60)
    {
    printf("Result:1st class");
    }
    else if(average>50)
    {
    printf("Result:2nd class");
    }
    else if(average>35)
    {
    printf("Result:3rd class");
    }
    else if(average<35)
    {
    printf("Result:Fail");
    }
    getch();
    }
