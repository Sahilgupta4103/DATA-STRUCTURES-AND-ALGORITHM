#include<iostream>
#include<queue>
using namespace std;

int main(){

    // queue:- fifo discipline

    queue<string> q;

    q.push("sahel");
    q.push("gupta");
    q.push("ji");

    cout<<"first element: "<<q.front()<<endl;
    cout<<"size before pop: "<<q.size()<<endl;

        q.pop();
    cout<<"after pop"<<endl;
    cout<<"first element: "<<q.front()<<endl;
    cout<<"size after pop: "<<q.size()<<endl;
}
