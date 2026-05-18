#include <stdio.h>
void main()
{
    int num;
    printf("Enter Any number:");
    scanf("%d",&num);
    if(num%num==0 && num%1==num)
    {
        printf("%d is prime number",num);
    }
    else if(num ==0)
    {
        printf("The number is 0");
    }
    else{
        printf("%d is non prime number",num);
    }
}