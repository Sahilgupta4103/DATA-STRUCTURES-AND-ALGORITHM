#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
}*front=NULL,*rear=NULL;

void enqueue(int x){
    struct node *t;
    t=(struct node *)malloc(sizeof(struct node));
    if(t==NULL){
        printf("queue is full");
    }
    else{
        t->data=x;
        t->next=NULL;
        if(front==NULL){
            front=rear=t;
        }
        else{
            rear->next=t;
            rear=t;
        }
    }
}
int dequeue(){
    int x=-1;
    struct node *t;
    if(front==NULL){
        printf("queue is empty");
    }
    else{
        x=front->data;
        t=front;
        front=front->next;
        // // free(t);
    }
    return x;
}

int isempty(){
    return front==NULL;
}

void bfs(int g[][7],int start, int n){
    int i=start;
   
    int visited[7]={0};

    printf("%d",i);
    visited[i]=1;
    enqueue(i);

    while(!isempty()){
        i=dequeue();
        for(int j=1;j<n;j++){
            if(g[i][j]==1 && visited[j]==0){
                printf("%d",j);
                visited[j]=1;
                enqueue(j);
            }
        }
    }
}

void dfs(int g[][7], int start, int n){
    static int visited[7]={0};

    if(visited[start]==0){
        visited[start]=1;
        printf("%d",start);
        for(int j=1;j<n;j++){
            if(g[start][j]==1 && visited[j]==0){
                dfs(g,j,n);
            }
        }
    }
}



int main(){

    int g[7][7]={ {0,0,0,0,0,0,0},
                  {0,0,1,1,0,0,0},
                  {0,1,0,0,1,0,0},
                  {0,1,0,0,1,0,0},
                  {0,0,1,1,0,1,1},
                  {0,0,0,0,1,0,0},
                  {0,0,0,0,1,0,0} };

     bfs(g,1,7);
    printf("\n");
    dfs(g,2,7);
    return 0;
}