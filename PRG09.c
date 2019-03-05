// Program in C to find a year is LEAP or not

#include<stdio.h>
#include<conio.h>
void main()
{
    int y;

    printf("\n-----** PROGRAM TO FIND A YEAR IS LEAP OR NOT **-----\n\n");

    printf("\nEnter the YEAR to check: ");
    scanf("%d",&y);

    if (y%400==0)
        printf("\n\nYear is LEAP\n\n");
    else if (y%100==0)
        printf("\n\nYear is Not LEAP\n\n");
    else if (y%4==0)
        printf("\n\nYear is LEAP\n\n");
    else
        printf("\n\nYear is Not LEAP\n\n");

    getch();

}
