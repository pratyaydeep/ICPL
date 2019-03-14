//C program for determining whether a number is Palindrome or not
#include<stdio.h>
#include<conio.h>

void main()
{
    int num,i,rev=0,temp,digit;
    printf("\n\t\t----PROGRAM TO DETERMINE PALINDROME----");
    printf("\n\n\tEnter the number to check : ");
    scanf("%d",&num);
    temp=num;
    while(temp>0)
    {
        digit=temp%10;
        rev=(rev*10)+digit;
        temp=temp/10;
    }
    if(rev==num && num>9)
        printf("\n\n\tThe number is a Palindrome\n");
    else
        printf("\n\n\tThe number is Not a Palindrome\n");

    getch();
}
