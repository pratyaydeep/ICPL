// Program to print Fibonacci Series
#include<stdio.h>
void main()
{
    int i,n;
    int fib (int);
    printf("\n\t\tPROGRAM TO PRINT FIBONACCI SERIES UPTO N'th TERM\n");
    printf("\n\n\tEnter the value of N: ");
    scanf("%d",&n);

    printf("\n\n\tThe Fibonacci Series is \n\n");
    for (i=1;i<=n;i++)
        printf(" %d",fib(i));
}
int fib(int n)
{
    if (n==1||n==2)
        return 1;
    else
        return (fib(n-1) + fib(n-2));
}
