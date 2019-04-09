#include<stdio.h>
#include<stdlib.h>
void main()
{
    char ch;
    int n1,n2,c;
    float d;

    printf("\n\t\t::MENU DRIVEN CALCULATOR:: ");
    while(1)
    {

    printf("\n\n(a) Addition \n(b) Subtraction \n(c) Multiplication \n(d) Division \n(e) Modulus ");
    printf("\nAny other key for exit");
    printf("\n\nEnter Your Choice: ");
    fflush(stdin);
    scanf("%c",&ch);

        switch(ch)
        {
        case 'a':
            printf("\n\t\tADDITION");
            printf("\n\nEnter 1st number: ");
            scanf("%d",&n1);
            printf("\nEnter 2nd number: ");
            scanf("%d",&n2);
            c=n1+n2;
            printf("\n\nRESULT: %d",c);

        break;
        case 'b':
            printf("\n\t\tSUBTRACTION");
            printf("\n\nEnter 1st number: ");
            scanf("%d",&n1);
            printf("\nEnter 2nd number: ");
            scanf("%d",&n2);
            c=n1-n2;
            printf("\n\nRESULT: %d",c);

        break;
        case 'c':
            printf("\n\t\tMULTIPLICATION");
            printf("\n\nEnter 1st number: ");
            scanf("%d",&n1);
            printf("\nEnter 2nd number: ");
            scanf("%d",&n2);
            c=n1*n2;
            printf("\n\nRESULT: %d",c);

        break;
        case 'd':
            printf("\n\t\tDIVISION");
            printf("\n\nEnter 1st number: ");
            scanf("%d",&n1);
            printf("\nEnter 2nd number: ");
            scanf("%d",&n2);
            d=(float)n1/n2;
            printf("\n\nRESULT: %.4f",d);

        break;
        case 'e':
            printf("\n\t\tMODULUS");
            printf("\n\nEnter 1st number: ");
            scanf("%d",&n1);
            printf("\nEnter 2nd number: ");
            scanf("%d",&n2);
            c=n1%n2;
            printf("\n\nRESULT: %d",c);
        break;
        default:exit(0);
        }
    }
}
