// This is the confusing method to do operation so next day i will use integer input
#include <stdio.h>
int main()
{
    char choice;
    int num1,num2;
    printf("Enter any two numbers");
    scanf("%d %d",&num1,&num2);
    printf("Enter Operation -,/,+,* :");
    scanf(" %c",&choice);
    switch(choice)
    {
        case '*':
         printf(" Result :%d",num1*num2);
         break;
        case '-':
         printf(" Result :%d",num1-num2);
         break;
        case '/':
         printf(" Result :%d",num1/num2);
         break;
        case '+':
         printf(" Result :%d",num1+num2);
         break;
        default:
         printf("wrong choice");
        

    }
    return 0;


    
    
}