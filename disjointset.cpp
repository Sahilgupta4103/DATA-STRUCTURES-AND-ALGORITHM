#include<bits/stdc++.h>
using namespace std;

int parent[10000000];
int size[10000000];

void make(int v){
    parent[v]=v;
    size[v]=1;
}
int find(int v){
    if(v==parent[v]){
        return v;
    }
    //path compression
    return parent[v]=find(parent[v]);
}
void Union(int a, int b){
    a=find(a);
    b=find(b);
    if(a!=b){
        //union by size or rank
        if(size[a]<size[b]){
            swap(a,b);
        }
        parent[b]=a;
        size[a]+=size[b];
    }
    cout<<a<<b<<endl;
}

int main(){
    cout<<"enter thr values"<<endl;
    int n,k;//n= no. f nodes, k=>no. of nodes to be added 2 and 3 or 4 and 5 like this.
    cin >> n >> k;
    int u,v;

    for(int i=1;i<n;i++){
        make(i);
    }
    while(k--){
        cin>>u>>v;
        Union(u,v);
    }
    int connectcounter=0;
      for(int i=1;i<n;i++){
        if(find(v)==v){
            connectcounter++;
        }
    }
}