
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,row,col;
    printf("\n\t\t::PROGRAM TO FIND DIFFERENCE OF TWO MATRIX::\n");
    printf("\nEnter the number of row : ");
    scanf("%d",&row);
    printf("\nEnter the number of column : ");
    scanf("%d",&col);
    int arr1[row][col];
    int arr2[row][col];
    int arr3[row][col];

    printf("\nEnter elements of the 1ST MATRIX:\n");
    for (i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("\nEnter arr1[%d][%d]: ",i,j);
            scanf("%d",&arr1[i][j]);
        }

    }
    printf("\nEnter elements of the 2ND MATRIX:\n");
    for (i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("\nEnter arr2[%d][%d]: ",i,j);
            scanf("%d",&arr2[i][j]);
        }

    }
    //CALCULATION
    for (i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            arr3[i][j]=arr1[i][j] - arr2[i][j];
        }

    }
    printf("\nRESULTANT DIFFERENCE OF MATRIX:\n\n");
    for (i=0;i<row;i++)
    {
        printf("\t");
        for(j=0;j<col;j++)
        {
            printf("%d\t",arr3[i][j]);
        }
        printf("\n\n");

    }
    getch();

}
