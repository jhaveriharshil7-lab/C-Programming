#include<stdio.h>
#include<conio.h>
void main()
{   int i;
    int sum = 0;
    for(i = 1; i <= 100; i++) {
    if(i % 3 == 0) {
    sum += i;
    }
    }
    printf("\nSum of numbers divisible by 3 between 1 and 100 = %d\n", sum);
    getch();
    }
