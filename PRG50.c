//Program to calculate Area of Figures using Function
#include<stdio.h>
#include<stdlib.h>
#define PI 3.142
void main()
{
    int option , radii,len,bred,base,high;
    float Atriangle(int,int);
    float Arectangle (int,int);
    float Acircle (int);

    printf("\n\t\t::FINDING AREA OF FIGURES:: ");
    while(1)
    {
        printf("\n(1) TRIANGLE \n(2) RECTANGLE \n(3) CIRCLE \n(4) EXIT \n");
        printf("\nEnter Your Choice: ");
        scanf("%d",&option);
        switch(option)
        {
        case 1:
            printf("\n\t\tAREA OF TRIANGLE");
            printf("\n\nEnter the base of triangle: ");
            scanf("%d",&base);
            printf("\nEnter the height of triangle: ");
            scanf("%d",&high);
            printf("\n\nRESULTANT Area: %.0f\n\n",Atriangle(base,high));
            break;
        case 2:
            printf("\n\t\tAREA OF RECTANGLE");
            printf("\n\nEnter the length: ");
            scanf("%d",&len);
            printf("\nEnter the breadth: ");
            scanf("%d",&bred);
            printf("\n\nRESULTANT AREA: %.3f\n\n",Arectangle(len,bred));
            break;
        case 3:
            printf("\n\t\tAREA OF CIRCLE");
            printf("\n\nEnter the radius of circle: ");
            scanf("%d",&radii);
            printf("\n\nRESULTANT AREA: %.3f\n\n",Acircle(radii));
            break;
        case 4:
            exit(0);
            break;
        default:printf("\nYOUR CHOICE IS WRONNG!!!\n");
        }
    }
}
float Atriangle (int b , int h)
{
    return ((float)1/2*b*h);
}
float Arectangle (int l, int b)
{
    return ((float)l*b);
}
float Acircle (int r)
{
    return ((float)PI*r*r);
}
