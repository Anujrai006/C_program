#include <stdio.h>
void main()
{
    int arr[4][3];
    for(int i =0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("Enter no for row %d col %d:",i+1,j+1);
            scanf("%d",&arr[i][j]);

        }
    }
    for(int i =0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",arr[i][j]);
            

        }
        printf("\n");
    }
}