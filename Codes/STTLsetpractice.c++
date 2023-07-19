#include<iostream>
#include<set>
using namespace std;

// set:- set is a data structure which stores only unique elements.
//it means if we have insterted 100 5 times then its going to store for once.
//no duplication
//  it is implemented using Binary Search tree.
//elements are returned in sorted order.
//unordered is faster and returned in random order

int main(){

    set<int> s;

    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(1);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(0);
    s.insert(0);
    s.insert(0);
    s.insert(0);

    for(int i:s){
        cout<<i<<" ";
    }cout<<endl;
    set<int>::iterator it=s.begin();
    it++;

    s.erase(it);
    for(int i:s){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"5 is present or not: "<<s.count(5)<<endl;
    cout<<"9 is present or not: "<<s.count(9)<<endl;

    set<int>::iterator itr=s.find(5);       //find returns the refrence(address)
    cout<<*it<<endl;


    for(auto it=itr;it!=s.end();it++){
        cout<<*it<<" ";
    }cout<<endl;
}