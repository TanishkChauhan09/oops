#include<iostream>
using namespace std;

class Student{

    public:
    string name;
    int age;
    int roll_number;
    string grade;

};

int main()
{
    // string name;
    // int age;
    // int roll_number;
    // string grade;

    // cin>>name>>age>>roll_number>>grade;

    // cout<<name<<" "<<age<<" "<<roll_number<<" "<<grade<<endl;

    Student s1;
    s1.name="John";
    s1.age=20;
    s1.roll_number=101;
    s1.grade="A";
    cout<<s1.name<<" "<<s1.age<<" "<<s1.roll_number<<" "<<s1.grade<<endl;

    Student s2;
    s2.name="lily";
    s2.age=22;
    s2.roll_number=102;
    s2.grade="A";
    cout<<s2.name<<" "<<s2.age<<" "<<s2.roll_number<<" "<<s2.grade<<endl;
}