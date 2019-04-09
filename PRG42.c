#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,row,col;
    printf("\n\t\t::PROGRAM TO SHOW MATRIX::\n");
    printf("\nEnter the number of row : ");
    scanf("%d",&row);
    printf("\nEnter the number of column : ");
    scanf("%d",&col);
    int arr[row][col];

    printf("\nEnter elements of the MATRIX:\n");
    for (i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("\nEnter arr[%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }

    }
    printf("\nRESULTANT MATRIX:\n");
    for (i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");

    }
    getch();

}
