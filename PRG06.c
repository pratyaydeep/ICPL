// C Program to find whether a number is EVEN or ODD

#include<stdio.h>
#include<conio.h>
void main()
{
    int num;

    printf("\n-----** C PROGRAM TO FIND WHETHER A NUMBER IS EVEN OR ODD **-----\n\n");

    printf("\nEnter any number: ");
    scanf("%d",&num);

    if(num%2==0)
    {
        printf("\n\nThe number %d is EVEN\n\n",num);
    }
    else
    {
        printf("\n\nThe number %d is ODD\n\n",num);
    }

    getch();

}
