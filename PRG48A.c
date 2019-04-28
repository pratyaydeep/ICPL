// Finding GCD and LCM of two numbers using iteration and function
#include<stdio.h>
void main()
{
    int GCD(int,int);
    int num1,num2;
    printf("\n\t\t::Finding GCD and LCM of two numbers::");
    printf("\n\tEnter first number: ");
    scanf("%d",&num1);
    printf("\n\tEnter first number: ");
    scanf("%d",&num2);
    printf("\n\tGCD of the given numbers is %d",GCD(num1,num2));
    printf("\n\tLCM of the given numbers is %d",(num1*num2)/GCD(num1,num2));

}
int GCD(int n1, int n2)
{
   while(n1!=n2)
   {
       if (n1>n2)
        n1=n1-n2;
       else
        n2=n2-n1;
   }
   return n1;
}

