//Program to print a Series and it's sum
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int i,n;
    float sum=1;

    printf("\n\t\t:: SUM OF SERIES ::\n");
    printf("\n\n\tS=1 + 1/3 + 1/9 + 1/27 + 1/81 + 1/243 + . . . . . Up to Nth Term\n\n");

    printf("\n\n\tEnter the number (N) : ");
    scanf("%d",&n);


    printf("\n\n\tThe series is :\n\n\t");

    printf("\n\t\t 1");
    for (i=1;i<n;i++)
    {
        printf(" + 1/%.f",pow(3,i));
        sum+=1/pow(3,i);

    }

    printf("\n\n\tThe sum of the series is is %f\n",sum);

    getch();

}

