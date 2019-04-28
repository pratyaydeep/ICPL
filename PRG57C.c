// Using call by value in Structures
#include<stdio.h>
struct book
{
    char name[10];
    int pages;
    float price;
};

void display(struct book s)
{
    printf("\n\tBook Info :\n");
    printf("\n\tName: %s, Pages: %d, Price: %f",s.name,s.pages,s.price);

}

void main()
{
    struct book b;
    printf("\n\tEnter the Name, Pages, Price of book : ");
    scanf("%s %d %f",&b.name,&b.pages,&b.price);
    display(b);
}
