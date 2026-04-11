#include <stdio.h>
void main()
{
    int marks;
    printf("Enter marks for std:");
    scanf("%d",&marks);
    if(marks<=100 && marks>=90)
    {
        printf(" Congratulation!  Your grade is A+ ");
    }
    else if(marks<90 && marks>=80)
    {
        printf(" Congratulation!  Your grade is A ");
    }
    else if(marks<80 && marks>=70)
    {
        printf(" Congratulation!  Your grade is B+ ");
    }
    else if(marks<70 && marks>=60)
    {
        printf(" Congratulation!  Your grade is B ");
    }
    else if(marks<60 && marks>=50)
    {
        printf(" Congratulation!  Your grade is C+ ");
    }
    else
    {
        printf("Sorry you failed");
    }
}