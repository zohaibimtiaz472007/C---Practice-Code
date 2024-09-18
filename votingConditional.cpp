#include<iostream>
using namespace std;
int main(){
    int yourAge, votingAge;
    cout<<"Enter your Age here: ";
    cin>>yourAge;
    votingAge = 18;
    if (yourAge >= votingAge){
        cout<<"You are Eligible for Voting";
    }
    else{
        cout<<"You're not eligible for voting";
    }
}