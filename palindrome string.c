//palindrome string

#include <stdio.h>
#include <string.h>

int main()
{
   char a[] = "madam";
   int i,j;
   
   for (j=0;a[j]!='\0';j++)
   {
   }
   j=j-1;
   for (i=0;i<j;i++,j--)
   {
      if (a[i]==a[j])
      {
         printf("pallindrome");
      }
      else 
      {
         printf("not pallindrome");
      }
   }
   return 0;
}
   
   
   
   
   
   
 