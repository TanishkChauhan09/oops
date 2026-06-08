#include<bits/stdc++.h>
using namespace std;

// exception handling : we can handle the exception using if, else-if, else, block also,   

class Customer{

    string name;
    int balance,account_no;

    public:
    Customer(string name,int balance,int account_no){
        this->name = name;
        this->balance = balance;
        this->account_no = account_no;
    }
    
    void getaccount(){
        cout<<"Account is: "<< account_no << endl;
        return;
    }
    void getbalance(){

        cout<<"Balance is: "<< balance <<endl;
        return;
    }

    void deposit(int amount){
        
        if(amount>0){
            balance += amount;
            cout<<amount<<" deposited/credited successfully"<<endl;
            return;
        }
        else{
            cout<<"Amount deposited should be greater than 0"<<endl;
        }
    }

    void withdraw(int amount){
         
        if(amount>0 && amount<=balance)
        { 
           balance -= amount;
           cout<<amount<<" is debited successfully"<<endl;
           return;
        }
        else{
            cout<<"Debited amount should be greater than 0"<<endl;
            return;
        }
    }

};

int main(){

    Customer *c = new Customer("Rohan",5000,12345);
    c->getbalance();
    c->deposit(200);
    c->getbalance();

    c->withdraw(2200);
    c->getbalance();

    c->deposit(100);
    c->getbalance();

    c->withdraw(100);
    c->getbalance();

    c->deposit(-500);
    c->getbalance();

    c->withdraw(-100);
    c->getbalance();

}