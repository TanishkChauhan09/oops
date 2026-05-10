#include<iostream>
using namespace std;

class Student{

    private:
    string name;
    int age=0;
    int roll_number;
    string grade;

    public:

    void setname(string n)
    {
        name = n;
    } 
    void getname()
    {
        cout<<name<<endl;
    }

    void setage(int a)
    {
        age = a;
    }
    void getage()
    {
        if(age==0)
        {
            cout<<"User did not mention his age"<<endl;
            return;
        }
        cout<<age<<endl;    
    }
};

int main()
{
    Student s1;
    s1.setname("Rohan");
    s1.getname();
    s1.getage();

    Student s2;
    s2.setname("lily");
    s2.getname();
    s2.setage(22);
    s2.getage();
}