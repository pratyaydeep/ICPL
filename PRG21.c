//Program in C o find & Print the Sum of all the Numbers Divisible by 7 within a given Range
#include<stdio.h>
#include<conio.h>

void main()
{
    int start,end,i,sum=0;
    printf("\n\t\t----PROGRAM TO PRINT SUM OF NUMBERS DIVISIBLE BY 7 ----");
    printf("\n\n\tEnter the value of Starting range : ");
    scanf("%d",&start);
    printf("\n\n\tEnter the value of Ending range : ");
    scanf("%d",&end);
    printf("\n\n\tThe series is\n");
    printf("\n\t\tS = ");
    for (i=start;i<=end;i++)
    {
        if (i%7==0)
        {
            printf("+%d ",i);
            sum+=i;
        }
    }
    printf("\n\n\tThe sum of the series is : %d",sum);
    getch();
}
