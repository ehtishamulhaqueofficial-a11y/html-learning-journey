#include<iostream>
using namespace std;

class Teacher{
    // Data Members or Properties
    private:
        int salary;
    public:
        string name;
        string department;
        int age;
        string subjName;

        // Member Functions or Methods
        void changeSubj(string newSubj){
            subjName = newSubj;
        }

        void setSalary(int s){
            salary = s;
        }

        int getSalary(){
            return salary;
        }
};

int main(){
    Teacher firstTeacher;
    firstTeacher.name = "Ehtisham";
    firstTeacher.department = "Chemical Dept";
    firstTeacher.age = 18;
    firstTeacher.setSalary(500);
    firstTeacher.subjName = "Organic Chemistry";
    
        string oldsubj = firstTeacher.subjName;

    firstTeacher.changeSubj("Environmental Chemistry");


    cout<<"Name is:"<< firstTeacher.name<<endl;
    cout<<"Department is:"<< firstTeacher.department<<endl;
    cout<<"Age is:"<< firstTeacher.age<<endl;
    cout<<"Salary is:"<< firstTeacher.getSalary()<<endl;
    cout<<"Previous Subject is:"<< oldsubj<<endl;
    cout<<"New Subject is:"<< firstTeacher.subjName<<endl;

    return 0;
}