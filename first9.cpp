#include<bits/stdc++.h>
using namespace std;

class Customer{
     private:
     string name;
     int age;

     public:
     Customer(string name,int age)
     {
        this->name = name;
        this->age = age;
     }

     void setname(string n)
     {
        name = n;  
     }

     void displayname()
     {
        cout<<"Name: "<<name<<endl;
     }

     void setage(int a)
     {
        age = a;
     }
     void displayage()
     {
        cout<<"Age: "<<age<<endl;
     }
};

int main(){
  
    // data members should be set using a function , not directly by using object name and dot operator
    // to safe from accidental change

    Customer *c1 = new Customer("Rohan",17);
    c1->displayname();
    Customer *c2 = new Customer("Sohan",18);
    c2->setage(20);
    c2->displayname();

    delete c1;
    delete c2;
    
    return 0;
}