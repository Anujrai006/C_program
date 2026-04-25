#include <stdio.h>
void main()
{
    int arr1[3][3]={{1,2,3,4,5},
                   {2,3,4,5,6},
                   {5,6,7,8,9}};
    int arr2[3][3]={{1,2,3,4,5},
                   {2,3,4,5,6},
                   {5,6,7,8,9}};
    int sum[3][3];
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=4;j++)
        {
            sum[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=4;j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }


}