// Program to print	S=1 + 2 + 3 + 4 + 5 + . . .
#include<stdio.h>
void main()
{
    int length;
    void series(int);
    printf("\n\t\t::PROGRAM TO PRINT SERIES SUM");
    printf("\n\tEnter number of terms : ");
    scanf("%d",&length);
    series(length);
}
void series(int l)
{
    int sum=0;
    printf("\n\tThe series is : S =");
    for (int i=1;i<=l;i++)
    {
        printf(" + %d",i);
        sum+=i;
    }
    printf("\n\tThe sum is : %d",sum);
}
