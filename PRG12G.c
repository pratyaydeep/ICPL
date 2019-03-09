// Program to find the sum of Series
// S= 1/1! + 1/2! + 1/3! + 1/4! + . . . . . + 1/N! (Input N)
#include<stdio.h>
#include<conio.h>

void main()
{
    int n,i,j;
    float sum=0,fact;
    printf("\n\t\t----PROGRAM TO PRINT SUM OF SERIES----");
    printf("\n\n\tEnter the value of N : ");
    scanf("%d",&n);
    printf("\n\n\tThe series is\n");
    printf("\n\t\tS = ");
    for (i=1;i<=n;i++)
    {
        printf("+1/%d! ",i);
        fact=1;
        for (j=1;j<=i;j++)
        {
            fact=fact*j;
        }
        sum+=(1/fact);
    }
    printf("\n\n\tThe sum of the series is : %f",sum);
    getch();
}

