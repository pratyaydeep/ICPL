//Program to find strlen, strcpy, strrev using inbuit function
#include<stdio.h>
#include<string.h>
void main()
{
    char s[50],copy[50];
    printf("\n\t\t----FINDING strlen, strcpy, strrev----");
    printf("\n\n\tEnter the string: ");
    gets(s);
    printf("\n\n\tThe length of the string is:  %d",strlen(s));
    strcpy(copy,s);
    printf("\n\n\tThe copy of the string is \n\t\t");
    puts(copy);
    strrev(s);
    printf("\n\n\tThe reverse of the string is\n\t\t ");
    puts(s);
}
