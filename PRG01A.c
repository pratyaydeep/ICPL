// Swap the value of two variables
// Using a 3rd variable

#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;

    printf("\n-----** SWAPPING THE VALUE OF TWO VARIABLES (USING 3RD VARIABLE) **-----\n\n");

    printf("\nEnter the 1st number(A): ");
    scanf("%d",&a);

    printf("\nEnter the 2nd number(B): ");
    scanf("%d",&b);

    c=a;
    a=b;
    b=c;

    printf("\nAfter swapping A=%d & B=%d\n\n",a,b);

    getch();

}
