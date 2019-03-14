//Program for determining how many Armstrong numbers exist within a given range.

#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int start,end,i,count=0,sum=0,temp,power,digit;
    printf("\n\t\t----PROGRAM TO DETERMINE ARMSTRONG NUMBERS IN A GIVEN RANGE----");
    printf("\n\n\tEnter the value of Starting range : ");
    scanf("%d",&start);
    printf("\n\n\tEnter the value of Ending range : ");
    scanf("%d",&end);

    if (start<1)
        start=1;

    printf("\n\n\tThe Armstrong numbers within the range is\n\t");
    for (i=start;i<=end;i++)
    {
        power=0;
        temp=i;
        while(temp)
        {
            power++;
            temp=temp/10;
        }
        temp=i;
        sum=0;
        while(temp>0 && power>2)
        {
            digit=temp%10;
            sum+=(int)pow(digit,power);
            temp=temp/10;
        }
        if(sum==i && power>2)
        {
            printf(" %d,",i);
            count++;
        }

    }
    printf("\n\n\tThe number of Armstrong number is : %d",count);
    getch();
}

