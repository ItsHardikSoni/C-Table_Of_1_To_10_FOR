// Write a program the table of 1 to 10 Using (WHILE)


#include<stdio.h>
#include<conio.h>
void main()
{
    for (int i=1;i<=10;i++)
    {
    for (int j=1;j<=10;j++) printf("%d\t",i*j);
    printf("\n");
    }
    getch();
}
