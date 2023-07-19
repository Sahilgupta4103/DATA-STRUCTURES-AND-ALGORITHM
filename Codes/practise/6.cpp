#include<bits/stdc++.h>
using namespace std;

int jumpSearch(int a[],int u, int js, int x){

    int left =0;
    int right = js;
    while(a[right]<=x && right < u){
         
        //   not the right block
        left =right;
        right +=js;

        if(right> u -1){
            right= u;

        }
    }

for(int i=left ; i< right; i++){
    if(a[i]==x){
        return i;
    }
}
    return -1;
}

int main(){
    int a[]={1,2,3,4,5,6,7,8,9,10,11};
    int jumpsize = pow(10,0.5);
    cout<<"target value ?"<<endl;
    int x , y;
    cin>>x;
    if((y =jumpSearch(a,10,jumpsize,x)) == -1){
        cout<<"not found"<<endl;
    }
    else{
        cout<<"found at index : " << y <<endl;
    }
    return 0;
}