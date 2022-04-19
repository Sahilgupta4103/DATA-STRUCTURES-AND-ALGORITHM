#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int a[], int x){

    for(int i=0;i<x-1;i++){
        int flag=0;
        for(int j=0;j<x-1-i;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);flag=1;
            }
        }
        if(flag==0){
            cout<<"Already sorted"<<endl;
            break;
        }
    }
for(int i=0;i<x;i++){
    cout<<a[i]<<" ";
}
}

int main(){
    int a[]={3,4,5,6,9};
    bubbleSort(a,5);
    return 0;
}