#include<iostream>
using namespace std;

class omicron{
   string sym1,sym2,sym3;
   public:
      void setinfo(string a,string b,string c){
         sym1=a;
         sym2=b;
         sym3=c;
      }
      friend void omicroncheck(omicron);
};

void omicroncheck(omicron b){
   
   if(b.sym1=="yes"&&b.sym2=="yes"&&b.sym3=="yes"){
      cout<<"you have omicron"<<endl;
   }
   else if(b.sym1=="no"&&b.sym2=="no"&&b.sym3=="no"){
      cout<<"you are healthy"<<endl;
   }
   else{
      cout<<"you have viral fever";
   }
}

int main(){
   string s1,s2,s3;
   cout<<"enter yes if you have symtom 1 otherwise no"<<endl;
   cin>>s1;
   cout<<"enter yes if you have symtom 2 otherwise no"<<endl;
   cin>>s2;
   cout<<"enter yes if you have symtom 3 otherwise no"<<endl;
   cin>>s3;
   omicron o;
   o.setinfo(s1,s2,s3);
   omicroncheck(o);
   return 0;
}