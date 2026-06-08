#include<bits/stdc++.h>
using namespace std;

int main(){
    
    ifstream fin;
    // open the file
    fin.open("abc.txt");
    // then read it
    char ch;
    // fin>>ch; // character by character read krega file ko, this does not see space as as character that's why output is : HelloBharat

    // for considering space as a character then we have to write
    ch = fin.get();


    while(!fin.eof()) // end of file(eof)
    {
        cout<<ch;
        // fin>>ch;
        ch = fin.get(); // output is : Hello Bharat (space bhi aaya hai)

    }

    // then close the file
    fin.close();
}