
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k,p,q,r,temp;
    printf("\n\t\t::PROGRAM TO FIND MULTIPLICATION OF TWO MATRIX::\n");
    printf("\nFor 1st Matrix");
    printf("\nEnter number of row: ");
    scanf("%d",&p);
    printf("\nEnter number of column: ");
    scanf("%d",&q);
    int arr1[p][q];
    printf("\nEnter elements of the 1ST MATRIX:\n");
    for (i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("\nEnter arr1[%d][%d]: ",i,j);
            scanf("%d",&arr1[i][j]);
        }

    }
    printf("\nFor 2nd Matrix");
    printf("\nEnter number of row: ");
    scanf("%d",&temp);
    printf("\nEnter number of column: ");
    scanf("%d",&r);
    int arr2[temp][r];
    printf("\nEnter elements of the 1ST MATRIX:\n");
    for (i=0;i<temp;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("\nEnter arr1[%d][%d]: ",i,j);
            scanf("%d",&arr2[i][j]);
        }

    }
    if (temp!=q)
    {
        printf("\nMultiplication is not possible");
        return ;
    }
    int arr3[p][r];
    for(i=0;i<p;i++)
    {
        for(j=0;j<r;j++)
        {
            arr3[i][j]=0;
            for (k=0;k<q;k++)
            {
                arr3[i][j]=arr3[i][j]+arr1[i][k]*arr2[k][j];
            }
        }
    }
    printf("\nRESULTANT MULTIPLICATION OF MATRIX:\n\n");
    for (i=0;i<p;i++)
    {
        printf("\t");
        for(j=0;j<r;j++)
        {
            printf("%d\t",arr3[i][j]);
        }
        printf("\n\n");

    }
    getch();

}
