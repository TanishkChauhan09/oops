#include<bits/stdc++.h>
using namespace std;

// Multi-level inheritance

//  class A     Grandparent
//   |              |
//  class B       Parent
//   |              |
// class C        child

class Person{
    protected:
       string name;
    // default constructor khud banayenge ,wrna already class me rhta bhi hai agr koi aur constructor nhi bnaya hai
    Person(){}

    public:

    void intruduce(){
        cout<<"My name is "<<name<<endl;
    }
};

class Employee : public Person{

    protected:
       string salary;

    public:

    void monthly_salary(){
        cout<<"My monthly salary is "<<salary<<endl;
    }

};

class Manager: public Employee{

    private:
         int team_size;
         string department;

    public:

    Manager(string name,string salary,int team_size,string department){
        this->name = name;
        this->salary = salary;
        this->team_size = team_size;
        this->department = department;
    }

    void introduce_manager(){
        cout<<"I am a manager"<<endl;
    }

};


int main(){

    Manager *m = new Manager("Rohan","2lakh",10,"System  Designing");
    
    m->intruduce();          //  kyuki manager ke object se method call kiya hai toh, initially Manager class me dekha hoga wha nhi mila ,then Employee class me dekha hoga wha bhi nhi mila, tehn Person class me dekhega aur wha pr mila gya so whi wala execute hojaayega
    m->monthly_salary();     // initially Manager class me dekhega wha pr nhi mila then Employee class me dekha aur wha pr mil gya so whi wala execute hojaayega
    m->introduce_manager();  // initially manager class me dekha aur whi pr mil bhi gya toh whi execute hojayega aur kahin dekhne ki zrurat nhi h

    cout<<"_______________________________________________"<<endl;


    delete m;

}