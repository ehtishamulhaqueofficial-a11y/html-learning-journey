#include<iostream>
using namespace std;

class Manager{
    public:
    string name;
    int age;

    Manager(){
        cout<<"this is default constructor\n";
    }

    Manager(string n, int a){
        name = n;
        age = a;
        cout<<"Parameterized constructor is running...\n";
    }

    //custom copy constructor
    Manager(Manager &orginalObj){
        this->name = orginalObj.name;
        this->age = orginalObj.age;
        cout<<"now custom copy constructor is running...\n";
    }

    void get_info(){
        cout<<"name is:"<<name<<endl;
        cout<<"age is:"<<age<<endl;
    }

};

int main(){
    Manager m1;
    m1.name = "ahmed";
    m1.age = 20;
    cout<<"m1 name is:\t"<<m1.name<<endl;
    cout<<"m1 age is:\t"<<m1.age<<endl;
    
    Manager m2("abubakar", 54);
    m2.get_info();

    Manager m3(m2); //custom copy constructor
    m3.get_info();

    return 0;
}