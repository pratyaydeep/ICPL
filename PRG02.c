

// Program in C to Make a Simple Calculator

#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,add,subs,mult;
    float di;

    printf("\n-----** SIMPLE CALCULATOR **-----\n\n");

    printf("\nEnter the 1st number(A): ");
    scanf("%d",&a);

    printf("\nEnter the 2nd number(B): ");
    scanf("%d",&b);

    add=a+b;
    subs=a-b;
    mult=a*b;
    di=(float) a/b;

    printf("\n\nA added with B gives %d\n",add);

    printf("\nB substracted from A gives %d\n",subs);

    printf("\nA multiplied with B gives %d\n",mult);

    printf("\nA divided by B gives %f\n\n",di);

    getch();

}
