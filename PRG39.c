#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,flag,temp,len,max,min;
    printf("\n\t\t::PROGRAM TO SORT AN ARRAY::\n");
    printf("\nEnter length of ARRAY : ");
    scanf("%d",&len);
    int arr[len];

    printf("\nEnter elements of the ARRAY:\n");
    for (i=0;i<len;i++)
    {
        printf("\nEnter arr[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    for (i=0;i<len;i++)
    {
        for (j=0;j<len;j++)
        {
            if (arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=1;
            }

        }
    }
    printf("\n\n\tSorted Elements: \n\t");
    for (i=0;i<len;i++)
        printf("%d ",arr[i]);
    getch();
}
