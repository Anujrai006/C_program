#include <stdio.h>
void main()
{
    int marks[5];
    int mark;
    int sum=0;
    
    for(int a=0;a<=4;a++)
    {
        printf("Enter marks for %d :",a+1);
        scanf("%d",&mark);
        marks[a]=mark;
    }
    for(int a=0;a<=4;a++)
    {
        printf(" Student %d %d \n",a+1,marks[a]);
        
    }
    for(int i=0;i<=4;i++)
    {
        sum+=marks[i];
    }
    printf("Sum: %d\n",sum);
    int max=marks[0];
    for(int i=0;i<=4;i++)
    {
        if(marks[i]>max)
        {
            max=marks[i];
        }
        
    }
    printf("Highest marks is %d",max);
}