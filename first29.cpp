#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int>arr(6);
    cout<<"Enter 6 elements: ";
    for(int i=0;i<6;i++)
    cin>>arr[i];

    // open the file
    ofstream fout;
    fout.open("xyz.txt");
    fout<<"Original data\n";

    for(int i=0;i<6;i++)
    {
        fout<<arr[i]<<" ";
    }
    sort(arr.begin(),arr.end());

    fout<<"\nSorted data is\n";

    for(int i=0;i<6;i++)
    {
        fout<<arr[i]<<" ";
    }

    fout.close();

}