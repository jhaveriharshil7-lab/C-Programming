#include<stdio.h>
#include<conio.h>
void main()
{   int i;
    printf("Numbers divisible by 5 between 1 and 100:\n");
    for(i = 1; i <= 100; i++) {
    if(i % 5 == 0) {
    printf("%d ", i);
    }
    }
    printf("\n");
    getch();
    }
