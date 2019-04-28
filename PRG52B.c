//Swapping of two numbers using call by reference
#include<stdio.h>
void swap(int*,int*);
void main()
{
  printf("\t\n--**Swapping of two numbers using call by reference**--");
  int a,b;
  printf("\n\nEnter first number : ");
  scanf("%d",&a);
  printf("\nEnter second number : ");
  scanf("%d",&b);
  printf("\nValue of A and B before swapping are %d and %d\n",a,b);
  swap(&a,&b);
  printf("\nValue of A and B after swapping inside main function are %d and %d\n",a,b);
}
void swap(int *x,int *y)
{
    int z;
    z=*x;
    *x=*y;
    *y=z;
    printf("\n\nValue of A and B after swapping inside user defined function are %d and %d",*x,*y);
}
