#include<iostream>
using namespace std;

class Student{
    public:
        string name;
        float* cgpaPtr;

        Student(string name, float cgpa){
            this->name = name;
            cgpaPtr = new float; // point to new memory location
            *cgpaPtr = cgpa;
        }
        
        // this copy is used for doing shallow copy using copy constructor
        // Student(Student &obj){
        //     this->name = obj.name;
        //     this->cgpaPtr = obj.cgpaPtr;
        // }

        // this copy is used for doing deep copy using copy constructor
        Student(Student &obj){
            this->name = obj.name;
            cgpaPtr = new float; // allocate / point to another new memory location
            *cgpaPtr = *obj.cgpaPtr;
        }

        void get_info(){
            cout<<"Name is :"<<name<<endl;
            cout<<"Cgpa is :"<< *cgpaPtr <<endl;
        }
};

int main(){
    Student s1("Ehtisham", 3.5);
    s1.get_info();
    Student s2(s1);
    *(s2.cgpaPtr) = 2.2;
    s2.get_info();
    s1.get_info();
    Student s3(s2);
    *(s3.cgpaPtr) = 1.5;
    s3.get_info();
    s2.get_info();
    return 0;
}