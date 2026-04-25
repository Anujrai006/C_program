#include <stdio.h>
void main()
{
    int arr[4][3];
    for(int i=0;i<=3;i++)
    {
        printf("For row %d\n",i+1);
        for(int j=0;j<=2;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Arrays :\n");
    for(int i=0;i<=3;i++)1
    {
        for (int j=0;j<=2;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}