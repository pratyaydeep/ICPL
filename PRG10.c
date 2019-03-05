//Program to find roots of a quadratic equation

#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    float a,b,c,d,r1,r2,real,img;

    printf("\n-----** C PROGRAM TO FIND ROOTS OF QUADRATIC EQUATION **-----\n\n");

    printf("\nEnter the cofactor of X square :  ");
    scanf("%f",&a);

    printf("\nEnter the cofactor of X :  ");
    scanf("%f",&b);

    printf("\nEnter the constant term :  ");
    scanf("%f",&c);

    d=((b*b)-(4*a*c));

    if (d==0)
    {
        r1=-(b/(2*a));
        r2=r1;
        printf("\n\nRoots are equal\n");
        printf("\nRoot 1: %.2f\n",r1);
        printf("\nRoot 2: %.2f\n",r2);
    }

    else if (d>0)
    {
        r1=((-b + sqrt(d))/(2*a));
        r2=((-b - sqrt(d))/(2*a));
        printf("\n\nRoots are real\n");
        printf("\nRoot 1: %.2f\n",r1);
        printf("\nRoot 2: %.2f\n",r2);
    }

    else
    {
        real=(-b)/(2*a);
        img=sqrt(abs(d))/(2*a);
        printf("\n\nRoots are imaginary\n");
        printf("\nRoot 1: %.2f + i %.2f\n",real,img);
        printf("\nRoot 1: %.2f - i %.2f\n",real,img);

    }

    getch();

}


