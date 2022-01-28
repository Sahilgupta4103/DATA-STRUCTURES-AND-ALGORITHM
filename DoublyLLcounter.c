#include<stdio.h>
#include<stdlib.h>


struct node{
   struct node *lchild;
   int data;
   struct node *rchild;
};
struct node * create(struct node *root){
   
   struct node *p=NULL;
   p=(struct node *)malloc(sizeof(struct node));
   if(p==NULL){
      printf("memory not allocated");
   }
   else{
      int num;
      printf("enter the value of root node\n");
      scanf("%d",&num);
      p->data=num;
      p->lchild=p->rchild=NULL;
      root=p;
   }
   return root;
}

void insert(struct node *t,int key){
   struct node *r=NULL;
   struct node *p=NULL;
   
   while(t!=NULL){
      r=t;
      if(key==t->data){
         return;
      }
      else if(key<t->data){
         t=t->lchild;
      }
      else{
         t=t->rchild;
      }
   }
   
   p=(struct node *)malloc(sizeof(struct node));
   p->lchild=p->rchild=NULL;
   p->data=key;
   if(p->data<r->data){
      r->lchild=p;
   }
   else{
      r->rchild=p;
   }
}
void inorder(struct node *p){
   
   if(p!=NULL){
      inorder(p->lchild);
      printf("%d\n",p->data);
      inorder(p->rchild);
   }
}

int countleaf(struct node *root){
   printf("z");
   int ctr=1;
   if(root->lchild==NULL && root->rchild==NULL)
      return ctr;
   else  ctr=countleaf(root->lchild)+countleaf(root->rchild);
      return ctr+1;  
}

int main(){
   int ctr;
   struct node *root=NULL;
   root=create(root);
   insert(root,5);
   insert(root,8);
   insert(root,15);
   insert(root,2);
   insert(root,20);
  // inorder(root);
   countleaf(root);
   printf("leaf nodes are: %d",ctr);
   return 0;
}