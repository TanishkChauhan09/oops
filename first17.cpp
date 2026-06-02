// #include<bits/stdc++.h>
// using namespace std;

// // Multipath inheritance : ek class pr different path se same class(ek hi class) ke variables multiple route se aa skte hai jiss se ki wo confuse hojaata hai ke konse path se le unko toh ambiguous error aa jaati hai isse toh ab solution ye hai ke jo bhi intermediate wali classes hai wo [:public virtual class_name ] wala format use kre virtual 

// class Human{
//     public:
//     string name;

//     void display(){
//         cout<<"My name is: "<<name<<endl;
//     }

// };

// class Engineer : public Human{  
//     protected:
//     string specialization;

//     public:

//     void specialization_info(){
//         cout<<"I am specialized in "<<specialization<<endl;
//     }
// };

// class YouTuber : public Human{  // Base class 2

//     protected:
//     string channel_name;

//     public:
//     void channel_info(){
//         cout<<"My channel name is "<<channel_name<<endl;
//     }
// };


 
// //  single child class is inhriting multiple base classes 
// class Person: public Engineer, public YouTuber{  // jis parent ki property phle inherit ho rhi hai , usi ka constructor phle call hoga fir baaki ke parent ke constructor jaise jaise unki property bhi inherit hongi then lass me child class ka constructor call hoga , kyuki phle parent ne birth liye(toh parent class chalengi phle) then chil ne birt liya unke baad me(toh fir chil class chalegi parent ke baad)

//     private:
//     int salary;

//     public:
//     Person(string name,string specialization,string channel_name,int salary){
//         this->name = name;
//         this->specialization = specialization;
//         this->channel_name = channel_name;
//         this->salary = salary;
//     }

//     void introduce(){
//         cout<<"My salary is "<<salary<<endl;
//     }

// };


// int main(){

//     Person  *p=new Person("Rohan","Computer Science"," Techview ",9900000);  

//     //  error: request for member 'name' is ambiguous
//     //  this->name = name;
//     //    ^~~~
  

//     delete p; 

//     return 0;
// }

// ------------------------------------------------------------------------------------------

#include<bits/stdc++.h>
using namespace std;

// Multipath inheritance : ek class pr different path se same class(ek hi class) ke variables multiple route se aa skte hai jiss se ki wo confuse hojaata hai ke konse path se le unko toh ambiguous error aa jaati hai isse toh ab solution ye hai ke jo bhi intermediate wali classes hai wo [:public virtual class_name ] wala format use kre virtual 

class Human{
    public:
    string name;

    void display_name(){
        cout<<"My name is: "<<name<<endl;
    }

};

class Engineer : public virtual Human{  
    protected:
    string specialization;

    public:

    void specialization_info(){
        cout<<"I am specialized in "<<specialization<<endl;
    }
};

class YouTuber : public virtual Human{  // Base class 2

    protected:
    string channel_name;

    public:
    void channel_info(){
        cout<<"My channel name is "<<channel_name<<endl;
    }
};


 
//  single child class is inhriting multiple base classes 
class Person: public Engineer, public YouTuber{  // jis parent ki property phle inherit ho rhi hai , usi ka constructor phle call hoga fir baaki ke parent ke constructor jaise jaise unki property bhi inherit hongi then lass me child class ka constructor call hoga , kyuki phle parent ne birth liye(toh parent class chalengi phle) then chil ne birt liya unke baad me(toh fir chil class chalegi parent ke baad)

    private:
    int salary;

    public:
    Person(string name,string specialization,string channel_name,int salary){
        this->name = name;
        this->specialization = specialization;
        this->channel_name = channel_name;
        this->salary = salary;
    }

    void introduce(){
        cout<<"My salary is "<<salary<<endl;
    }

};


int main(){

    Person  *p=new Person("Rohan","Computer Science"," Techview ",9900000);  

    p->display_name();
    p->specialization_info();
    p->channel_info();
    p->introduce();
  

    delete p; 

    return 0;
}