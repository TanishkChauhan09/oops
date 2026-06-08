#include<bits/stdc++.h>
using namespace std;

int main(){

    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;

    if(b==0)
    {
        cout<<"Divide is not possible as divide by 0 is possible"<<endl;
        return 0;
    }

    int res = a/b;

    cout<<"Division of a and b is: "<<res<<endl;
    return 0;

}

// Output is :
//             Enter two numbers: 5 0
//             Divide is not possible as divide by 0 is possible

//             Enter two numbers: 6 2
//             Division of a and b is: 3
