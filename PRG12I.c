// Program to find the series expansion of COS(x)

#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    float k=0,fact,x,n,sum=0;
    int i,j;
    printf("\n\t\t----PROGRAM TO FIND EXPANSION OF cos(x) UPTO Nth Term----");
    printf("\n\t\tEnter the value of x in radian : ");
    scanf("%f",&x);
    printf("\n\t\tEnter the value of N : ");
    scanf("%f",&n);

    printf("\n\t\tThe Expansion is \n\t\t cos(%.1f) = ",x);

    for (i=1;i<=n;i++)
    {
        fact=1;
        for (j=1;j<=k;j++)
        {
            fact=fact*j;
        }

        if (i%2==1)
        {
            printf(" + %.f/%.f! ",(pow(x,k)),k);
            sum+=(pow(x,k)/fact);
            k+=2;

        }
        else
        {
            printf(" - %.f/%.f! ",pow(x,k),k);
            sum-=(pow(x,k)/fact);
            k+=2;
        }
    }

    printf("\n\n\t\tThe value is : %.4f",sum);
    getch();


}
