#include<iostream>
using namespace std;

void selectionSort(int a[], int n){

    int i,j,k;

    for(int i=0;i<n-1;i++){
        for(j=k=i;j<n;j++){
            if(a[j]<a[k]){
                k=j;
            }
            swap(a[i], a[k]);
        }
    }
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
}

int main(){
    int a[]={3,6,4,2,1};
    selectionSort(a,5);
    return 0;
}