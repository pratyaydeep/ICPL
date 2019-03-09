// Program to print Pascal Triangle
#include<stdio.h>
void main()
{
    int i,j,n,count1,count2,count3,fact1,fact2,fact3,result;
    printf("\n\t\t----PASCALS TRIANGLE----");
    printf("\n\n\tEnter the number of rows : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<=n-i;j++)
            printf("  ");
        for(j=0;j<=i;j++)
        {

            fact1=1;
            fact2=1;
            fact3=1;

            for(count1=1;count1<=i;count1++)
                fact1=fact1*count1;
            for(count2=1;count2<=i-j;count2++)
                fact2=fact2*count2;
            for(count3=1;count3<=j;count3++)
                fact3=fact3*count3;

            result=fact1/(fact2*fact3);
            printf("%d   ",result);
        }
        printf("\n");
    }
}

