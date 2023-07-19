#include<iostream>
#include<array>
using namespace std;

int main(){
    //arrays
    
    array<int,4> a={3,9,4,2};
    int size=a.size();
    for(int i=0;i<size;i++){
        cout<<a[i]<<endl;
    }

    cout<<"element at 2nd index"<<a.at(2)<<endl;
    cout<<"element at 1st index"<<a.at(1)<<endl;

    cout<<"empty or not"<<endl<<a.empty()<<endl;

    cout<<"first element of array"<<a.front()<<endl;
    cout<<"last element of arrayy"<<a.back()<<endl;



}