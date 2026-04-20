#include <stdio.h>
void main()
{
   for(int i=1;i<=10;i++)
   {
      printf("Table of %d\n",i);
         for(int a=1;a<=10;a++)
         {
            printf("%d * %d : %d\n",a,i,a*i);
         }
         printf("\n");

   }
}