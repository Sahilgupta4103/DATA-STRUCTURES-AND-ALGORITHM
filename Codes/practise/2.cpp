#include<bits/stdc++.h>
using namespace std;

void insertionSort(int a[] , int n){
    int i,j;
    for(int j=1;j<n;j++){        
   int  key = a[j];
    i=j-1;
    while(i>-1 && a[i]>key){
        a[i+1]=a[i];
        i=i-1;
    }
    a[i+1]=key;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

int main(){
    int a[]={3,5,1,2,4};
    insertionSort(a,5);
    return 0;
}






























