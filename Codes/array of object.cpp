#include<iostream>
using namespace std;

class student{
  int age,m[50];
  string name;
  public :
   void getdata(){
      cout<<"enter name:"<<endl;
      getline(cin,name);
      cout<<"enter age"<<endl;
      cin>>age;
      for(int i=0;i<5;i++){
         cout<<"enter marks in subject"<<i+1<<endl;
         cin>>m[i];
      }
   }
   void show(){
      cout<<name<<endl<<age<<endl;
      for(int i=0;i<5;i++){
         cout<<m[i]<<endl;
      }
   }
};

int main(){
   student s[3];
   for(int i=0;i<3;i++){
      s[i].getdata();
   
   for(int i=0;i<3;i++){
      s[i].show();
   }
   }
   return 0;
}