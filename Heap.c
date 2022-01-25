#include<stdio.h>

void insert(int A [],int n){
    int i=n,temp;
    temp=A[i];
    while(i>1 && temp>A[i/2]){
        A[i]=A[i/2];
        i=i/2;
    }
    A[i]=temp;

}

int delete(int A[],int n){
    int i,j,x, val;
    val=A[1];
    x=A[n];
    A[1]=A[n];
    A[n]=val;
    i=1;j=i*2;

    while(j<n-1){
        if(A[j+1]>A[j]){
            j=j+1;
        }
        if(A[i]<A[j]){
            int temp = A[i];
            A[i]=A[j];
            A[j]=temp;
            i=j;
            j=2*j;
        }
        else{
            break;
        }
    }
return val;
}

int main(){


    int h[]={0,10,20,30,25,5,40,35};
    //40,25,35,10,5,20,30 should be as in heap after result
    // 0 is ignored we will not use it. it is placed just to make array from index 1.
int i;
for(i=2;i<=7;i++){
    insert(h,i);
}

for(i=7;i>1;i--){
    delete(h,i);        //performing heap sort. and program for max heap
}

for(i=1;i<=7;i++){
    printf("%d \n",h[i]);
}
    return 0;
}