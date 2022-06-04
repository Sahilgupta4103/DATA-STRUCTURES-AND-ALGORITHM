#include<bits/stdc++.h>
#include<vector>
using namespace std;



void commonList(int a[], int b[], int x, int y)
{
    vector<int> v;
    int i=0, j=0;
    while(i<x && j<y){

    if(a[i]==b[j]){
        v.push_back(a[i]);
        i++;
        j++;
    }  
    else{
        i++;
        j++;
    } 

    }
    for(int i=0;i<x;i++){
        cout<<v[i]<<" ";
    }

}

int main(){
    int x,y;
    cout<<"enter the size of first array"<<endl;
    cin>>x;
    cout<<"enter the size of seccond array"<<endl;
    cin>>y;
    int a[x];
    int b[y];
    for(int i=0;i<x;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<y;i++)
    {
        cin>>b[i];
    }
    commonList(a,b,x,y);
    return 0;
    
}