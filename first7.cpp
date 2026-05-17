#include<bits/stdc++.h>
using namespace std;

class Student{

    private:
    string name;
    int *age;

    public:
    Student(string name,int age)
    {
        this->name = name;
        this->age = new int(age);
        cout<<"Constructor called for "<<name<<endl;
    }

    ~Student(){
        delete age;
        cout<<"Destructor called for "<<name<<endl;
    }
};

int main()
{
    Student s("Rohan",20);
    Student s2("Sohan",21);

    // output
    // Constructor called for Rohan
    // Constructor called for Sohan
    // Destructor called for Sohan
    // Destructor called for Rohan
}