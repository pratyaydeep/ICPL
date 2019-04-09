#include<stdio.h>
void main()
{
  printf("\n\n\t::DECIMAL TO BINARY CONVERSION (USING ARRAY) \n");
  int i=0,temp,num,a[100],len=0;
  printf("\nEnter a decimal number: ");
  scanf("%d",&num);
  temp=num;
  while(temp>0)
  {
      len++;
      a[i]=temp%2;
      temp=temp/2;
      i++;
  }
  printf("\n\nThe binary of the given decimal number %d is: ",num);
  for(i=len-1;i>=0;i--)
    printf("%d",a[i]);
  printf("\n");
}

