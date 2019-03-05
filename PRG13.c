// Program to print Fibonacci Series

#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,i,n;
    a=1; b=1;

    printf("\n\t\tPROGRAM TO PRINT FIBONACCI SERIES UPTO N'th TERM\n");
    printf("\n\n\tEnter the value of N: ");
    scanf("%d",&n);

    printf("\n\n\tThe Fibonacci Series is \n\n");

    printf("\t%d %d",a,b);
    for (i=0;i<(n-2);i++)
    {
        c=a+b;
        printf(" %d",c);
        a=b;
        b=c;
    }
    printf("\n");

    getch();
}
