#include<iostream>
using namespace std;

// Constructor Overloading
class Student{
    public:
        string name;
    
    Student(){
        cout<<"Non Parameterized / Default Constructor"<<endl;
    }
    Student(string name){
        this->name = name;
        cout<<"Parameterized Constructor"<<endl;
        cout<<"Name is :"<<name<<endl;
    }
};

// Function Overloading
class Print{
    public:
        void show(int age){
            cout<<"Int : "<<age<<endl;
        }
        void show(char name){
            cout<<"Char : "<<name<<endl;
        }
};

int main(){
    Student s1("ali");
    Print p1;
    p1.show('e');
    return 0;
}