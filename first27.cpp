#include<bits/stdc++.h>
using namespace std;


int main(){
    
    // To open the file
    ofstream fout;
    fout.open("abc.txt");// file ka path // if file is present at this path fount usse open kr dega, if not present then fount will create it and open it

    //To write in the file
    fout<<"Hello Bharat";

    // To close the , opened file to release the resources who is handling this file
    fout.close(); 
}