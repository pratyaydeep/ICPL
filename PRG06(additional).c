// C Program to find whether a number is EVEN or ODD
//Using Bitwise and

#include<stdio.h>
#include<conio.h>
void main()
{
    int num;

    printf("\n-----** NUMBER IS EVEN OR ODD(USING BITWISE AND) **-----\n\n");

    printf("\nEnter any number: ");
    scanf("%d",&num);

    if(num&1)
    {
        printf("\n\nThe number %d is ODD\n\n",num);
    }
    else
    {
        printf("\n\nThe number %d is EVEN\n\n",num);
    }

    getch();

}
