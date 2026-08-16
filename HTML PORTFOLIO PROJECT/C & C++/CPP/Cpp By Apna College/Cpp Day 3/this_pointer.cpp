#include<iostream>
using namespace std;

class Employee{
    public:
        int age;
        int salary;
        string name;
        string department;

        Employee(){
            cout<<"This is default Constructor\n";
            department = "HR";
        }

        // if some where i type parameter as age then we type this to avoid confusion 
        // Employee(int age, int salary, string name) : Employee(){
        //     this->age = age;
        //     this->salary = salary;
        //     this->name = name;
        // }

        Employee(int a, int s, string n) : Employee(){
            age = a;
            salary = s;
            name = n;
        }

        void get_Data(){
            cout<<"E2 age is:"<<age<<endl;
            cout<<"E2 salary is:"<<salary<<endl;
            cout<<"E2 name is:"<<name<<endl;
        }
};

int main(){
    Employee e1;
    e1.name = "abdullah";
    cout<<"Employee 1 is:" <<e1.name<<endl;
    cout<<"Department of e1 is:"<<e1.department<<endl;
    Employee e2(18, 2000, "Ali");
    e2.get_Data();
    cout<<"Department of e2 is:"<<e2.department<<endl;
    Employee e3(40, 500, "fakhar");
    e3.get_Data();
    cout<<"Department of e3 is:"<<e3.department<<endl;
    Employee e4(e3);  //default copy constructor called
    e4.get_Data();
    return 0;
}