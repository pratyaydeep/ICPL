//Program for Use of Structures
#include<stdio.h>
void main()
{
    struct book
    {
        char name[10];
        int pages;
        float price;
    }b1,b2;

    printf("\n\tEnter the Name, Pages, Price of book 1: ");
    scanf("%s %d %f",&b1.name,&b1.pages,&b1.price);
    printf("\n\tEnter the Name, Pages, Price of book 2: ");
    scanf("%s %d %f",&b2.name,&b2.pages,&b2.price);

    printf("\n\n\tEntered Info of book 1");
    printf("\n\tName: %s, Pages: %d, Price: %f",b1.name,b1.pages,b1.price);
    printf("\n\n\tEntered Info of book 2");
    printf("\n\tName: %s, Pages: %d, Price: %f",b2.name,b2.pages,b2.price);
}
