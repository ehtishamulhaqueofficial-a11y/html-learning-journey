#include<iostream>
using namespace std;

// Multi Level Inheritance
// class Person{
//     public:
//         int age;
//         string name;
// };
// class Student : public Person{
//     public:
//         int rollNo;
// };
// class Graduate_Std : public Student{
//     public:
//         string researchArea;
// };

// Multiple Inheritance
// class Student{
//     public:
//         string name;
//         int rollNo;
// };
// class Teacher{
//     public:
//         string subject;
//         int salary;
// };
// class CTI : public Student, public Teacher{
    
// };

// Hierachical Inheritance
class Person{
    public:
        int age;
        string name;
};
class Student : public Person{
    public:
        int rollNo;
};
class Teacher : public Person{
    public:
        string subject;
};

int main(){
    // ------ For Multi Level Inheritance ------
    // Graduate_Std s1;
    // s1.age = 18;
    // s1.name = "Ehtisham";
    // s1.rollNo = 216;
    // s1.researchArea = "Computer Technologies";
    
    // cout<<"Age is:\t"<<s1.age<<endl;
    // cout<<"Name is:"<<s1.name<<endl;
    // cout<<"Roll no is:\t"<<s1.rollNo<<endl;
    // cout<<"Research Area is:"<<s1.researchArea<<endl;

    // ------ For Multiple Inheritance ------
    // CTI c1;
    // c1.name = "ali";
    // c1.rollNo = 2;
    // c1.salary = 50000;
    // c1.subject = "chemistry";

    // cout<<c1.name<<endl;
    // cout<<c1.rollNo<<endl;
    // cout<<c1.salary<<endl;
    // cout<<c1.subject<<endl;


    return 0;
}