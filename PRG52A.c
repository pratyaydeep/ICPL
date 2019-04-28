// Swapping of two numbers using call by value
#include<stdio.h>
void main()
{
    void swap(int,int);
    int num1,num2;
    printf("\n\t\t::Swapping of two numbers::");
    printf("\n\tEnter first number: ");
    scanf("%d",&num1);
    printf("\n\tEnter first number: ");
    scanf("%d",&num2);
    printf("\n\n\tBefore swapping values are : %d %d",num1,num2);
    swap(num1,num2);
}
void swap (int a,int b)
{
    int c;
    c=a;
    a=b;
    b=c;
    printf("\n\n\tAfter swapping values are : %d %d",a,b);
}
