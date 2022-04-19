#include<bits/stdc++.h>
using namespace std;

void merge(int a[], int l, int mid, int r){
    int n1=mid-l+1;
    int n2=r-mid;
    int x[n1];
    int y[n2]; //temporary arrays

    for(int i=0;i<n2;i++){
        x[i]=a[l+i];
    }
  
    for(int i=0;i<n1;i++){
        y[i]=a[mid+1+i];
    }

    int i=0;
    int j=0;
    int k=l;
    while(i<n1 && j <n2){
        if(x[i]<y[j]){
            a[k]=x[i];
            k++;
            i++;
        }
        else{
            a[k]=y[j];
            k++;
            j++;
        }
    }
    while(i<n1){
         a[k]=x[i];
            k++;
            i++;
    }
     while(j<n2){
           a[k]=y[j];
            k++;
            j++;
     }
}

void mergeSort(int a[], int l, int r){
    if(l<r){
        int mid = (l+r)/2;
        mergeSort(a,l,mid);
        mergeSort(a,mid+1,r);

        merge(a,l,mid,r);
    }
}

int main(){
    int a[]={3,1,5,2,6,4,8,9,7};
    mergeSort(a,0,8);
    for(int i=0;i<=8;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    return 0;
}