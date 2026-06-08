#include<bits/stdc++.h>
using namespace std;

int main(){

    try{ 
        int *arr = new int[1000000000000000000];
        cout<<"Memory Alllocated"<<endl;
        delete []arr ;
    }

    catch(const exception &e) // exception is a class , try jisko error throw kregi wo yhi class hai , ab wo(exception) class object dega catch me jisko maine ek 'e' naam ka variable jo exception type ka hai usme le liya hai
    {
        // i can also write : const bad_alloc &e , tb bhi shi chalega
        cout<<"Error occured: "<<e.what()<<endl;  // e object hone se exception class ke method ko call krskta hoon toh what() whi method hai jisme by default kuch return ho rha hoga 
        return 0;
    }
}

// Output is: 
//            Exception Occured due to line 7 : std :: bad_alloc


// i can also write : throw runtime_error("Divide is not possible as division by 0 is not possible"); in this case in catch i have to write because runtime_error class will return object so : catch(const exception &e){cout<<"Error:"<<e.what()<<endl} like this, and parent pointer can handle child class oject so runtime_error class ka object , parent(exception) class ka object handle kr lega
//       as well as, : throw "Divide is not possible as division by 0 is not possible";       