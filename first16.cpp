#include<bits/stdc++.h>
using namespace std;

// Hybrid inheritance : combination of any two or more types of inheritance together

//     Here i have use the multiple inheritance and hierarchical inheritance both together
//             
//       Male      Student       Female
//         \       /     \         /    
//          \     /       \       /
//           \   /         \     /
//            BOY           GIRL
// 

class Student{
    protected:
        string name;

    public:
    void display_stu(){
        cout<<"My name is: "<<name<<endl;
    }    
};

class Male{

    protected:
    string gender;

    public:
    void display_ge(){
        cout<<"Gender of the person is: "<<gender<<endl;; 
    }

};

class FeMale{

    protected:
    string gender;

    public:
    void display_ge(){
        cout<<"Gender of the person is: "<<gender<<endl; 
    }

};

class Boy: public Student, public Male{

    private:
     string look;

     public:
      Boy(string name, string gender,string look)
      {
        this->name = name;
        this->gender = gender;
        this->look = look;
      }

      void displaylook(){
        cout<<"Look of the person is: "<<look<<endl;
      }

};

class Girl: public Student, public FeMale{

    private:
     string look;

     public:
      Girl(string name, string gender,string look)
      {
        this->name = name;
        this->gender = gender;
        this->look = look;
      }

      void displaylook(){
        cout<<"Look of the person is: "<<look<<endl;
      }
      
};



int main(){

    Boy b("Rohan","Male","good");
    b.display_stu();
    b.display_ge();
    b.displaylook();

    cout<<"______________________________________________________"<<endl;

    Girl g("Rohini","Female","good");
    g.display_stu();
    g.display_ge();
    g.displaylook();

    return 0;

}

// Output is:
            // My name is: Rohan
            // Gender of the person is: Male
            // Look of the person is: good
            // ______________________________________________________
            // My name is: Rohini
            // Gender of the person is: Female
            // Look of the person is: good