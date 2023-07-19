#include<iostream>
using namespace std;

int linearSearch(int a[] , int n , int x){
    for(int i=0;i<n;i++){
        if(a[i]==x){
            return i;
        }
    }
    return -1;
}

int main(){
    int n,x;
    int a[]={33,65,12,4,89,7};
    n=sizeof(a)/sizeof(int);
    cout<<"the key you want to search"<<endl;
    cin>>x;
    int y =  linearSearch(a,n,x);
    cout<<"Index : "<<y<<endl;
}