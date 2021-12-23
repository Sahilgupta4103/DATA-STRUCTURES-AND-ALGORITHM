#include<iostream>
using namespace std;
class rectangle;
class square{
   float a,s,ar;
   public:
   square(float a){
      s=a;
      ar=s*s;
   }    
   void  display(){
      cout<<"the area of square is : "<<ar<<endl;
   }
   friend void swaparea(square& , rectangle&);
};
class rectangle{
   float l,b,area;
   public:
   rectangle(float a,float y){
      l=a;
      b=y;
      area=l*b;
   }    
   void  display(){
      cout<<"the area of rectangle is : "<<area<<endl;
   }
   friend void swaparea(square& , rectangle&);
};

void swaparea(square &s, rectangle &r){
   float t;
   t=s.ar;
   s.ar=r.area;
   r.area=t;
}

int main(){
   square s(10);
   rectangle r(12,12);
   s.display();
   r.display();
   swaparea(s,r);
   s.display();
   r.display();
}