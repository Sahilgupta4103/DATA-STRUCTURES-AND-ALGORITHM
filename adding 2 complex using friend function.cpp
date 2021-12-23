#include<iostream>
using namespace std;

class complex{
   public :
      int a,b;
      void getdata(){
         cout<<"enter the value of real : "<<endl;
         cin>>a;
         cout<<"enter the value of imaginary : "<<endl;
         cin>>b;
      }
      friend complex add(complex,complex);
      void display(){
         cout<<a<<endl<<b<<endl;
      }
};

complex add(complex x, complex y){
   complex z;
   z.a=x.a+y.a;
   z.b=x.b+y.b;
   return z;
}

int main(){
   complex z;
   complex x,y;
   x.getdata();
   y.getdata();
   z=add(x,y);
   z.display();
   return 0;
}