#include <stdio.h>
void main()
{
    int arr[3][3];
    int arr1[3][3];
    int sum[3][3];
    printf("For array1\n");
    for(int a=0;a<3;a++)
    {
        for(int b=0;b<3;b++)
        {
            printf("Enter the the no for %d row %d column\n",a+1,b+1);
            scanf("%d",&arr[a][b]);
        }
    }
    printf("For array2\n");
   for(int a=0;a<3;a++)
    {
        for(int b=0;b<3;b++)
        {
            printf("Enter the the no for %d row %d column\n",a+1,b+1);
            scanf("%d",&arr1[a][b]);
        }
    }
    for(int a=0;a<3;a++)
    {
        for(int b=0;b<3;b++)
        {
            sum[a][b]=arr[a][b]=arr1[a][b];
        }
    }
    for(int a=0;a<3;a++)
    {
        for(int b=0;b<3;b++)
        {
            printf("%d ",sum[a][b]);
        }
        printf("\n");
    }

    
}
