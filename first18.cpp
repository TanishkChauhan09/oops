#include<bits/stdc++.h>
using namespace std;

// FUNCTION OVERLOADING : When there are multiple functions with the same name but different parameters, 
//                       then the functions are said to be overloaded, hence this isknown as Function Overloading. Functions can be overloaded by changing
//                       the number of arguments or/and changing the type of arguments.


template<class T> class Area{

    public:

    T calculatearea(T r){
        cout<<"Area of Circle is: "<< 3.14*r*r <<endl;
    }

    T calculatearea(T l,T b)
    {
        cout<<"Area for the Rectangle is: "<< l*b <<endl;
    }

};

int main(){

    Area <float> a1;
    a1.calculatearea(4);

    Area <int> a2;
    a2.calculatearea(2,3);

}