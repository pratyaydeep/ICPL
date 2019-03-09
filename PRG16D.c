// Program to print pattern
#include<stdio.h>
#include<conio.h>

void main()
{
    int row,i,j,k=1;
    printf("\n\t\t----PROGRAM TO GENERATE PATTERN----");
    printf("\n\n\tEnter the height of the pattern : ");
    scanf("%d",&row);
    printf("\n\n\tGenerated Pattern :\n\n");
    for (i=1;i<=row;i++)
    {
        printf("\n\t\t");
        for(j=1;j<=i;j++)
        {
            printf("%d  ",k);
            k++;
        }

    }

    getch();
}

