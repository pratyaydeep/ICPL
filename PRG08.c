// C Program to find Grade of Students

#include<stdio.h>
#include<conio.h>
void main()
{
    int m1,m2,m3,m4,m5;
    float avg;

    printf("\n-----** C PROGRAM TO FIND GRADE OF STUDENTS **-----\n\n");

    printf("\nEnter the Marks of First subject: ");
    scanf("%d",&m1);

    printf("\nEnter the Marks of Second subject: ");
    scanf("%d",&m2);

    printf("\nEnter the Marks of Third subject: ");
    scanf("%d",&m3);

    printf("\nEnter the Marks of Fourth subject: ");
    scanf("%d",&m4);

    printf("\nEnter the Marks of Fifth subject: ");
    scanf("%d",&m5);

    avg=(m1+m2+m3+m4+m5)/5;

    if (avg<=100 && avg>=90)
        printf("\n\nGrade is O\n\n");

    else if (avg<=89 && avg>=80)
        printf("\n\nGrade is E\n\n");

    else if (avg<=79 && avg>=70)
        printf("\n\nGrade is A\n\n");

    else if (avg<=69 && avg>=60)
        printf("\n\nGrade is B\n\n");

    else if (avg<=59 && avg>=50)
        printf("\n\nGrade is C\n\n");

    else if (avg<=49 && avg>=40)
        printf("\n\nGrade is D\n\n");

    else
        printf("\n\nThe student is FAIL\n\n");

    getch();

}
