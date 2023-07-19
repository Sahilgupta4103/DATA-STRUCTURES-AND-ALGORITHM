//INSERTING NODE IN A LINKED LIST
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

void Display(struct node *p)
{
 while(p!=NULL)
 {
 printf("%d ",p->data);
 p=p->next;

 }
}
void insert(struct node *p,int index,int x)
{
   struct node *t;
   t=(struct node*)malloc(sizeof(struct node));
   t->data=x;
   t->next=first;
   first=t;
   printf("NEW NODE INSERTED\n");
}

int main()
{
   int q,x;
   int a[]={1,3,5,7,10,15,55,66,44,55};
   create(a,10);
   insert(first,0,996);
   Display(first);
   return 0;
}

