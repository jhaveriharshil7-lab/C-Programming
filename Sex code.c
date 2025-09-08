#include<stdio.h>
#include<conio.h>
void main()
{   int i;
    int boys = 0, girls= 0;
    int sex_code;
    printf("\nEnter sex code for 50 students (1 for boy, 2 for girl):\n");
    for(i = 1; i <= 50; i++) {
    printf("Student %d sex code: ", i);
    scanf("%d", &sex_code);
    if(sex_code == 1) {
    boys++;}
    else if(sex_code == 2) {
    girls++;}
    else {
    printf("Invalid code entered. Please enter 1 for boy or 2 for girl.\n");
    i--;
    }
    }
    getch();
}
