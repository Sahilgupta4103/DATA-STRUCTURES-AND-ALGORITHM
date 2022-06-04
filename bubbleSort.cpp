#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int a[], int n){
    int i,j,comp=0,shift=0, temp=0;
    for(int i=0;i<n;i++){
        
        for(int j=i+1;j<n;j++){
            comp++;
            if(a[i]>a[j]){
                shift++;
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;            
            }
        }
    }
            for(int i=0;i<n;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
            cout<<"Comparisons : "<<comp<<endl;
            cout<<"Shifts : "<<shift<<endl;
}


int main(){
    int a[]={3,2,9,5,6,4,1,7};
    bubbleSort(a,8);
    return 0;
}