// by variables we use static keyword

// #include<iostream>
// using namespace std;

// void function(){
//     static int x = 0;
//     cout<<"x: "<<x<<endl;
//     x++;
// }

// int main(){
//     function();
//     function();
//     function();
//     function();
//     return 0;
// }

// by variables we don't use static keyword

#include<iostream>
using namespace std;

class A{
    public:
        int y;
        void incY(){
            y = y+1;
        }
};

int main(){
    A obj;
    A obj2;

    obj.y = 0;
    obj2.y = 2;
    
    cout<<obj.y<<endl;
    obj.incY();
    cout<<obj.y<<endl;

    cout<<obj2.y<<endl;
    obj2.incY();
    cout<<obj2.y<<endl;
    return 0;
}