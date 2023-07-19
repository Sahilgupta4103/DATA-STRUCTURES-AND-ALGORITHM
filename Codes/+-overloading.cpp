#include<iostream>
using namespace std;

class complex{
   int r,i;
   public:
      complex(){
         r=0;
         i=0;
      }
      complex(int a, int b){
         r=a;
         i=b;
      }    
      complex operator +(complex b){
         complex c;
         c.r=r+b.r;
         c.i=i+b.i;
         return c;
      }
      complex operator - (complex b){
         complex c;
         c.r=r-b.r;
         c.i=i-b.i;
         return c;
      }
      void show(){
         cout<<r<<"r"<<"+"<<i<<"i"<<endl;
      }
};
int main(){
   complex a(5,4);
   complex b(6,2);
   complex c;
   c=a+b;
   c.show();
   c=b-a;
   c.show();
}