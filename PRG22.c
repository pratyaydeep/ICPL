//Program for determining perfect number
// Example 28 is a Perfect Number because Sum of the Divisor of 28 = 1+2+4+7+14 =28
#include<stdio.h>
#include<conio.h>

void main()
{
    int num,i,sum=0;
    printf("\n\t\t----PROGRAM TO DETERMINE PERFECT NUMBER----");
    printf("\n\n\tEnter the number to check : ");
    scanf("%d",&num);
    for (i=1;i<num;i++)
    {
        if(num%i==0)
            sum+=i;
    }
    if(sum==num)
        printf("\n\n\tThe number is a Perfect Number\n");
    else
        printf("\n\n\tThe number is Not a Perfect Number\n");

    getch();
}
