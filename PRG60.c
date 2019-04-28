// Program to Read from a file and copy to another file
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    FILE *fp,*ft;
    int noc=0,nol=0,not=0,nob=0;
    char ch;
    fp=fopen("xyz.txt","r");
    ft=fopen("abc.txt","w");
    if (fp==NULL)
    {
        puts("\n\n\tCannot open file");
        exit(0);
    }
    while(1)
    {
        ch=fgetc(fp);
        if (ch==EOF)
            break;
        fputc(ch,ft);

    }
    printf("\n\tFile copy Successfull");
    fclose(fp);
    fclose(ft);
}
