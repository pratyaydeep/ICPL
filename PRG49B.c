
// Program to print	(b)	S=1 + 1/4 + 1/9 + 1/16 + 1/25 . . .
#include<stdio.h>
void series(int l)
{
    float i,sum=0;
    printf("\n\tThe series is : S =");
    for (i=1;i<=l;i++)
    {
        printf(" + 1/%.f",i*i);
        sum+=1/(i*i);
    }
    printf("\n\tThe sum is : %.4f",sum);
}
void main()
{
    int length;
    printf("\n\t\t::PROGRAM TO PRINT SERIES SUM::");
    printf("\n\tEnter number of terms : ");
    scanf("%d",&length);
    series(length);
}

