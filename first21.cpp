#include<bits/stdc++.h>
using namespace std;
class Animal{
    public:

    virtual void sound(){  // USES virtual keyword here
        cout<<"Animal's sound"<<endl;
    }

};

class dog : public Animal{

    public:
    void sound(){
      cout<<"Dog's sound"<<endl;
    }
};

int main(){

    Animal *p;  
    p = new dog(); 
    p->sound();       // Dog's sound , till runtime it waits due to virtual function and then at runtime in p we have the object of dog's class that is why we get this output
 
}

