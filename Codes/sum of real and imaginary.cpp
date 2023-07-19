#include<iostream>
using namespace std;

class complex{
   float real,img;
   public:
      void getdata(){
         cout<<"enter the real part"<<endl;
         cin>>real;
         cout<<"enter the imaginary part"<<endl;
         cin>>img;
      }
      complex add(int a,complex s){
         s.real=s.real+a;
         return s;
      }
      complex add(complex s1,complex s2){
         complex s3;
         s3.real=s1.real+s2.real;
         s3.img=s1.img+s2.img;
         return s3;
      }
      complex sub(int b,complex s){
         s.real=s.real-b;
         return s;
      }
      complex sub(complex s1,complex s2){
         complex s3;
         s3.real=s1.real-s2.real;
         s3.img=s1.img-s2.img;
         return s3;
      }
      void display(){
         cout<<real<<"+"<<img<<"i"<<endl;
      }
};

int main(){
   complex a,b,c,d;
   a.getdata();
   b.getdata();
   a.display();
   b.display();
   a=a.add(5,a);
   b=b.sub(2,b);
   c=a.add(a,b);
   d=b.sub(a,b);
   a.display();
   b.display();
   c.display();
   d.display();
}