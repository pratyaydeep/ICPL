// Program in C to find the Largest of Three Numbers
// Using ternary operator

#include<stdio.h>
#include<conio.h>
void main()
{
    int n1,n2,n3,larg;

    printf("\n-----** LARGEST AMONG THREE NUMBERS (USING TERNARY OPERATOR) **-----\n\n");

    printf("\nEnter the first number: ");
    scanf("%d",&n1);

    printf("\nEnter the second number: ");
    scanf("%d",&n2);

    printf("\nEnter the third number: ");
    scanf("%d",&n3);

    larg=(n1>n2)? ((n1>n3)?n1:n3):((n2>n3)?n2:n3);

    printf("\n\n%d is Largest\n\n",larg);

    getch();

}

