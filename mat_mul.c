#include <stdio.h>
void main()
{
    int n;
    printf("enter no of elem:");
    scanf("%d",&n);
    int arr1[n],arr2[n],mul[n];
    printf("For Array1:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
        printf("%d ",arr1[i]);

    }
    printf("\n");
    printf("For Array2:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr2[i]);
        printf("%d ",arr2[i]);

    }
    for(int i=0;i<n;i++)
    {
       mul[i]=arr1[i]*arr2[i];

    }
    printf("\n");
    printf("Multiplication\n");
    for(int i=0;i<n;i++)
    {
       printf("%d ",mul[i]);

    }

}