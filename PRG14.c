//Program to print reverse of a number
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,rev=0;

    printf("\n\t\tPROGRAM TO PRINT REVERSE OF A NUMBER\n");

    printf("\n\n\tEnter the number : ");
    scanf("%d",&n);

    while(n)
    {
        rev= (rev*10) + (n%10) ;
        n=n/10;

    }

    printf("\n\n\tThe reversed number is %d\n",rev);
    getch();

}
