#include<bits/stdc++.h>
using namespace std;

void topologicalsortutils(vector<int> graph[],, bool visited[],stack<int> &st,int i)
{
    visited[i]=true;
    int n = graph[i].size();
    for(int j=0;j<n;j++){
        if(!visited[graph[i][j]]){
            topologicalsortutils(graph,visited,st,graph[i][j]);
        }
    }
    st.push(i);
}

void topologicalsort(vector<int> graph[], int v){
    bool visited[V];
    stack<int> st;
    for(int i=0;i<V;i++){
        visited[i]=false;
    }
    for(int i=0;i<v;i++){
        if(!visited[i]){
            topologicalsortutils(graph,visited,st,i);
        }
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop(); 
    }
}


int main(){
    int V,E,s,d;
    cin>>V>>E;
    vector<int> graph[V];
    for(int i=0;i<E;i++){
        cin>>s>>d;
        graph[s].push_back(d);
    }
    topologicalsort(graph,V);
    return 0;
}