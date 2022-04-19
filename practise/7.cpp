#include<bits/stdc++.h>
using namespace std;

int findmax(int a[], int n){

    int z=35762;
    for(int i=0;i<n;i++){
        if(a[i]>z){
            z=a[i];
        }
    }
    return z;
}


void countSort(int a[], int n)
{
    
    int max = findmax(a,n);
    int *c;
    c= new int[max+1];
    for(int i=0;i<max+1;i++){
        c[i]=0;
    } 
    for(int i=0;i<n;i++)
    {
        c[a[i]]++;
    }
     int h=0,j=0;   // i in on c array and j is on A array to fill sortedly.
    while(h<max+1){

        if(c[h]>0){
            a[j++]=h;
            c[h]--;
        }
        else{
            h++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}




int main(){
    int a[]={3,5,6,2,1,4,8,7};
    countSort(a,8);
    return 0;
}