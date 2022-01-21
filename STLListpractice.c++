#include<iostream>
#include<list>
using namespace std;

int main(){

    // List:- list is type of data structure,IMPLEMENTED THROUGH DOUBLY LINKED LIST, direct access is not possible.
    //have to traverse the linked list.
    //creation:-

    list<int> n(5,100);
    for(int i:n){
    cout<<i<<" ";
    }cout<<endl;

    list<int> l;
    l.push_back(1);
    l.push_front(0);

    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;

    l.erase(l.begin());
    cout<<"after erase command"<<endl;
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"size of list: "<<l.size()<<endl;

}