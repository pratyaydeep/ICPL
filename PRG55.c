
//Program to find if a string is palindrome or not
#include<stdio.h>
#include<string.h>
void main()
{
    char s[50],copy[50];
    printf("\n\t\t----PROGRAM TO CHECK PALINDROME----");
    printf("\n\n\tEnter the string: ");
    gets(s);
    strcpy(copy,s);
    strrev(s);
    if (!(strcmp(s,copy)))
        printf("\n\tThe string is a Palindrome");
    else
        printf("\n\tThe string is a Not a Palindrome");
}
