#include<bits/stdc++.h>
using namespace std;

//  Multiple inheritance : when a class inherits from more than one base class

//   class A   class B   class C  (Base classes / Parent class)
//        \      |      /
//         \     |     / 
//          \    |    /
//           \   |   /
//            class D  (child class / sub-class / derived class)
// 

class Engineer{  // Base class 1
    protected:
    string specialization;

    public:

    void specialization_info(){
        cout<<"I am specialized in "<<specialization<<endl;
    }
};

class YouTuber{  // Base class 2

    protected:
    string channel_name;

    public:
    void channel_info(){
        cout<<"My channel name is "<<channel_name<<endl;
    }
};

class Gamer{  // Base class 3

    protected:
    string game_name;

    public:
    void game_info(){
        cout<<"I play "<<game_name<<endl;
    }
};
 
//  single child class is inhriting multiple base classes and creating a new class called person which is inheriting from all three base classes
class Person: public Engineer, public YouTuber, public Gamer{  // jis parent ki property phle inherit ho rhi hai , usi ka constructor phle call hoga fir baaki ke parent ke constructor jaise jaise unki property bhi inherit hongi then lass me child class ka constructor call hoga , kyuki phle parent ne birth liye(toh parent class chalengi phle) then chil ne birt liya unke baad me(toh fir chil class chalegi parent ke baad)

    private:
    string name;

    public:
    Person(string name,string specialization,string channel_name,string game_name){
        this->name = name;
        this->specialization = specialization;
        this->channel_name = channel_name;
        this->game_name = game_name;
    }

    void introduce(){
        cout<<"My name is "<<name<<endl;
    }

};


int main(){

    Person  *p=new Person("Rohan","Computer Science"," Techview ","Valorant");
    p->introduce();
    p->specialization_info();
    p->channel_info();
    p->game_info();

    cout<<"_____________________________________________________"<<endl;

    delete p; // memory leak free code

    return 0;
}

// output is : 
                // My name is Rohan
                // I am specialized in Computer Science
                // My channel name is  Techview 
                // I play Valorant
