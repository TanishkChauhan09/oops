#include<bits/stdc++.h>
using namespace std;

class Complex{

    private:
    int real, img;

    public:
    Complex(int r,int i){
        real = r;
        img = i;
    }

    Complex(){}

    void display(){
        cout<<real<<" +i"<<img;
    }

    // so, from this we are returning of the Complex(user defined data type) type value so we have to make this type of return-type of function
    Complex operator +(Complex &c) // we have to use the operator keyword for operator overriding
    {
        Complex ans; // in this object creeation i am not giving the constructor , but the class demanded so for this we will make a default constructor
        
        // c real,img is private but still accessing bacuse same class ke object ko parameter me pass krke we can use its variables in the same class as well

        ans.real = real + c.real; // real will be of c1
        ans.img = img + c.img;  // img will also be of c1 that can be access directly as c1 is something who is calling the function
    
        return ans;
    }

};

int main(){

    Complex c1(2,3);
    Complex c2(4,7);

    Complex c3 = c1+c2; // c1 is the calling function and c2 is passing as a parameter in this like:-  c1.fun(c2);
    c3.display();

}