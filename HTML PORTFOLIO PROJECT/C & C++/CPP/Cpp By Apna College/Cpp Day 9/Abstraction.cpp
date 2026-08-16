#include<iostream>
using namespace std;

class Shape{ // abstract class
    virtual void draw() = 0; // pure virtual fuction
};

class Circle : Shape {
public:
    void draw(){
        cout<<"Drawing a circle..."<<endl;
    }
};

int main(){
    Circle c1;
    c1.draw();
    return 0;
}