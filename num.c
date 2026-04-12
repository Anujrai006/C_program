#include <stdio.h>
void main()
{
    int a,b;
    printf("Enter number 1:");
    scanf("%d",&a);
    printf("Enter number 2:");
    scanf("%d",&b);
    if(a>b)
    {
        printf("%d is greater",a);
        printf("\n");
    }
    else if(b>a)
    {
        printf("%d is greater",b);
        printf("\n");
    }
    else{
        printf("Both are equal");
        printf("\n");
    }
    if(a>0)
    {
        printf("%d is positive",a);
        printf("\n");
    }
    else{
        printf("%d is negative",a);
        printf("\n");
    }
    if(b>0)
    {
        printf("%d is positive",b);
        printf("\n");
    }
    else{
        printf("%d is negative",b);
        printf("\n");
    }
    if(a%2==0 && a>0)
    {
        printf("%d is even",a);
        printf("\n");
    }
    else if(a%2 != 0 && a>0)
    {
        printf("%d is odd",b);
        printf("\n");
    }
    else{
        printf("%d is imaginary no",a);
        printf("\n")
    }
    if(b%2==0 && b>0)
    {
        printf("%d is even",b);
        printf("\n");
    }
    else if(b%2 != 0 && b>0)
    {
        printf("%d is odd",b);
        printf("\n");
    }
    else{
        printf("%d is imaginary no",b);
    }

}
