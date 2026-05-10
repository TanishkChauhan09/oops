#include<bits/stdc++.h>
using namespace std;

class Student
{
   int a;
   char b;
};

int main()
{
    Student s; // static way of creating an object and it is create in a stack memory
    // cout<<sizeof(s)<<endl; empty class has 1 byte size because every object must have a unique address in memory
 
    cout<<sizeof(s)<<endl; // 8 bytes because of padding and alignment. The compiler adds 3 bytes of padding after the char variable to align the data in memory for efficient access. This is done to ensure that the int variable is stored at an address that is a multiple of its size (4 bytes), which allows for faster access.
}