#include<iostream>
using namespace std;

class P{
    public:
        virtual void hello(){
        cout<<"hello from parent"<<endl;
    }
};
class C : public P{
    public:
        void hello(){
        cout<<"hello from child"<<endl;
    }
};

int main(){
    C c1;
    c1.hello();
    return 0;
}