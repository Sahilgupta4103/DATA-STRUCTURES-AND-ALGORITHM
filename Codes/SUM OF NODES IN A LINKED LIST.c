//SUM OF NODES IN A LINKED LIST
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

int add(struct node *p)
{
   int sum=0;
   while(p!=0)
   {
      sum=sum+p->data;
      p=p->next;
   }
   return(sum);
}
int Radd(struct node *p)
{
   if(p==0)
   {
      return 0;
   }
   else
   return Radd(p->next)+p->data;
   
}

int main()
{
   int q,x;
   int a[]={1,3,5,7,10,15,55,66,44,55};
   create(a,10);
   printf("the sum of all the nodes is %d\n\n",add(first));
   printf("from recursive function %d\n\n",Radd(first));
  return 0;
   
}
