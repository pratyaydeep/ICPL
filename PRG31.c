//Program to calculate Area of Figures

#include<stdio.h>
#include<stdlib.h>
#define PI 3.142
void main()
{
    int option , radii,len,bred,base,high;
    float area;

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
            area = (float)1/2*base*high;
            printf("\n\nRESULTANT Area: %.0f\n\n",area);

            break;
        case 2:
            printf("\n\t\tAREA OF RECTANGLE");
            printf("\n\nEnter the length: ");
            scanf("%d",&len);
            printf("\nEnter the breadth: ");
            scanf("%d",&bred);
            area=(float)len*bred;
            printf("\n\nRESULTANT AREA: %.3f\n\n",area);

            break;
        case 3:
            printf("\n\t\tAREA OF CIRCLE");
            printf("\n\nEnter the radius of circle: ");
            scanf("%d",&radii);
            area=(float)PI*radii*radii;
            printf("\n\nRESULTANT AREA: %.3f\n\n",area);

            break;
        case 4:
            exit(0);
            break;
        default:printf("\nYOUR CHOICE IS WRONNG!!!\n");
        }
    }
}
