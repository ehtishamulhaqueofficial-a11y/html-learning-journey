#include<iostream>
using namespace std;

class Student{
    private:
        int marks;
    public: 
        int age;
        string name;
        string department;

        Student(){
            department = "Computer Science"; //this is set for every student
            cout<<"This is default Constructor\n";
        }

        Student(string n, int a) : Student(){ // parameterized constructor
            name = n;
            age = a;
        }

        void getinfo(){
            cout<<"name of s3 is:"<<name<<endl;
            cout<<"age of s3 is:"<<age<<endl;
        }
};

int main(){
    Student s1;
    Student s2;
    Student s3("ali", 23);
    s1.age = 18;
    s1.name = "Ehtisham";

    cout<<"s1 Age is:" <<s1.age<< endl;
    cout<<"s1 Name is:" <<s1.name<< endl;
    cout<<"Department of s1 is:" <<s1.department<< endl;
    cout<<"Department of s2 is:" <<s2.department<< endl;
    s3.getinfo();
    cout<<"Department of s3 is:" <<s3.department<< endl;
    return 0;
}