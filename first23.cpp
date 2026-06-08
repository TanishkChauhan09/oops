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
            throw "Amount deposited should be greater than 0";  // throw is like return, iske aage ki koi bhi statement nhi chalti so iss code ko ek aur way se likh skta hai , ab bss throw condition phle check krlenege within the block and then fir apne logic ko baad me bina kisi condition ke likh skte hai
        }
         
        // like this:
        // if(amount<=0){
        //     throw "Amount deposited should be greater than 0";
        // }
        //  balance += amount;
        //  cout<<amount<<" deposited/credited successfully"<<endl;
        //  return;
    }

    void withdraw(int amount){
         
        if(amount>0 && amount<=balance)
        { 
           balance -= amount;
           cout<<amount<<" is debited successfully"<<endl;
           return;
        }
        else{
            
            throw "Debited amount should be greater than 0";
        
        }
    }

};

int main(){

    Customer *c = new Customer("Rohan",5000,12345);
    Customer *c2 = new Customer("Sohan",4000,6789);

    try{
        c->deposit(100);
        c->getbalance();
        c->withdraw(-100);
        c->deposit(200);  // this will not run beacuse jaise the withdraw wale pe error throw hogi toh try usko ek exception class pe throw krega and wha se wo catch pr aayega toh char type ki error throw ho rhi hai isiliye 'e ek pointer hai jo char type ki value ko point kr rha hai' so usko hmne print bhi kra diya hai 
    }
    catch(const char *e){
       cout<<"Error occured: "<<e<<endl;
    }
    
    delete c;
    delete c2;

    return 0;

}

// Output is: 
        // 100 deposited/credited successfully
        // Balance is: 5100
        // Error occured: Debited amount should be greater than 0

        // c->deposit(); nhi chla kyuki exception milte hi code terminate hojaata hai aage nhi chalta