#include<iostream>
using namespace std;
int main(){
    int number[6] = {10, 15, 20, 25, 30, 15};
    int arrayLength = sizeof(number) / sizeof(int);
    cout<<arrayLength<<endl;
    string words[5] = {"Words", "Numbers", "Classes", "Algos", "Frock"};
    int getWordsLength = sizeof(words) / sizeof(string);
    cout<<getWordsLength<<endl;
}