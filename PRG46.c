#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,row,col;
    printf("\n\t\t::PROGRAM TO FIND TRANSPOSE MATRIX::\n");
    printf("\nEnter the number of row : ");
    scanf("%d",&row);
    printf("\nEnter the number of column : ");
    scanf("%d",&col);
    int arr[row][col];
    int trans[col][row];

    printf("\nEnter elements of the MATRIX:\n");
    for (i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("\nEnter arr[%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }

    }


    for (i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
            trans[j][i]=arr[i][j];
    }


    printf("TRANSPOSE OF THE MATRIX:\n");
    for (i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
        {
            printf("%d ",trans[i][j]);
        }
        printf("\n");

    }
    getch();

}

