#include<iostream>
using namespace std;

//fucntion overriding program
class Parent{
    public:
        void getdata(){
            cout<<"parent class"<<endl;
        }
};
class Child : public Parent{
    public:
        void getdata(){
            cout<<"child class"<<endl;
        }
};

int main(){
    Child c1;
    c1.getdata();
    return 0;
}