//Program to find strlen, strcpy, strrev using inbuit function

#include<stdio.h>
#include<string.h>
int Xstrlen(char *p)
{
    int count=0;
    while(*p!='\0')
    {
        count++;
        p++;

    }
    return count;
}

void Xstrcpy (char *t, char *s)
{
    while(*s!='\0')
    {
        *t=*s;
        s++;
        t++;
    }
    *t='\0';
}

void Xstrrev(char *s)
{
    int len,c;
    char *begin, *end;
    char ch;
    len=Xstrlen(s);
    begin=s;
    end=s+len-1;
    for (c=0;c<len/2;c++)
    {
        ch=*begin;
        *begin=*end;
        *end=ch;
        begin++;
        end--;
    }
}
void main()
{
    char s[50],copy[50];
    printf("\n\t\t----FINDING strlen, strcpy, strrev----");
    printf("\n\n\tEnter the string: ");
    gets(s);

    printf("\n\n\tThe length of the string is:  %d",Xstrlen(s));

    Xstrcpy(copy,s);
    printf("\n\n\tThe copy of the string is \n\t\t");
    puts(copy);

    Xstrrev(s);
    printf("\n\n\tThe reverse of the string is\n\t\t ");
    puts(s);


}
