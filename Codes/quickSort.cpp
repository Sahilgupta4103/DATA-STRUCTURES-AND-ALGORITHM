#include<bits/stdc++.h>
using namespace std;
void swap(int* a, int* b)
{
    
    int t = *a;
    *a = *b;
    *b = t;
    
}
 
int partition (int a[], int low, int high)
{
    int ctr=0;int comp=0;
    int pivot = a[high]; 
    int i = (low - 1); 
    for (int j = low; j <= high - 1; j++)
    {
       comp++;
        if (a[j] < pivot)
        {
            ctr++;
            i++; 
            swap(&a[i], &a[j]);
        }
    }
    swap(&a[i + 1], &a[high]);
    cout<<"NO of swaps : "<<ctr<<endl;
    cout<<"NO of comparison : "<<comp<<endl;
    return (i + 1);
}
 
void quickSort(int a[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(a, low, high);
 
        quickSort(a, low, pi - 1);
        quickSort(a, pi + 1, high);
    }
}
 
void printArray(int a[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << a[i] << " ";
    cout << endl;
}
 

int main(){
    int n;
    int ctr=0;
    cout<<"enter the number of test's"<<endl;
    cin>>n;
    int x;
    while(n--){
        
        cout<<"entr the size of array"<<endl;
        cin>>x;
        int a[x];
        for(int i=0;i<x;i++){
            cin>>a[i];
        }
    quickSort(a,0,(x-1));
    printArray(a,x);
    
    }
}

