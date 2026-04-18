#include <stdio.h>
void main()
{
    int temp,arr[5]={9,4,1,2,3};
    for(int a=0;a<=3;a++)
    {
        for(int b=0;b<=3;b++)
        {
           if(arr[b+1]<arr[b])
           {
            temp=arr[b];
            arr[b]=arr[b+1];
            arr[b+1]=temp;
           }
        }
    }
    for (int b=0;b<=4;b++)
    {
        printf("%d ",arr[b]);
    }






}