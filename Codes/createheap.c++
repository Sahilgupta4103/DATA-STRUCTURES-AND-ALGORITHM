#include<iostream>
using namespace std;

//fucked up!!!


void print(int a[]){
    for(int i=1;i<8;i++){
        cout<<a[i]<<" ";
    }
}

void insert(int a[], int n){
    int temp,i=n;
    temp=a[n];
    while(i>1 && temp>a[i/2]){
        a[i]=a[i/2];
        i=i/2;
    }
    a[i]=temp;
    
}

void deletefromheap(int a[], int n){
    int i=1;
    a[1]=a[n];
    n--;
    while(i<n){
        int lchildindex=2*i+1;
        int rchildindex=2*i+2;

        if(lchildindex < n && a[lchildindex]>a[i] ){
            swap(a[lchildindex], a[i]);
            i=lchildindex;
        }
        else if(rchildindex < n && a[rchildindex]>a[i]){
            swap(a[rchildindex],a[i]);
            i=rchildindex;
        }
        else{
            return ;
        }

    }
}


int main(){
    int a[]={0,10,20,30,25,5,40,35};
    int i;
    for(i=2;i<=7;i++){
        insert(a,i);
    }
    print(a);
    deletefromheap(a,7);
    cout<<endl;
    print(a);
    return 0;
}