#include<iostream>
using namespace std;


class animal{
    public:
        virtual void eat(){
            cout<<"i am eating generic food"<<endl;
        }
};

class cat: public animal{
    public:
    void eat(){
        cout<<"i am eating a cat food"<<endl;
    }
};
class dog: public animal{
    public:
    void eat(){
        cout<<"i am eating a dog food"<<endl;
    }
};

void function(animal *x){
    x->eat();
}
 


int main(){

    animal *ptr;
    cat c;
    dog d;
    ptr=&c;
    function(ptr);
    ptr=&d;
    function(ptr);
    

}











































// class base{
//     public:
//         void show(){
//             cout<<"base classs show function"<<endl;
//         }
//         virtual void print(){
//         cout<<"base classs print function"<<endl;    
//         }
// };

// class derived : public base{
//     public:
//         void show(){
//             cout<<"derived classs show function"<<endl;
//         }
//          void print(){
//         cout<<"derived classs print function"<<endl;    
//         }
// };

// int main(){














//     // base *ptr;
//     // derived obj;
//     // ptr=&obj;

//     // ptr->print(); // derived class print funnction called.
//     // ptr->show(); //base class show funnction called.

// }