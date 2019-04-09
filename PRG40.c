#include<stdio.h>
#include<string.h>
void main ()
{
    char ch[100];
    int i=0 ,count=0 ;
    printf("\n\n\t::PROGRAM TO CHECK NUMBER OF VOWELS IN A LINE\n");
    printf("\n\tEnter the string : ");
    gets(ch);
    while(ch[i]!='\0')
    {
        if (ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u' || ch[i]=='a' || ch[i]=='A' || ch[i]=='E' || ch[i]=='I' || ch[i]=='O' || ch[i]=='U' )
            count++;
        i++;

    }
    printf("\nThe number of vowels in the given string is : %d",count);
    getch();
}
