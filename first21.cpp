#include<bits/stdc++.h>
using namespace std;

// pure virtual function assign 0 to it and jisme pure virtual function hota hai usss class ko hmm abstract class kahte hai and ab abstract class ka object create nhi hota hai sirf child class ke object store krne me help krega apne pointer ki help se 

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

