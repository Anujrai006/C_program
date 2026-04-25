#include <stdio.h>
void main()
{
    int arr[10];
    int sum=0;
    printf("Enter numbers:\n");
    for (int i=0;i<=9;i++)
    {
        scanf("%d",&arr[i]);

    }
    for (int i=0;i<=9;i++)
    {
        sum+=arr[i];

    }
    printf(" The total sum of arrays :%d",sum);
}