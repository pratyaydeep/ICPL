// Program in C to convert Temperature from Celsius to Fahrenheit

#include<stdio.h>
#include<conio.h>
void main()
{
    float temp;
    float conv_temp;

    printf("\n-----** CONVERTING CELSIUS TO FAHRENHEIT **-----\n\n");

    printf("\nEnter the Temperature in Celsius: ");
    scanf("%f",&temp);

    conv_temp=(((9*temp)/(5))+32);

    printf("\nThe temperature in Fahrenheit is %f\n\n",conv_temp);

    getch();

}


