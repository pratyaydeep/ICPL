#include<stdio.h>
void main()
{
  printf("\n\t\t:PROGRAM TO FIND SUM OF DIGITYS OF A NUMBER\n");
  int i=0,temp,num,a[100],len=0,sum=0;
  printf("\nEnter a number: ");
  scanf("%d",&num);
  temp=num;
  while(temp>0)
  {
      len++;
      a[i]=temp%10;
      temp=temp/10;
      i++;
  }
  printf("\n\nThe series of sum is: ");
  for(i=len-1;i>=0;i--)
  {
      if(i==len-1)
        printf("%d",a[i]);
      else
        printf(" + %d",a[i]);
      sum=sum+a[i];
  }
  printf("\n\nThe sum of the digits of number is = %d.\n\n",sum);
  }

