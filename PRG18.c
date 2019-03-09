// Program to check whether a number is prime or not
#include<stdio.h>
#include<conio.h>

void main()
{
    int n,i,flag=0;
    printf("\n\t\t----PROGRAM TO CHECK PRIME OR NOT----");
    printf("\n\n\tEnter the number to check : ");
    scanf("%d",&n);

    for (i=2;i<n;i++)
    {
        if (n%i==0)
            flag=1;
    }

    if (flag==1)
        printf("\n\n\tThe number is  NOT PRIME");
    else
        printf("\n\n\tThe number is PRIME");
    getch();
}
