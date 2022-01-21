#include<iostream>
#include<map>
using namespace std;
int main(){

    // map:- map is a type off data structure in which data is stored in key-value form.
    // all keys are unique and will point to only one value.
    //same key cannot point two values. for eg. sahil cannot point to gupta and dharma at the same time.
    // a value can be pointed out by more than one keys. for eg. gupta is pointed out by sahil as well as Shushant
    //in ordered pair output returned in sorted order only.
    //implemented using red-black tree or Avl tree


    //find() returns the iterator of the element.




    //method 1 to insert data.
    map<int, string> m;
    m[1]="sahil";
    m[2]="gupta";
    m[3]="chacha";   //here 13 is key and designer is value.

    // for(auto i:m){
    //     cout<<i.first<<" ";
    // }cout<<endl;

    //method 2 to insert data.
        m.insert({5,"shrey"});
        m.insert({6,"choudhary"});
        m.insert({7,"bade chacha"});

for(auto i:m){
cout<<i.second<<endl;;
}cout<<endl;

    //     // 1 if key is there, 0 if key is not there
    // cout<<"finding 13 -> "<<m.count(13)<<endl;
    // cout<<"finding 5 -> "<<m.count(5)<<endl;



    // cout<<"before erase"<<endl;
    // for(auto i:m){
    //     cout<<i.second<<" ";
    // }cout<<endl;


    // m.erase(5);
    // m.erase(6);
    // m.erase(7);
    

    // cout<<"after erase"<<endl;
    // for(auto i:m){
    //     cout<<i.second<<" ";
    // }cout<<endl;


    auto it=m.find(5);
    for(auto i=it;i!=m.end();i++){
        cout<<(*i).first<<" "<<endl;
    }
} 
























