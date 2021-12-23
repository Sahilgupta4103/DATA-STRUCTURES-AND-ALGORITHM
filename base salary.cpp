#include<iostream>
using namespace std;

class employee {
   string name;
   float basesal;
   float da=0.05,ta=0.002,hra=0.025,netsal;
   public:
      void readdata(){
         cout<<"enter your name"<<endl;
         cin>>name;
         cout<<"enter your base salary"<<endl;
         cin>>basesal;
      }
      void netsalary(){
         netsal=basesal-(da*basesal+ta*basesal+hra*basesal);
      }
      void display(){
         cout<<"name :"<<name<<endl<<"base salary is :"<<basesal<<endl<<"salary after all deductions"<<netsal<<endl;
      }
};
int main(){
   employee e;
   e.readdata();
   e.netsalary();
   e.display();
   return 0;
}