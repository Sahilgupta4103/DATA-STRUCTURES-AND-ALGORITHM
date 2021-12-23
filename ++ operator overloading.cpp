#include<iostream>
using namespace std;

class times
{
   int h,m,s;
   public:
      times(){
         h=0;
         m=0;
         s=0;
      }
      times(int a, int b, int c){
         h=a;
         m=b;
         s=c;
      }
      void operator++(){
         if(s>59){
            m++;
            s=0;
         }
         else{
            s++;
         }
         if(m>59){
            h++;
            m=0;
         }
      }
      void show(){
         cout<<h<<"H"<<m<<"M"<<s<<"S"<<endl;
      }
};


int main(){
   times t(5,57,54);
   ++t;
   t.show();
   return 0;
}