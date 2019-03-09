// Program to find sum of all odd and even number between 1 and 100
#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j,sumeven=0,sumodd=0;
    printf("\n\t----SUM OF ALL ODD NUMBER AND EVER NUMBERS BETWEEN 1 AND 100\n\n");
    printf("\nThe sum of EVEN numbers is : ");
    for (i=2;i<=100;i+=2)
    {
        printf(" + %d",i);
        sumeven+=i;
    }
    printf("\n\tThe sum value is : %d",sumeven);

    printf("\n\nThe sum of ODD numbers is : ");
    for (j=1;j<100;j+=2)
    {
        printf(" + %d",j);
        sumodd+=j;
    }
    printf("\n\tThe sum value is : %d",sumodd);


    getch();
}
