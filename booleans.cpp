#include<iostream>
using namespace std;
int main(){
    bool isNumberCorrect = true;
    bool isNumberFalse = false;
    cout<<isNumberCorrect<<endl;
    cout<<isNumberFalse<<endl;
    // From the example above, you can read that a true value returns 1, and false returns 0.
    // However, it is more common to return a boolean value by comparing values and variables.
    int x = 123, y = 34;
    cout<<(x>y)<<endl; // it will return 1. because it's true;
    // here we have to use bracket otherwise in cout > this symbol is consider as exertion operator .

    cout<<(x<y)<<endl; // it will return 0. because its false;
    cout<<(x==123)<<endl; // it will return 1. it's also true;
}