// Program to find the sum of Series
// S= 1! + 2! + 3! + 4! + . . . . . + N! (Input N)
#include<stdio.h>
#include<conio.h>

void main()
{
    int n,i,j,fact,sum=0,temp;
    printf("\n\t\t----PROGRAM TO PRINT SUM OF SERIES----");
    printf("\n\n\tEnter the value of N : ");
    scanf("%d",&n);
    printf("\n\n\tThe series is\n");
    printf("\n\t\tS = ");
    for (i=1;i<=n;i++)
    {
        printf("+%d! ",i);
        fact=1;
        for (j=1;j<=i;j++)
        {
            fact=fact*j;
        }
        sum+=fact;
    }
    printf("\n\n\tThe sum of the series is : %d",sum);
    getch();
}
