#include<bits/stdc++.h>
using namespace std;

class Human{

    protected:
     string name;
     int age;

     public:
    //  Human(string name,int age){
    //     this->name = name;
    //     this->age = age;
    //  }

    Human(){}  // default constructor

     void mtd_parent(){
        cout<<"This is parent class method"<<endl;
     }
};

class Student:public Human{

    private:
    string grade;
    int fees;
    string school;

    public:
  
    //  ye kr skte hai jis se ke phle parent class ka constructor call hoga,pr un variables ke liye ek dedicatedly constructor bnana pdega parent class me else default constructor bnana pdega agar ye use nhi kr rha hoon means child class ke constructor me hi saare variables ko initialize kr rha hoon toh parent class ke constructor ki jarurat nhi hai bss default constructor ki jrurat h

    // Student(string name,int age,string grade,int fees,string school):Human(name,age){
    //     this->grade = grade;
    //     this->fees = fees;
    //     this->school = school;
    // }

    // ye bhi kr skte hai : but it needed default parent constructor
    Student(string name,int age,string grade,int fees,string school){
        this->name = name;
        this->age = age;
        this->grade = grade;
        this->fees = fees;
        this->school = school;

    }

    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Grade: "<<grade<<endl;
        cout<<"Fees: "<<fees<<endl;
        cout<<"School: "<<school<<endl;

        cout<<"______________________________________________________"<<endl;
    }
       
};

int main(){

    Student s1("Rohan",20,"A",5000,"ABC School");
    s1.display();
    s1.mtd_parent(); // this method is in the parent class but i am calling it using the child class object this is possible because of the inheritance

    return 0;

}