#include<bits/stdc++.h>
using namespace std;

class Student{

    private:
    string name;
    int age;
    int amount;

    public:

    // Default constructor
    Student(){
    }

    Student(string name, int age, int amount): name(name), age(age), amount(amount){
       
    }

   
    Student(Student &s){
        name = s.name;
        age = s.age;
        amount = s.amount;
        cout<<"Copy Constructor called."<<endl;
    }

    void display(){
        cout<<name<<" "<<age<<" "<<amount<<endl;
    }


};

int main(){

    Student s("sohan", 20, 1000);

    // Student s2(s);  // copy constructor is called when we create a new object and initialize it with an existing object
     
    Student s2;
    s2 = s;
    s2.display();

}