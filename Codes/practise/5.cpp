#include<bits/stdc++.h>
using namespace std;

int binarySearch(int a[], int l, int h , int x){
    int mid = ((l + (h-l))/2);
    if(a[mid]==x){
        return mid;
    }
    else if(x<a[mid]){
        binarySearch(a,l,mid-1,x);
    }
    else{
        binarySearch(a,mid+1,h,x);
    }
}

int main(){
    int a[]={1,2,3,4,5};
    int l=0;
    int h = 4;
    int x;
    cout<<"target key?"<<endl;
    cin>>x;
    int y = binarySearch(a,l,h,x);
    cout<<"the index of key is : "<<y<<endl;
    return 0;
}