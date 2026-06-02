#include<bits/stdc++.h>
using namespace std;

// Hierarchical inheritance : when more than one derived class inherits from a single base class
// 
//              class A
//              /     \
//          class B   class C


class Human{   // Base class 
    protected:
    string name;
    int age;

    public:

    void display_info(){
        cout<<"My name is "<<name<<" and I am "<<age<<" years old"<<endl;
    }
};

class Student: public Human{   // derived class 1

    private:
    string grade;

    public:
    Student(string name,int age,string grade){
        this->name = name;
        this->age = age;
        this->grade = grade;
    }

     void student_info(){
        cout<<"I am a student and I am in grade "<<grade<<endl;
    }

};

class Teacher: public Human{   // derived class 2

    private:
    string subject;

    public:
    Teacher(string name,int age,string subject){
        this->name = name;
        this->age = age;
        this->subject = subject;
    }

     void teacher_info(){
        cout<<"I am a teacher and I teach "<<subject<<endl;
    }

};  

int main(){

    Student s1("Rohan",20,"A");
    Teacher t1("Rajiv",40,"Math");

    s1.display_info();
    s1.student_info();

    cout<<"______________________________________"<<endl;

    t1.display_info();
    t1.teacher_info();

    return 0;


}

// Output is :
            // My name is Rohan and I am 20 years old
            // I am a student and I am in grade A
            // ______________________________________
            // My name is Rajiv and I am 40 years old
            // I am a teacher and I teach Math