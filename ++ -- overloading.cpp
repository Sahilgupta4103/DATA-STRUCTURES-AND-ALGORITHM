#include<iostream>
using namespace std;

class complex{

    int r,i;
    public:
    complex(){
    r=0;
    i=0;
    }
    complex(int a,int b){
    r=a;
    i=b;
    }
    complex operator +(complex b){
        complex c;
        c.r=r+b.r;
        c.i=i+b.i;
        return c;
    }
    complex operator -(complex b){
        complex c;
        c.r=r-b.r;
        c.i=i-b.i;
        return c;
    }
    void show(){
        cout<<"r"<<r<<"+"<<"i"<<i<<endl;
    }

    complex operator ++(){
        complex temp;
        temp.r=++r;
        return temp;
    }
    void display(){
        cout<<"r ="<<r<<endl;
    }


    complex operator ++(int){
        complex temp;
        temp.r=r++;
        temp.r=r++;
        return temp;
    }
      void display2(){
        cout<<"r ="<<r<<endl;
    }

};

int main(){
    complex a(5,4);
    complex b(6,10);
    complex c;
    c=a+b;
    c.show();
    c=b-a;
    c.show();
    c=++a;
    c.display();
    c.display2();
    c=b++;
    c.display2();
}