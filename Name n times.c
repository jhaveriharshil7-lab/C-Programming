#include<stdio.h>
#include<conio.h>
void main()
{   int i,n ;
    char name[100];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your name n times");
    scanf("%d",&n);
    for (i = 1; i <= n; i++)
    {
        printf("%s\n", name);
    }

    printf("\nYour name is printed n times\n");
    getch();
}
