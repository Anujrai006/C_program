#include <stdio.h>
void main()
{
    char str[10],rev[10];
    int count=0;
    int i=0;
    printf("Enter word:");
    gets(str);
    while(str[i] != '\0')
    {
        i++;
        count+=1;
    }
    printf("%d \n",count);
     for(int i=count-1,j=0;i>=0;i--,j++)
        {
           rev[j]=str[i];
        }
        rev[count]='\0';
        printf("%s \n",rev);
      
      int palindrome=1;
      for(int i=0;i<count;i++)
       {
        if(rev[i] != str[i])
        {
            palindrome=0;
            break;
        }
       }
     if(palindrome)
     {
        printf("Palindrome");
     }
     else
     {
        printf("Not palindrome");
     }

}
