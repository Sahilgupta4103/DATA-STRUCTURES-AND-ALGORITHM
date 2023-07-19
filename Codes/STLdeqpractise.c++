#include<iostream>
#include<deque>
using namespace std;

int main(){

    // DOUBLE ENDED QUEUE (deque) ]. In this data structure insertion and deletion can be done from both rear and front ends.
    //continuos memory is not allocated in this DS. Here we have multiple fixed arrays and they track of in which array your data is stored.
    //dynamic memory allocation, random access is possible using at().
    

    deque<int> d;

    d.push_back(3);
    d.push_front(2);
    d.push_front(1);
    d.push_back(4);
    d.push_back(5);
    d.push_back(6);

    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;

    d.pop_back();
    for(int i:d){
            cout<<i<<" ";
        }cout<<endl;

    d.pop_back();
        for(int i:d){
                cout<<i<<" ";
            }cout<<endl;

    d.pop_front();
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"element at index 1: "<<d.at(1)<<endl;
    cout<<"empty or not: "<<d.empty()<<endl;

    d.erase(d.begin(),d.begin()+1);

    //  d.erase(a,b):- element at index a will be deleted till to b-1 index.

    for(int i:d){
            cout<<i<<" ";
        }cout<<endl;

}