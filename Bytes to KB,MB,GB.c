#include<stdio.h>
#include<conio.h>
void main()
{   int byte,KB,MB,GB ;
    printf("Enter byte");
    scanf("%d",&byte);
    KB=byte/1024;
    MB=byte/1048576;
    GB=byte/1073741824;
    printf("%d KB",KB);
    printf("%d MB",MB);
    printf("%d GB",GB);
    getch();
}
