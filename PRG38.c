
#include<stdio.h>
void main()
{
    int i,len,max,min;
    printf("\n\t\t::PROGRAM TO FIND MAXIMUM AND MINIMUM NUMBERS IN AN ARRAY::\n");
    printf("\nEnter length of ARRAY : ");
    scanf("%d",&len);
    int arr[len];

    printf("\nEnter elements of the ARRAY:\n");
    for (i=0;i<len;i++)
    {
        printf("\nEnter arr[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    max=arr[0];min=arr[0];
    for (i=0;i<len;i++)
    {
        if (arr[i]<min)
            min=arr[i];
        if (arr[i]>max)
            max=arr[i];
    }

    printf("\n\tMaximum Number in the Array is : %d",max);
    printf("\n\tMinimum Number in the Array is : %d",min);

    printf("\n");
}
