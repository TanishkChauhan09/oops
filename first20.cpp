#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:

    void sound(){
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
    p = new dog();  // new keyword gives memory allocation to a variable at runtime SO THE REASON FOR THIS IS WHEN AT COMPILE TIME THE MEMORY IS ALLOCATED TO P IS OF THE ANIMAL AND NEW KEWORD WILL ASSIGN DOG'S OBJECT AT RUNTIME SO DUE TO IN COMPILE TIME IT WILL SEE THAT P IS CALLING THE SOUND() FUNCTION SO AT COMPILE TIME P IS HOLDING THE OBJECT OBJECT OF ANIMAL SO , ANIMAL'S SOUND FUNCTION WILL CALLED  
    p->sound();      // Output is:-   Animal's sound , on creating the object of the dog class
 
}

