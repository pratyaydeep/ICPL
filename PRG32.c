#include<stdio.h>
#include<conio.h>
void main()
{
  int i=0,temp,num,a[20],len=0;
  printf("\n\t\t::REVERSE OF A NUMBER (USING ARRAY)::");
  printf("\n\n\tEnter a number: ");
  scanf("%d",&num);
  temp=num;
  while(temp>0)
  {
      len++;
      a[i]=temp%10;
      temp=temp/10;
      i++;
  }
  printf("\n\n\tThe digits of the number are: \n\t\t");
  for(i=len-1;i>=0;i--)
          printf("%d  ",a[i]);
  printf("\n\n\tThe reverse of the number is : ");
  for(i=0;i<len;i++)
    printf("%d",a[i]);
  printf("\n");
  getch();
}

