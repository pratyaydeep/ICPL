// Program of array of structure
#include<stdio.h>
void main()
{
    struct book
    {
        char name[10];
        int pages;
        float price;
    };
    struct book b[3];int i;
    for (i=0;i<3;i++)
    {
        printf("\n\tEnter the Name, Pages, Price of book %d: ",i+1);
        scanf("%s %d %f",&b[i].name,&b[i].pages,&b[i].price);
    }
    for (i=0;i<3;i++)
    {
        printf("\n\n\tEntered Info of book %d",i+1);
        printf("\n\tName: %s, Pages: %d, Price: %f",b[i].name,b[i].pages,b[i].price);
    }

}
