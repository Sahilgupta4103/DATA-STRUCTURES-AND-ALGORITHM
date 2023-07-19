//MAXIMUM ELEMENT IN A LINKED LIST
#include <stdio.h>
#include <stdlib.h>
 
struct node
{
   int data;
   struct node*next;
}*first=NULL;

void create(int a[],int n)
{
   int i;
   struct node *t,*last;
   first=(struct node*)malloc(sizeof(struct node));
   first->data=a[0];
   first->next=NULL;
   last=first;
   
   for(i=1;i<n;i++)
   {
      t=(struct node*)malloc(sizeof(struct node));
      t->data=a[i];
      t->next=NULL;
      last->next=t;
      last=t;
   }
}

int max(struct node *p)
{
   int m=-32768;
   while(p)
   {
      if(p->data>m)
         m=p->data;
      p=p->next;
   }
   return m;
}

   int Rmax(struct node *p)
   {
      int x=0;
      if(p==0)
      return -32768;
      else
      {
         x=Rmax(p->next);
         if(x>p->data)
         return x;
         else 
         return p->data;
      }

   }


int main()
{
   int q,x;
   int a[]={1,3,5,7,10,15,55,66,84,55};
   create(a,10);
   printf("the MAXIMUM ELEMENT is %d\n\n",max(first));
   printf("from recursive function %d\n\n",Rmax(first));
   return 0;
   
}