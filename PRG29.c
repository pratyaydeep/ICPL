//Program to determine Pearson Numbers in a given range
#include<stdio.h>
#include<conio.h>
void main()
{
    int start,end,i,j,count=0,temp,digit,sum,fact;
    printf("\n\t\t----PROGRAM TO DETERMINE PALINDROME NUMBERS IN A GIVEN RANGE----");
    printf("\n\n\tEnter the value of Starting range : ");
    scanf("%d",&start);
    printf("\n\n\tEnter the value of Ending range : ");
    scanf("%d",&end);

    if (start<1)
        start=1;

    printf("\n\n\tThe Pearson numbers within the range is\n\t");
    for (i=start;i<=end;i++)
    {
        temp=i;
        sum=0;
        while(temp>0)
        {
            digit=temp%10;
            fact=1;
            for (j=1;j<=digit;j++)
                fact=fact*j;
            sum+=fact;
            temp=temp/10;
        }
        if(sum==i)
        {
            printf(" %d,",i);
            count++;
        }

    }
    printf("\n\n\tThe number of Pearson number in the range is : %d",count);
    getch();
}


