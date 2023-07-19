#include<bits/stdc++.h>
using namespace std;


void heapify(int a[], int n, int i){
    int largest = i;
    int left=2*i+1;
    int right=2*i+2;

    if(left<=n && a[largest]<a[left]){
        largest=left;
    }

    if(right<=n && a[largest]<a[right]){
        largest=right;
    }
    if(largest!=i){
        swap(a[largest], a[i]);
        heapify(a,n,largest);
    }
}

void heapsort(int a[], int n){
    int t=n;
    while(t>0){
        swap(a[t], a[0]);
        t--;
        heapify(a,t,0);
    }
}

int main(){
    int a[5]={54,53,55,52,50};
    int n=4;
    for(int i=n/2;i>0;i--){
    heapify(a,n,i);
    }
    cout<<"printning the array"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }cout<<endl;
    heapsort(a,n);
    cout<<"printing sorted array"<<endl;
    for(int i=0;i<=n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}