#include<iostream>
using namespace std;

class circle{
   int r;
   public:
      circle(){
         r=0;
      }
      circle(int a){
         r=a;
      }
      void operator <(circle a){
         if(r<a.r){
            cout<<"a is smaller";
            }
         else{
            cout<<"b is smaller";
         }   
      }
            void operator >(circle a){
         if(r>a.r){
            cout<<"a is larger";
            }
         else{
            cout<<"b is larger";
         }   
      }
};

int main(){
   circle a(6), b(3);
   a<b;
   a>b;
}