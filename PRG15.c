//Program to print sum of digits of a number
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,sum=0;

    printf("\n\t\tPROGRAM TO PRINT SUM OF DIGITS OF A NUMBER\n");

    printf("\n\n\tEnter the number : ");
    scanf("%d",&n);

    while(n)
    {
        sum += (n%10) ;
        n=n/10;
    }

    printf("\n\n\tThe sum of digits of the number is %d\n",sum);
    getch();

}
