#include<bits/stdc++.h>
using namespace std;

class Student{

    private:
    string name;
    int age;
    int amount;

    public:

    // Default constructor
    // Student(){
    //     cout<<"Default Constructor called."<<endl;
    // }

    // Parameterized constructor
    // Student(string a, int b, int c){
    //     name = a;
    //     age = b;
    //     amount = c;
    //     cout<<"Parameterized Constructor called."<<endl;
    // }

    //  inline constructor
    // inline Student(string a, int b, int c): name(a), age(b), amount(c){
    //     cout<<"Parameterized Constructor called."<<endl;  emty bhi rkh skte hai beacuse out main motive to intitalise the the data is completed
    // }

    // Student(string name, int age, int amount): name(name), age(age), amount(amount){
       
    // }

    Student(string name,int age,int amount){
        this->name = name;
        (*this).age = age;
        this->amount = amount;

        cout<<"Constructor called."<<endl;
        
    }


};

int main(){

    Student s("sohan", 20, 1000);

}