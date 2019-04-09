#include<stdio.h>
#include<conio.h>
void main()
{
    int i,flag=0,index,num,len;
    printf("\n\t\t::PROGRAM TO SEARCH A NUMBER IN AN ARRAY::\n");
    printf("\nEnter length of ARRAY : ");
    scanf("%d",&len);
    int arr[len];

    printf("\nEnter elements of the ARRAY:\n");
    for (i=0;i<len;i++)
    {
        printf("\nEnter arr[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    printf("\n\tEnter number to search: ");
    scanf("%d",&num);
    for (i=0;i<len;i++)
    {
        if (arr[i]==num)
        {
            flag=1;
            index=i;
            break;
        }
    }
    if(flag)
        printf("\n\tThe element %d is present in index %d of the array",num,index);
    else
        printf("\n\tThe number %d is not present in the array",num);
    getch();
}
