#include<bits/stdc++.h>
using namespace std;

// in this algo we have to keep track of :
//1. whether the vertex is visited or not so we will have bool visited[.]
//2. array to store weights weight[].
//3. array to store the parent of verices. parent[]
// then we will do:
// for all u (vertex) in V vertices
// a= pick vertex with minimum weight nad status unvisited
// mark a as visited.
// then travel all neighbors of a which are unvisited
// and decide whether to update the parent[], and weight or not.





int main(){

    int n;  //n= no. of vertices E= total no. of edges(they are the elements)
    int e;
    cin>>n>>e;
    int **edges= new int*[n];
    for(int i=0;i<n;i++){
        edges[i]= new int[n];
        for(int j=0;j<n;j++){
            edges[i][j]=0;
        }
    }



    for(int i=0;i<e;i++){
        int f,s,weight;     //f=source(first vertex), s=destination(second vertex) and weight  of vertices
        cin>>f>>s>>weight;
        edges[f][s]=weight;
        edges[s][f]=weight;
    }
    cout<<endl;
    prims(edges,n);

    for(int i=0;i<n;i++){
        delete[]edges[i];
    }
    delsete[]edges;
}