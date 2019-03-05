// Swap the value of two variables
// Without Using a 3rd variable

#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;

    printf("\n-----** SWAPPING THE VALUE OF TWO VARIABLES (WITHOUT USING 3RD VARIABLE) **-----\n\n");

    printf("\nEnter the 1st number(A): ");
    scanf("%d",&a);

    printf("\nEnter the 2nd number(B): ");
    scanf("%d",&b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("\nAfter swapping A=%d & B=%d\n\n",a,b);

    getch();

}
