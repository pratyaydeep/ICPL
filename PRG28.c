//Program to determine Pearson Number
//e.g. 145 is a Pearson number because 1! + 4! + 5! =145
#include<stdio.h>
#include<conio.h>

void main()
{
    int num,i,j,temp,digit,fact,sum=0;
    printf("\n\t\t----PROGRAM TO DETERMINE PEARSON NUMBER----");
    printf("\n\n\tEnter the number to check : ");
    scanf("%d",&num);
    temp=num;
    while(temp>0)
    {
        digit=temp%10;
        fact=1;
        for (i=1;i<=digit;i++)
            fact=fact*i;
        sum+=fact;
        temp=temp/10;
    }
    if(sum==num)
        printf("\n\n\tThe number is a Pearson Number\n");
    else
        printf("\n\n\tThe number is Not a Pearson Number\n");

    getch();
}

