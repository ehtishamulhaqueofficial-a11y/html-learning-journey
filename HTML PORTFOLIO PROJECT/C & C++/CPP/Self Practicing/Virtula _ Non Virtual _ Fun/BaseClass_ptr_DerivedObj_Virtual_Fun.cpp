// What happens when a base class pointer points 
// to a derived class object and a Virtual function is called?

#include<iostream>
using namespace std;


// Abstract Class
class Shape{
    public:
        virtual double area() = 0;
    
        virtual void display(){
            cout<<"This is shape class virtual function";
        }
};

//Concrete Class
class Circle : public Shape{
    public:
        double area() override{
            int radius;
            cout<<"Enter radius :";
            cin>>radius;

            float Result = 3.14 * radius * radius;
            cout<<"Result is :"<<Result<<endl;
        }
};

int main(){

// By using Child Class and Obj
    // Circle obj;
    // obj.area();
    // obj.display();

// By using base ptr and child obj
    Shape *ptr;
    Circle obj;

    ptr = &obj;
    ptr->area();
    ptr->display();

    return 0;
}