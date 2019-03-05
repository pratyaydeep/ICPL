// Program in C to Make a Salary Calculator

#include<stdio.h>
#include<conio.h>
void main()
{
    int basic;
    float da,hra,tp;

    printf("\n-----** SALARY CALCULATOR **-----\n\n");

    printf("\nEnter the Basic Salary: ");
    scanf("%d",&basic);

    da=(float)(0.50*basic);
    hra=(float)(0.15*basic);
    tp=basic+da+hra;

    printf("\nDA is %f\n\n",da);

    printf("\nHRA is %f\n\n",hra);

    printf("\nTotal Pay is %f\n\n",tp);

    getch();

}
