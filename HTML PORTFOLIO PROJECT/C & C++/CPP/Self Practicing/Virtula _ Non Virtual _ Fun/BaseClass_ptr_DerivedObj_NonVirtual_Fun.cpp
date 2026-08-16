// What happens when a base class pointer points to a 
// derived class object and a non-virtual function is called?

#include<iostream>
using namespace std;

// If i create base class virtual
    // class Base{
    //     public:
    //         virtual void display(){
    //             cout<<"hi";
    //         }
    // };

class Base{
    public:
         void display(){
            cout<<"hi";
        }
};

class Derived : public Base{
    public:
        void display(){
            cout<<"bye";
        }
};

int main(){

// By using child class and his obj
    // Derived obj;
    // obj.display();

// By using base class ptr and child class obj
    Base *ptr;
    Derived obj;

    ptr = &obj;
    ptr->display();

    
    return 0;
}