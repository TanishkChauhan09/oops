#include<bits/stdc++.h>
using namespace std;

class Student{
   public:
        string name;
        string grade;
        int age;
        int roll_no;

        void setname(string n)
        {
            name = n;
        }
        string getname()
        {
            return name;
        }
        void setage(int a)
        {
            age = a;
        }
        int getage()
        {
            return age;
        }

        void setrollno(int r)
        {
            roll_no = r;
        }
        int getrollno()
        {
            return roll_no;
        }
};

int main()
{
    // Dynamic way of creating an object and it is create in a heap memory
   Student *s = new Student; // pointer to an object of class student

   (*s).name = "Sohan"; // first way to access the members of the class using pointer to an object
    s->age = 21;        // second way to access the members of the class using pointer to an object
    s->roll_no = 101;
    (*s).grade = "A";

    cout<< (*s).getname() <<endl;
    cout<<s->getage()<<endl;
    cout<<s->getrollno()<<endl;


}