#include<iostream>
using namespace std;

void heapify(int a[], int n , int i){

int largest =i;
int left=2*i+1;
int right =2*i+2;
 
 if(left<n && a[largest]<a[left]){
     largest = left;
 }
 if(right < n && a[largest]< right){
     largest = right;
 }
 if(largest != i){
     swap(a[largest], a[i]);
     heapify(a,n,largest);
 }

}

int main(){
    int a[6]={-1,54,53,55,52,50};
    int n=5;
    for(int i=n/2;i>0;i--){
        heapify(a,n,i);
    }
    cout<<"the array is :"<<endl;
    for(int i=1;i<=n;i++){
        cout<<a[i]<<" ";
    }
            return 0;
}