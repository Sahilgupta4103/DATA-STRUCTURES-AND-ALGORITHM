//comparing strings and palindrome

#include <stdio.h>
#include <string.h>

int main()
{
   char a[] = "painteR";
   char b[] = "painter";
   int i,j;
   for(i-0,j=0;a[i]!='\0' && b[j]!='\0';i++,j++)
   {
      if (a[i]!=b[j])
      break;
   }
   if(a[i]==b[j])
   printf("equal");
   
   else if (a[i]<b[j])
   printf("smaller");
   
   else
   printf("greater");
   
   return 0;
}
