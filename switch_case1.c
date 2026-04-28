#include <stdio.h>
void main()
{
    int a,b;
    printf("enter 1st num:");
    scanf("%d",&a);
    printf("enter 2ndnum:");
    scanf("%d",&b);
    int choice;
    printf("1 for substraction,2 for addition 3 for multipication");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
          printf("substraction:%d",a-b);
          break;
        case 2:
          printf("sum:%d",a+b);
          break;
        case 3:
          printf("product is :%d",a*b);
          break;
        default:
         printf("wrong option");
    }
    
}