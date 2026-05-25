#include <stdio.h>
void main()
{
    int a[5][4];
    int b[5][4];
    int c[5][4];
    printf("enter array 1:\n");
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<4;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     printf("enter array 2:\n");
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<4;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<4;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }

}