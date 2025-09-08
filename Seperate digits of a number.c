#include<stdio.h>
#include<conio.h>
void main()
{   int i;
     int num, digit;
    printf("\nEnter a number to separate its digits: ");
    scanf("%d", &num);

    printf("Digits separated: ");
    while(num > 0) {
        digit = num % 10;
        printf("%d", digit);
        num = num / 10;
        if(num > 0) {
            printf(", ");
        }
    }
    printf("\n");
    getch();
    }
