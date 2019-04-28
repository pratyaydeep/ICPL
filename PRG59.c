// Program to Read from a file
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    FILE *fp;
    int noc=0,nol=0,not=0,nob=0;
    char ch;
    fp=fopen("xyz.txt","r");
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
        noc++;
        if (ch=='\t')
        not++;
        if (ch=='\n')
            nol++;
        if (ch==' ')
            nob++;
    }
    printf("\n\tNo of Characters : %d",noc);
    printf("\n\tNo of Blank Spaces : %d",nob);
    printf("\n\tNo of Tabs : %d",not);
    printf("\n\tNo of Lines : %d",nol);
    fclose(fp);

}
