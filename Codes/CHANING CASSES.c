//finding length of a string

#include<stdio.h>

int main()
{    
   char a[]="welcome";
   int i;
   for(i=0;a[i]!='\0';i++)
   {
      a[i]=a[i]-32;
   }
      printf("%s",a);
      return 0;  
}
