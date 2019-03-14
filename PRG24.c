//Program to determine Armstrong Number
//e.g. 153 is an Armstrong number because 1^3 + 5^3 + 3^3 = 153
#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
    int num,i,sum=0,temp,digit,power=0;
    printf("\n\t\t----PROGRAM TO DETERMINE ARMSTRONG NUMBER----");
    printf("\n\n\tEnter the number to check : ");
    scanf("%d",&num);
    temp=num;
    while(temp)
    {
        power++;
        temp=temp/10;
    }
    temp=num;
    while(temp>0 && power>2)
    {
        digit=temp%10;
        sum+=(int)pow(digit,power);
        temp=temp/10;
    }
    if(sum==num && power>2)
        printf("\n\n\tThe number is an Armstrong Number\n");
    else
        printf("\n\n\tThe number is Not an Armstrong Number\n");

    getch();
}
