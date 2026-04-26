#include <stdio.h>
void main()
{
    int arr[5]={2,1,5,4,3};
    int temp;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(arr[j+1]<arr[j])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }
        }
    }
    for(int i=0;i<=4;i++)
    {
        printf("%d ",arr[i]);
    }
}
