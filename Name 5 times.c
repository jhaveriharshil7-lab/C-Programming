#include<stdio.h>
#include<conio.h>
void main()
{   int i ;
    char name[100];
    printf("Enter your name: ");
    scanf("%s", name);
    for (i = 1; i <= 5; i++)
    {
        printf("%s\n", name);
    }

    printf("\nYour name is printed 5 times\n");
    getch();
}
