#include<stdio.h>
#include<conio.h>
void main()
{   int i;
    float number;
    int positive = 0, negative = 0, zero = 0;
    printf("Enter 200 numbers:\n");
    for(i = 1; i <= 200; i++) {
    printf("Number %d: ", i);
    scanf("%f", &number);
    if(number > 0) {
    positive++;}
    else if(number < 0) {
    negative++;}
    else {
    zero++;
    }
    }
    printf("\nPositive numbers = %d\n", positive);
    printf("Negative numbers = %d\n", negative);
    printf("Zeroes = %d\n", zero);
    getch();
}
