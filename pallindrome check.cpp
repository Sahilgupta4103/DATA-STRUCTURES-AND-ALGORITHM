#include<iostream>
using namespace std;

class pallindrome{
   string str;
   public:
   pallindrome(string a){
      str=a;
   }
   friend void test(pallindrome);
};
void test(pallindrome y){
   int l=0;
   int h=(y.str).length()-1;
   while(h>l){
      if(y.str[l]!=y.str[h]){
         cout<<"not pallindrome";
      }
       else{
               cout<<"pallindrome"<<endl;
               }
      return;
       h--,l++;
         
}
}

int main(){
   pallindrome p("101");
}