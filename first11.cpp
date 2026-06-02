#include<iostream>
#include<math.h> // use math.h OR use cmath header file for pow 
using namespace std;

class A{

    private:
    int account_no;
    int balance;
    public:
    A(int a,int b){
        account_no = a;
        balance = b;
    }

    void updatebalance(int amount){
        
        if(amount<0){
            cout<<"Invalid amount"<<endl;
        }
        // here any organization can apply some logics to reduce customer money and customer will not be able
        // to know how some rupees from his/her account reduced
        balance+=amount;
    }
    void display(){
        cout<<"Account no: "<<account_no<<" Balance: "<<balance<<endl;
    }
};

int main(){

    A *a1 = new A(123,1000);
    a1->display();
    a1->updatebalance(-500);
    a1->display();
    a1->updatebalance(700);
    a1->display();
    
    // internal implemetation is not known to us for this and only using it
      cout<< pow(3,2)<<endl; // here we are using pow function but we don't know how it is implemented internally

    delete a1;

}