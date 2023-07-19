////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////
void bubblesort(int a[],int n){
   int temp;
   for(int i=0;i<n-1;i++){
      for(int j=0;j<n-1-i;j++){
         if(a[j]>a[j+1]){
               temp=a[j];
               a[j]=a[j+1];
               a[j+1]=temp;
         }
      }
   }
}

////////////////////////////////////////////////////////////////////////////////////////

void insertionsort(int a[], int n){
   for(int i=1;i<n;i++){
      int  j=i-1;
      int x=a[i];
      while( j>-1 && a[j]>x){
         a[j+1]=a[j];
         j--;
      }
      a[j+1]=x;
   }
}
///////////////////////////////////////////////////////////////////////////////////////

void selectionsort(int a[],int n){
   int i,j,k;
   for(i=0;i<n-1;i++){
      for(j=k=i;j<n;j++){
         if(a[j]<a[k]){
            k=j;
         }
        int temp=a[i];
               a[i]=a[k];
               a[k]=temp;
      }
   }
}
///////////////////////////////////////////////////////////////////////////////////////

void quicksort(int a[],int n){
   int l,h;
   int pivot=a[0];
   int i=l;
   int j=h;
   
   do{
      do{
         i++;
      }
      while(a[i]<=pivot);
      do{
         j--;
      }
      while(a[j]>pivot);
      
      if(i<j){
          int temp=a[i];
               a[i]=a[j];
               a[j]=temp;
      }
      while(i<j);
      {
             int temp=a[i];
               a[i]=a[j];
               a[j]=temp;
                return j;
      }
     
   }
}
///////////////////////////////////////////////////////////////////////////////////////



void mergesort(int a[],int n){
   int i,p,l,h, mid;
   for(p=2;p<=n;p=p*2){
      for(i=0;i+p-1<h;i=i+p){
         l=i;
         h=i+p-1;
         mid=(l+h)/2;
         mergesort(a,l,mid,h);
      }
   }
   if(p/2<n){
      mergesort(a,0,p/2,n-1);
   }
}






///////////////////////////////////////////////////////////////////////////////////////
int main(){
   
   int a[]={55,6,20,98,32,45,10,75};
    bubblesort(a,8);
    for(int i=0;i<8;i++){
      printf("sorted list: %d\n",a[i]);
    }
      insertionsort(a,8);
   for(int i=0;i<8;i++){
      printf("sorted list: %d\n",a[i]);
   }
   selectionsort(a,8);
   for(int i=0;i<8;i++){
      printf("sorted list: %d\n",a[i]);
   }
   quicksort(a,8);
   for(int i=0;i<8;i++){
      printf("sorted list: %d\n",a[i]);
   }
   mergesort(a,8);
   for(int i=0;i<8;i++){
      printf("sorted list: %d\n",a[i]);
   }
   
   
   return 0;
}