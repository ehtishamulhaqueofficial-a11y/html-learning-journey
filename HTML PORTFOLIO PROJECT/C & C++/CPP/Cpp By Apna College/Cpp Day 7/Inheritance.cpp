#include<iostream>
using namespace std;

class Person{
    public:
        string name;
        int age;

    // Person(string name, int age){
    //     this->name = name;
    //     this->age = age;
    // }

    Person(){
        cout<<"this is parent constructor\n";
    }
    ~Person(){
        cout<<"this is parent destructor\n";
    }
};

class Student : public Person{ // here all parent property inherited by student
    public:
        int rollno;

    void get_Info(){
        cout<<"Name of student is:\t"<<name<<endl;
        cout<<"Age of student is:\t"<<age<<endl;
        cout<<"Roll No of student is:\t"<<rollno<<endl;
    }

    Student(){
        cout<<"this is child constructor\n";
    }
    ~Student(){
        cout<<"this is child destructor\n";
    }
};

int main(){
    Student s1;
    s1.name = "ali";
    s1.age = 15;
    s1.rollno = 2;
    s1.get_Info();
    return 0;
}