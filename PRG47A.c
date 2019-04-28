// Finding Factoral of a number using iteration and function
#include<stdio.h>
void main()
{
    int fact(int);
    int num;
    printf("\n\t\t::FACTORIAL FINDING::");
    printf("\n\tEnter number whose factorial is to be found : ");
    scanf("%d",&num);
    printf("\n\tFactorial of the given number is %d",fact(num));
}
int fact(int n)
{
    int f=1,i;
    for (i=1;i<=n;i++)
        f=f*i;
    return f;
}
