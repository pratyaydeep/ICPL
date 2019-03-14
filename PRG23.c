// Program for determining how many Perfect numbers exist within a given range

#include<stdio.h>
#include<conio.h>
void main()
{
    int start,end,j,i,count=0,sum=0;
    printf("\n\t\t----PROGRAM TO DETERMINE PERFECT NUMBERS IN A GIVEN RANGE----");
    printf("\n\n\tEnter the value of Starting range : ");
    scanf("%d",&start);
    printf("\n\n\tEnter the value of Ending range : ");
    scanf("%d",&end);

    if (start<1)
        start=1;

    printf("\n\n\tThe Perfect numbers within the range is is\n\t");
    for (i=start;i<=end;i++)
    {
        sum=0;
        for (j=1;j<i;j++)
        {
            if(i%j==0)
                sum+=j;
        }
        if(sum==i)
        {
            printf(" %d,",i);
            count++;
        }


    }
    printf("\n\n\tThe number of perfect number in the range is : %d",count);
    getch();
}

