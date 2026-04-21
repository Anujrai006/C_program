#include <stdio.h>
#include <string.h>
void main()
{
 char str[10]="anuj";
 char rev[10];
 for (int i=0;i<=3;i++)
 {
    rev[i]=str[3-i];
    printf("%c",rev[i]);
 }
 int palindrome=1;
  
 for(int i=0;i<=3;i++)
 {
    int count=3;
    if(str[i] != rev[count])
    {
        palindrome=0;

    }
    else
      {
        palindrome=1;
      }
    if(palindrome)
      {
        printf("Palindrome");
        return;
      }
    else{
        printf("not palindrome");
                return;

      }
 }

}