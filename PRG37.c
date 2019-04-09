#include<stdio.h>
void main()
{
    int i,len;
    printf("\n\t\t::PROGRAM TO FIND EVEN AND ODD NUMBERS IN AN ARRAY::\n");
    printf("\nEnter length of ARRAY : ");
    scanf("%d",&len);
    int arr[len];

    printf("\nEnter elements of the ARRAY:\n");
    for (i=0;i<len;i++)
    {
        printf("\nEnter arr[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    printf("\n\n\tEven numbers in the array are:\n\n\t");
    for (i=0;i<len;i++)
    {
        if (!(arr[i]&1))
            printf("%d ",arr[i]);
    }
    printf("\n\n\tOdd numbers in the array are:\n\n\t");
    for (i=0;i<len;i++)
    {
        if (arr[i]&1)
            printf("%d ",arr[i]);
    }
    printf("\n");
}
