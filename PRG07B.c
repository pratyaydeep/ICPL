// Program in C to find the Largest of Three Numbers
// Using conditional operator

#include<stdio.h>
#include<conio.h>
void main()
{
    int n1,n2,n3;

    printf("\n-----** LARGEST AMONG THREE NUMBERS (USING CONDITIONAL OPERATOR) **-----\n\n");

    printf("\nEnter the first number: ");
    scanf("%d",&n1);

    printf("\nEnter the second number: ");
    scanf("%d",&n2);

    printf("\nEnter the third number: ");
    scanf("%d",&n3);

    if(n1>n2 && n1>n3)
        printf("\n\n%d is Largest\n\n",n1);

    else if(n2>n1 && n2>n3)
        printf("\n\n%d is Largest\n\n",n2);

    else
        printf("\n\n%d is Largest\n\n",n3);


    getch();

}
