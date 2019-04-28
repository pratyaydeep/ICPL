// Program to print Fibonacci Series
#include<stdio.h>
void main()
{
    int n;
    void fib (int);
    printf("\n\t\tPROGRAM TO PRINT FIBONACCI SERIES UPTO N'th TERM\n");
    printf("\n\n\tEnter the value of N: ");
    scanf("%d",&n);

    printf("\n\n\tThe Fibonacci Series is \n\n");
    fib(n);
}
void fib(int n)
{
    int a=1,b=1,c,i;
    printf("\t%d %d",a,b);
    for (i=0;i<(n-2);i++)
    {
        c=a+b;
        printf(" %d",c);
        a=b;
        b=c;
    }
}
