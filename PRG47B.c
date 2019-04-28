// Finding Factoral of a number using recursion and function
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
    if(n==1)
        return 1;
    else
        return n*fact(n-1);
}
