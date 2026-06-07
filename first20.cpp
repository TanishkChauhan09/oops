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

//  now if we want ke jo p hai wo dog class ke object ki memory runtime pr assign kraayega toh 
// isiliye hmm compile time pr p me jo object tha uska function call rokna tha , isiliye hmm 
// Animal ke method/function ko virtual bna denge toh ab jb p->sound() se Animal ke function pr gya toh 
// jaise hi usne virtual dekha wo samajh jayega ke runtime pr function ka call krana hai
// ab jo second statement compile time pr runtime ke liye rhne di thi , jb wo runtime pr call
// krega tb tk usme dog class ka object ja chuka hoga isiliye fir dog ka sound method call hojayega

// phle runtime pr dog class ka object assign hua tb function call hua toh dos's sound print hoga
// ab agr phle function call kiya fir baad me dog's class ka object store kraaya toh animal's sound print hoga , it's a logical thing






// important code part 
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
    void walk(){
        cout<<"Dog is walking"<<endl;
    }
};

int main(){

    Animal *p;  
    p = new dog(); 
    p->walk();     // at compile time when this method will call ,compile time pr animal ka object ki wajah se usi class me walk method dekhega
                   // jo ussse nhi milega so isiliye ye error de rha hai
}