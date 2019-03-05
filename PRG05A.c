// Program in C to convert Temperature from Fahrenheit to Celsius

#include<stdio.h>
#include<conio.h>
void main()
{
    float temp,conv_temp;

    printf("\n-----** CONVERTING FAHRENHEIT TO CELSIUS **-----\n\n");

    printf("\nEnter the Temperature in Fahrenheit: ");
    scanf("%f",&temp);

    conv_temp=(((temp-32)*5)/9);

    printf("\nThe temperature in Celsius is %f\n\n",conv_temp);

    getch();

}


