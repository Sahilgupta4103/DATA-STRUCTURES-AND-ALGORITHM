#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){

    //condition for binary search is the elements should be in sorted order.

    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);


    //binary search
    cout<<"finding 5: "<<binary_search(v.begin(),v.end(),5)<<endl;
    cout<<"finding 3: "<<binary_search(v.begin(),v.end(),3)<<endl;


    //finding lower bund
    cout<<"lower bound is: "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    cout<<"upper bound is: "<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;

    int a=1;
    int b=5;

    cout<<"max is -> "<<max(a,b)<<endl;
    cout<<"min is -> "<<min(a,b)<<endl;
    swap(a,b);
    cout<<"after swap a is -> "<<a<<endl;
    cout<<"after swap b is -> "<<b<<endl;

    string c="abcd";
    reverse(c.begin(),c.end());
    cout<<"reversed string is: "<<c<<endl;



    vector<int> f={1,3,6,7};
    for(int i:f){
        cout<<i<<" ";
    }cout<<endl;

    rotate(f.begin(),f.begin()+1,f.end());
    cout<<"after rotate"<<endl;
    for(int i:f){
        cout<<i<<" ";
    }cout<<endl;


    //sorting based on introsort(combination of quick,heap and insertion sort)
    
    sort(f.begin(),f.end());
    cout<<"after rotate"<<endl;
        for(int i:f){
         cout<<i<<" ";
        }cout<<endl;
    




}