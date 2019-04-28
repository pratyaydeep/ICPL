//Program for Use of Union
#include<stdio.h>
void main()
{
    union book
    {
        char name[10];
        int pages;
        float price;

    }b;

    printf("\n\tEnter the Name of book : ");
    scanf("%s",&b.name);
    printf("\n\tName of the book is : %s",b.name);

    printf("\n\tEnter the number of Pages of the  book : ");
    scanf("%d",&b.pages);
    printf("\n\tName of the book is : %d",b.pages);

    printf("\n\tEnter the Price of book : ");
    scanf("%f",&b.price);
    printf("\n\tName of the book is : %f",b.price);
}
