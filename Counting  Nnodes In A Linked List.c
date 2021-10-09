//counting nodes in a linked list
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

int countings(struct node *p)
   {
      int l=0;
      while(p!=NULL)
      {
         l++;
         p=p->next;
      }
      return l;
   }

int rcount(struct node *p)
{
   if(p!=NULL)
   return rcount(p->next)+1;
   else
   return 0;
}

int main()
{
   int q,x;
   int a[]={3,5,7,10,15,55,66,44,55};
   create(a,9);
   
   printf("the length is %d\n\n\n\n",countings(first));
  
   
   printf("from recursive function %d\n\n\n",rcount(first));
  return 0;
   
}
