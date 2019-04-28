
// Program to print	S=1 + 1/3 + 1/9 + 1/27 + . . .
#include<stdio.h>
#include<math.h>
void main()
{
    int length;
    void series(int);
    printf("\n\t\t::PROGRAM TO PRINT SERIES SUM::");
    printf("\n\tEnter number of terms : ");
    scanf("%d",&length);
    series(length);
}
void series(int l)
{
    float i,sum=0;
    printf("\n\tThe series is : S =");
    for (i=1;i<=l;i++)
    {
        printf(" + 1/%.f",pow(3,i-1));
        sum+=1/(pow(3,i-1));
    }
    printf("\n\tThe sum is : %.4f",sum);
}
