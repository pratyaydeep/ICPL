//Program to add 5 to each element of an array
#include<stdio.h>
void add5toeach(int *x,int s)
{
    int i;
    for (i=0;i<s;i++)
        *(x+i)=*(x+i)+5;
}
void main()
{
    int i,size;
    printf("\n\t\t::Adding 5 to each element in an array::");
    printf("\n\n\tEnter the size of the array: ");
    scanf("%d",&size);
    int arr[size];
    printf("\n\tEnter the elements of the array : ");
    for (i=0;i<size;i++)
        scanf("%d",&arr[i]);
    add5toeach(arr,size);
    printf("\n\n\tThe array after adding 5 to each element is: \n\n\t\t");
    for (i=0;i<size;i++)
        printf(" %d",arr[i]);
}

