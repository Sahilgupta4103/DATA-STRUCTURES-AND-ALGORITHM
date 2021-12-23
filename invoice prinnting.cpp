#include<iostream>
using namespace std;


class invoice{
   string partnumber,partdiscription;
   int quantity;
   int price;
   public: 
      invoice(string n, string d,int p, int q){
         partnumber=n;
         partdiscription=d;
         quantity=p;
         price=q;
      }
      void setpartnumber(string x){
         partnumber=x;
      }
      void setpartdiscription(string x){
         partdiscription=x;
      }
      void setquantity(int x){
         quantity=x;
      }
      void setprice(int x){
         price=x;
      }
      string getpartnumber(){
         return partnumber;
      }
      string getpartdiscription(){
         return partdiscription;
      }
      int getquantity(){
         return quantity;
      }
      int getprice(){
         return price;
      }
      int getamount(){
         if(quantity<0){
            quantity=0;
         }
         if(price<0){
            price =0;
         }
      return price*quantity;
      }
};

int main(){
   invoice i("12345","sahil",12,2);
   cout<<i.getpartnumber()<<endl;
   cout<<i.getpartdiscription()<<endl;
   i.setpartnumber("54321");
   cout<<i.getpartnumber()<<endl;
   cout<<i.getamount()<<endl;
   return 0;
}





