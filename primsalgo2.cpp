#include<bits/stdc++.h>
using namespace std;
int n,m;
const int N = 1e+3; // very big number
const int INF = 1e9; // very big number

vector<int> dist[N],parent[N];


void primsMST(int source){
    for(int i=1;i<n;i++){
        dist[i]=INF;
    }
    set<vector<int>>s;
     
    }


vector<int>g[N];
int main(){
    cin>>n>>m; //  n=number of nodes  m=number of edges.
    for(int i=;i<n;i++){
    int u,v,w;
    cin>>u>>v>>w;
    g[u].push_back({v,w});
    g[v].push_back({u,w});
     }
     primsMST(0);
     cout<<cost;
}