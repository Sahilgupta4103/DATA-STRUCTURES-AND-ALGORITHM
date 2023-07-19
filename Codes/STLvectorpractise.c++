#include<iostream>
#include<vector>
using namespace std;

//vector:- it is an dynamic array,when vector gets full and user try to enter the element then vector double its size to store the element.
//what it did is when it gets full, it creates another vector of size double of previous vector store the all the elements in new vector and dump the previous vector.
// we can use shrink to fit operation to reduce the size of vector.


int main(){

    vector<int> v;
    //initially vector have zero size.
    
    //to check the capacity/size(memory is located for how many elements) of vector
    //cout<<"capacitysize is:"<<v.capacity()<<endl;
    
    //to push the elem. in vector
    v.push_back(1);
    cout<<"now the capacity is:"<<v.capacity()<<endl;
    
    v.push_back(2);
    cout<<"the capacity of vector is:"<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"the capacity of vector is:"<<v.capacity()<<endl;

    cout<<"the size of vector is:"<<v.size()<<endl;

    //capacity tell us space is assigned for how much elements and,
    //size tells us how many elem. are there in a vector.
    cout<<"element at index 0: "<<v.at(0)<<endl;
    cout<<"element at index 1: "<<v.at(1)<<endl;
    cout<<"element at index 2: "<<v.at(2)<<endl;

    cout<<"first element in vector: "<<v.front()<<endl;
    cout<<"last element in vector: "<<v.back()<<endl;

    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    cout<<"element at index 3: "<<v.at(3)<<endl;
    cout<<"element at index 4: "<<v.at(4)<<endl;
    cout<<"last element in vector: "<<v.back()<<endl;
    cout<<"the size of vector now is: "<<v.size()<<endl;
    cout<<"the capacity of vector now is: "<<v.capacity()<<endl;

    //push_back add the element at last while pop_back delets the element or pop the element from last.

    cout<<"before pop vector is: "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back();
    v.pop_back();

    cout<<"after pop the vector is: "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    //clear operation is used to clear the vector. in this case size becomes zero but capacity doesn''t becomes zero.
    cout<<"size of vector before clear: "<<v.size()<<endl;
    cout<<"capacity of vector before clear: "<<v.capacity()<<endl;
    v.clear();
    cout<<"size of vector after clear: "<<v.size()<<endl;
    cout<<"capacity of vector after clear: "<<v.capacity()<<endl;

    //diffrent methods to initialize vector.
    //for known size of vector
 
    vector<int> a(5,3);
    cout<<"elements in vector a is: "<<endl;
    //a(5,1) :- 5 means the size of vector i need and 1 means initialize my all five elements with 1. by default elem. are initialize with 1
    for(int i:a){
        cout<<i<<" ";
    }cout<<endl;

    vector<int> b(a);
    //this means a new vector named " b " is created and have copied all the elements from vector a. 
    cout<<"element of vector b after copying from a: "<<endl;
    for(int i:b){
        cout<<i<<" ";
    }cout<<endl;

}