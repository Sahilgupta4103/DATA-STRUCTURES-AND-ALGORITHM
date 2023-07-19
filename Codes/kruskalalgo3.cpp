#include<bits/stdc++.h>
using namespace std;

//  Three steps:
//  1. take the  input. 
//  2. sort the array basked o weights.
//  3. create a output.
//  4. pick th edges na d add in tree.

class Edge{
    public:
    int source,dest,weight;
};

bool compare(Edge a, Edge b){
    return a.weight<b.weight;

}
int findparent(int v,int *parent){
    if(parent[v]==v){
        return v;
    }
    return findparent(parent[v], parent);
}

void kruskals(Edge *input, int n, int E){
    //sort the input array in ascending order based on weights.
    sort(input , input + E , compare);
    Edge *output = new Edge[n-1];

    int *parent= new int[n];
    for(int i=0;i<n;i++){
        parent[i]=i;
    }

    int count=0;    // ccount the edges added int the minimum spanning tree
    int i=0;
    while(count != n-1){
        Edge currentedge = input[i];

        //check if the currrent edge fccan be added in the MST(minimum spanning tree) or not
    int sourceparent=findparent(currentedge.source, parent);
    int destparent=findparent(currentedge.dest, parent);
    if(sourceparent != destparent){
        output[count]=currentedge;
        count++;
        parent[sourceparent]=destparent;
    }
    i++;
    }
    for(int i=0;i<n-1;i++){
        if(output[i].source < output[i].dest){
        cout<<output[i].source<<" "<<output[i].dest<<" "<<output[i].weight<<endl;
        }
        else{
            cout<<output[i].dest <<" "<<   output[i].source <<" "<<output[i].weight<<endl;
        }
        
    }
}


int main(){
    cout<<"Enter the inputs"<<endl;
    int  n,E;   //n= no. of vertices E= total no. of edges(they are the elements)
    cin>>n>>E;

    Edge *input=new Edge[E];    // array is made of class edge its all indecies will contain 3 properties s,d,w.

    for(int i=0;i<E;i++){
        int s, d, w; // source, destination ,weight
        cin>>s>>d>>w;
        input[i].source=s;       // one object of class edge
        input[i].dest=d;       // one object of class edge
        input[i].weight=w;       // one object of class edge
    }
    kruskals(input,n,E);
}