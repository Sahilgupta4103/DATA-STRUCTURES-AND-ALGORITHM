//SEARCHING IN A LINKED LIST
#include<stdio.h>
#include<stdlib.h>

struct node
{
   int data;
   struct node *next;
}*first=NULL;

void create(int a[], int n)
{
   struct node*t=NULL,*last=NULL;
   first=(struct node *)malloc(sizeof(struct node));
   first->data=a[0];
   first->next=NULL;
   last=first;
   
   int i;
   for(i=1;i<n;i++)
   {
      t=(struct node *)malloc(sizeof(struct node));
      t->data=a[i];
      t->next=NULL;
      last->next=t;
      last=t;
   }
}

void search(struct node *p,int key)
{
   int flag=0;
   while(p!=NULL)
   {
      if(key==p->data)
      {
         printf("key found");
         flag=1;
      }
      p=p->next;
   }
   if(flag==0){
      printf("Key not found");
   }
   
}
int main()
{
   int a[]={3,5,7,8,9,10};
   create(a,6);
   search(first,8);
   return 0;
}
























