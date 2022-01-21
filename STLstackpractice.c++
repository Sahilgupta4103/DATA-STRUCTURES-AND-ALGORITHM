#include<iostream>
#include<stack>
using namespace std;

int main(){

    // stack:- LIFO discipline
    // 0=false,,1=true.
    stack<string> s;
    s.push("sahil");
    s.push("gupta");
    s.push("ai&ds");

    cout<<"the top element is: "<<s.top()<<endl;
    s.pop();
    cout<<"after pop"<<endl;
    cout<<"the top element is: "<<s.top()<<endl;
    s.push("amroha");
    cout<<"after push"<<endl;
    cout<<"the top element is: "<<s.top()<<endl;
    cout<<"size of stack is: "<<s.size()<<endl;
    cout<<"empty or not: "<<s.empty()<<endl;




}