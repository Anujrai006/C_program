#include <stdio.h>
void main()
{
    int n;
    printf("Enter number of arrays :");
    scanf("%d",&n);
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];

    }
    printf("the total sum is %d",sum);
    
}