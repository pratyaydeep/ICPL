
//Program to print a Series and it's sum
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,sum=0;

    printf("\n\t\t:: SUM OF SERIES ::\n");
    printf("\n\n\tS=1 + 2 + 3 + 4 + . . . . . + N\n\n");

    printf("\n\n\tEnter the number (N) : ");
    scanf("%d",&n);


    printf("\n\n\tThe series is :\n\n\t");


    for (i=1;i<=n;i++)
    {
        printf(" + %d",i);
        sum+=i;
    }

    printf("\n\n\tThe sum of the series is is %d\n",sum);

    getch();

}
