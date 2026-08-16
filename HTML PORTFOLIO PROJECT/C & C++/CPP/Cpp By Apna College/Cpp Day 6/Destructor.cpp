#include<iostream>
using namespace std;

class programmers{
    public:
    string* skillPtr;
    int age;

    programmers(string skill, int age){
        skillPtr = new string;
        *skillPtr = skill;
        this->age = age;
    }

    // custom deep copy constructor 
    programmers(programmers &obj){
        skillPtr = new string;
        *skillPtr = *obj.skillPtr;
        this->age = obj.age;
    }

    ~programmers(){
        cout<<"Destructor is called"<<endl;
        delete skillPtr; // dynamically allocated memory free
        skillPtr = nullptr;   // good practice but optional
        // ✔️ delete ہمیشہ وہی چیز delete کرے گا جو new keyword سے بنی ہو
        // if we use ptr but don't use new keyword then there's no need to delete it 
    }

    void Get_data(){
        cout<<"Skill is:\t"<<* skillPtr<<endl;
        cout<<"Age is:\t"<<age<<endl;
    }
};

int main(){
    programmers p1("Web Developer", 20);
    p1.Get_data();
    programmers p2(p1);
    *(p2.skillPtr) = "App Developer";
    p2.Get_data();
    p1.Get_data();
    return 0;
}