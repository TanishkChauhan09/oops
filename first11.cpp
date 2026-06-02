#include<bits/stdc++.h>
using namespace std;

class Teacher{
    public:
        string name;
        int age;
        int salary;
        string subject;

        public:

        Teacher(string name,int age,int salary,string subject)
        {
            this->name = name;
            this->age = age;
            this->salary = salary;
            this->subject = subject;
        }

        Teacher(){}
        
        void set_name(string n)
        {
            name = n;
        }

        void set_salary(int s)
        {
            salary = s;
        }

        void set_subject(string sub)
        {
            subject = sub;
        }

        void display(){
            cout<< "Teacher's information is: "<<name<<" "<<age<<" "<<salary<<" "<<subject<<endl;
        }
};

 class Student: public Teacher{

    private:
      int marks;
      string grade;
    
    public: 
    
     Student(string name,int age,int marks,string grade)
     {
        this->name = name;
        this->age = age;
        this->marks = marks;
        this->grade = grade;
     }

     void display(){
        cout<< "Student's information is: "<<name<<" "<<age<<" "<<marks<<" "<<grade<<endl;
     }

 };

int main(){

    Teacher *t = new Teacher("Rajveer", 35, 50000, "Mathematics");
    t->display();
    Student *s = new Student("Rohan", 20, 85, "A");
    s->display();
}