#include<iostream>
using namespace std;
int main(){
    string cars[] = {"Volvo", "Toyota", "Mazda"};
    // cars[3] = "Honda";
    int x;
    cout<<"Enter the Number and get a Car name: ";
    cin>>x;
    cout<<cars[x]<<endl; // output will be Toyota. Because the number start from 0
    // cout<<cars[0]<<endl; // output will be Volvo.
}