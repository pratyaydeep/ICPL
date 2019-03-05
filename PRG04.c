// Program in C to Find Area of a circle

#include<stdio.h>
#include<conio.h>
void main()
{
    int r;
    float area;

    printf("\n-----** FINDING AREA OF A CIRCLE **-----\n\n");

    printf("\nEnter the Radius of the circle: ");
    scanf("%d",&r);

    area=(float)(3.142*r*r);

    printf("\nArea of the circle is %f sq units\n\n",area);

    getch();

}
