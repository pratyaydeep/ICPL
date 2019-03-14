//C program for determining how many Palindrome numbers exist within a given range
#include<stdio.h>
#include<conio.h>

void main()
{
    int start,end,i,count=0,temp,digit,rev;
    printf("\n\t\t----PROGRAM TO DETERMINE PALINDROME NUMBERS IN A GIVEN RANGE----");
    printf("\n\n\tEnter the value of Starting range : ");
    scanf("%d",&start);
    printf("\n\n\tEnter the value of Ending range : ");
    scanf("%d",&end);

    if (start<1)
        start=1;

    printf("\n\n\tThe Palindrome numbers within the range is\n\t");
    for (i=start;i<=end;i++)
    {
        temp=i;
        rev=0;
        while(temp>0 && i>10)
        {
            digit=temp%10;
            rev=(rev*10)+digit;
            temp=temp/10;
        }
        if(rev==i && i>10)
        {
            printf(" %d,",i);
            count++;
        }

    }
    printf("\n\n\tThe number of Palindrome number in the range is : %d",count);
    getch();
}

