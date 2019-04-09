#include<stdio.h>
#include<math.h>
void main()
{

  int i=0,temp,num,a[100],len=0,sum=0;
  printf("\n\n\t::DECIMAL TO BINARY CONVERSION (USING ARRAY) \n");
  printf("\nEnter a binary number: ");
  scanf("%d",&num);
  temp=num;
  while(temp>0)
  {
      len++;
      a[i]=temp%10*pow(2,i);
      temp=temp/10;
      i++;
  }
  for(i=len-1;i>=0;i--)
    sum=sum+a[i];
  printf("\n\nThe decimal of the given binary number %d is: %d \n",num,sum);
  }

