// Program to find sum of prime numbers between a given range
#include<stdio.h>
#include<conio.h>

void main()
{
    int lower,upper,sum=0,i,j,flag;
    printf("\n\t\t----PROGRAM TO FIND SUM OF ALL PRIME NUMBERS IN A RANGE");
    printf("\n\n\tEnter the lower limit of the range : ");
    scanf("%d",&lower);
    printf("\n\tEnter the upper limit of the range : ");
    scanf("%d",&upper);

    if (lower==1)
        lower=2;
    printf("\n\n\tThe sum of prime numbers is : \n\n\t");
    for(i=lower;i<=upper;i++)
    {
        flag=0;
        for (j=2;j<i;j++)
        {
            if (i%j==0)
                flag=1;
        }
        if (flag==0)
        {
            printf(" + %d",i);
            sum+=i;
        }
    }
    printf("\n\n\tThe sum of all Prime Numbers in the given range is : %d",sum);
    getch();
}
