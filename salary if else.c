#include<stdio.h>
#include<conio.h>
void main()
{
    float net_salary, gross_salary, allowance, deductions;
    printf("Enter gross salary");
    scanf("%f",&gross_salary);
    if(gross_salary>10000)
    { allowance=0.1*gross_salary;
     deductions=0.03*gross_salary;}
    else if(gross_salary>5000)
    { allowance=0.07*gross_salary;
     deductions=0.02*gross_salary;}
     net_salary=gross_salary+allowance-deductions;
        printf("%f allowance",allowance);
     printf("%f deductions",deductions);
     printf("%f net salary",net_salary);

    }
