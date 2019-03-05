//Program in C to find the Factorial of a number

#include<stdio.h>
#include<conio.h>

void main()
{
    int i,fact,n;
    char c;
    printf("\n\t\t:: FACTORIAL OF A GIVEN NUMBER ::");
    do
    {
     do
     {
         printf("\n\n\tEnter the number (1-15): ");
         scanf("%d",&n);
         if (n<0)
         {
             printf("\n\n\tFactorial of negative number is not possible!!!\n");
         }
     } while (n>15 || n<0);

     fact=1;
     for (i=1;i<=n;i++)
        fact=fact*i;

    printf("\n\t\tFactorial of %d is %d",n,fact);
    printf("\n\n\tDo Again? Press Y for Yes & any key for No : ");
    fflush(stdin);
    scanf("%c",&c);

    } while(c=='Y' || c=='y');
    getch();
}
