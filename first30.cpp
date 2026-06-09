#include <iostream>
using namespace std;

void func(int x) 
{
    cout << "Parameter x = " << x << endl;

    {
        int x = 50; // shadows parameter x

        cout << "Shadowed x = " << x << endl;
    }

    cout << "Parameter x again = " << x << endl;
}

int main() {
    func(10);
}

// The output is:
//                Parameter x = 10
//                Shadowed x = 50
//                Parameter x again = 10