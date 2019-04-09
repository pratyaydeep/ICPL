#include<stdio.h>
void main()
{
  printf("\n\n\t::FIBONACCI SERIES (USING ARRAY) \n");
  int i=0,temp,n,len=0;
  printf("\nEnter the number of terms : ");
  scanf("%d",&n);
  int a[n];
  a[0]=1;a[1]=1;
  for(i=2;i<n;i++)
  {
      a[i]=a[i-1]+a[i-2];
  }
  printf("\n\nFibonacci series up to %d terms : \n\n\t",n);
  for(i=0;i<n;i++)
      printf("%d ",a[i]);
  printf("\n");
  getch();
}


