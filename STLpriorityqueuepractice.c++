#include<iostream>
#include<queue>
using namespace std;

int main(){

   //  priority queue:- queue whose first element is always greatest
   //default priority queue is max heap,for min heap it have to be converted.

    priority_queue<int> maxi; //max heap created, i.e when the data is fetched only the greatest element is fetched.

    //for min heap
    priority_queue<int, vector<int> , greater<int>>mini;
    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);
    cout<<"size of maxi: "<<maxi.size()<<endl;
    int n=maxi.size();
    for(int i=0;i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }cout<<endl;

    mini.push(5);
    mini.push(1);
    mini.push(0);
    mini.push(4);
    mini.push(3);

    int m=mini.size();
    for(int i=0;i<m;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }cout<<endl;

    cout<<"empty or not: "<<maxi.empty()<<endl;
    cout<<"empty or not: "<<mini.empty()<<endl;
}