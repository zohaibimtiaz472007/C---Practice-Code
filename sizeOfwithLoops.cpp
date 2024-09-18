#include<iostream>
using namespace std;
int main(){
    int numbers[5] = {1,2,3,4,5,};
    int size = sizeof(numbers) / sizeof(int);
    for (int i = 0 ; i < size ; i++){
        cout<<numbers[i]<<endl;
    }
}