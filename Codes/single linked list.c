#include<stdio.h>
#include<stdlib.h>

struct node{
   int data;
   struct node *next;
};

struct node* create(struct node *first){
   
   int num;
   struct node *p=NULL;
   struct node *last=NULL;
   p=(struct node *)malloc(sizeof(struct node));
   if(p==NULL){
      printf("memory not allocate");
   }
   else{
      printf("enter the data for first node\n");
      scanf("%d",&num);
      p->data=num;
      first=last=p;
      
      p->next=NULL;
   }
   return first;
}

struct node* insert(struct node *last,struct node *first){
   struct node *x=NULL;
   int n;
   x=(struct node*)malloc(sizeof(struct node));
   if(x==NULL){
      printf("memory not allocate");
   }
   else{
      printf("enter the value for new node\n");
      scanf("%d",&n);
      x->data=n;
      x->next=NULL;
      last->next=x;
      last=x;
   printf("\n");
   }
   return last;
   printf("\n");
}



void display(struct node *q){
   while(q!=NULL){
      printf("%d\n",q->data);
      q=q->next;
   }
}

int count(struct node *first){
   int ctr=0;
   struct node *y=first;
   while(y){
      ctr++;
      y=y->next;
   }
   printf("total nodes are %d\n",ctr);
}

int maximumnode(struct node *first){
   struct node *w=first;
   int max=-32768;
   while(w!=NULL){
      if(w->data>max){
         max=w->data;
      }
      else{
         w=w->next;
      }
      // w=w->next;
   }
   printf("the max value is: %d\n",max);
}
int minimumnode(struct node *first){
   struct node *r=first;
   int min=32768;
   while(r!=NULL){
      if(r->data<min){
         min=r->data;
      }
      else{
         r=r->next;
      }
   
   }
   printf("the min value is: %d\n",min);
}

struct node* delete(struct node* first,int key){
   
   struct node *f=first;
   struct node *g=NULL;
   struct node *temp=NULL;
   while(f->data!=key){
      g=f;
      f=f->next;
   }
   temp=f;
   f=f->next;
   g->next=f;
   free(temp);
   printf("node deleted\n");
}


int main(){
   int key;
   struct node *first=NULL;
   struct node *last=NULL;
   first=create(first);
   last=first;
   last=insert(last,first);
   last=insert(last,first);
   last=insert(last,first);
   last=insert(last,first);
   last=insert(last,first);
   display(first);
   // count(first);
   // maximumnode(first);
   // minimumnode(first);
   // printf("enter the key you want to delete");
   // scanf("%d",&key);
   // delete(first,key);
   // display(first);
   // return 0;
}

