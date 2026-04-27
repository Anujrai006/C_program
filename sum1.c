#include <stdio.h>
void main()
{
    int arr1[2][2];
    int arr2[2][2];
    int sum[2][2];
    printf("For array1:\n");
    for(int i=0;i<=1;i++)
    {
        for(int j=0;j<=1;j++)
        {
            scanf("%d",&arr1[i][j]);
        
        }
      
    }
     printf("For array2:\n");
    for(int i=0;i<=1;i++)
    {
        for(int j=0;j<=1;j++)
        {
            scanf("%d",&arr2[i][j]);
        
        }

    }
    for(int i=0;i<=1;i++)
    {
        for(int j=0;j<=1;j++)
        {
           sum[i][j]=arr1[i][j]+arr2[i][j];
        }
    
    }
    for(int i=0;i<=1;i++)
    {
        for(int j=0;j<=1;j++)
        {
           printf("%d ",sum[i][j]);
        }
        printf("\n");
    }

}