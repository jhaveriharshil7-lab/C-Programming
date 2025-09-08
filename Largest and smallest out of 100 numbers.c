#include<stdio.h>
#include<conio.h>
void main()
{   int i;
    float numbers[100];
    float largest, smallest;

    printf("\nEnter 100 numbers:\n");
    for(i = 0; i < 100; i++) {
        printf("Number %d: ", i + 1);
        scanf("%f", &numbers[i]);
    }

    largest = smallest = numbers[0];

    for(i = 1; i < 100; i++) {
        if(numbers[i] > largest) {
            largest = numbers[i];
        }
        if(numbers[i] < smallest) {
            smallest = numbers[i];
        }
    }

    printf("\nLargest number = %.2f\n", largest);
    printf("Smallest number = %.2f\n",smallest);
    getch();
    }
