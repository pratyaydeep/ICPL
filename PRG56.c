// Program to search City
#include<stdio.h>
#include<string.h>
int citysearch(char [],char [][10],int);
void main()
{
    int i,n,res;
    char city[10];
    printf("\n\n\t----PROGRAM TO SEARCH CITY----");
    printf("\n\tEnter number of city :  ");
    scanf("%d",&n);
    char cities[n][10];
    for(i=0;i<n;i++)
    {
        printf("\n\tEnter the CITY: %d  ",i+1);
        fflush(stdin);
        gets(cities[i]);
    }
    printf("\n\tEnter the name of the city to search :  ");
    gets(city);
    res=citysearch(city,cities,n);
    if (res>=0)
        printf("\n\t\tThe city is CITY %d in the list",res+1);
        printf("\n\t\tThe city was not found");
}
int citysearch(char c[],char cs[][10],int num)
{
    int i;
    for(i=0;i<num;i++)
    {
        if(!(strcmp(c,&cs[i][0])))
            return i;
    }
    return -1;
}
