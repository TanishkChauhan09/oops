#include<bits/stdc++.h>
using namespace std;

class Customer{
    string name;
    int account_no;
    int balance;
    static int total_customers;
    static long int bankamount;

    public:

    // constructor to initialize the data members of the class and also to increase the total number of customers by 1 whenever a new customer is created and constructoe does not have any return type and also the name of the constructor is same as the name of the class

    Customer(string name,int account_no,int balance)
    {
        this->name = name;
        this->balance = balance;
        this->account_no = account_no;
        total_customers++;
        bankamount += balance;
    }

    void display(){

        cout<<name<<" "<<account_no<<" "<<balance<<endl;

    }

    static int get_total_customers()
    {
        return total_customers;
    }

    int gettotal_customers()
    {
        return total_customers;
    }
    
    // customer sjould not be able to access the bank amount directly,only manger of the bank will be able to see the current bank amount
    // long int getbankamount(){
    //     return bankamount;
    // }


};

int Customer :: total_customers = 0;
long int Customer :: bankamount = 0;

int main()
{
    Customer *c1 = new Customer("Rohan", 123, 1000);
    (*c1).display();
    Customer *c2 = new Customer("Sohan", 456, 2000);
    (*c2).display();

    // Customer::total_customers = 10; // we can change the value of total customers using the class name and scope resolution operator ,but can not use this method beacuse static data  member is now private and can not be accessed directly by the class name and scope resolution operator
       cout<<"Total customers till now is: "<<Customer::get_total_customers(); // we can access the total customers using the static member function class name and scope resolution operator and also by using the object of the class and scope resolution operator 

   

    // cout<<"Total current bank amount: "<<c1->getbankamount()<<endl;

    delete c1;
    delete c2;
}