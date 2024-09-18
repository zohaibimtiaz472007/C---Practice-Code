#include<iostream>
using namespace std;
int main(){
    
    string cars[] = {"honda", "toyota", "Hyundai", "Mazda", "Volvo"};
    for(int i = 0; i<5 ; i++){
        if(i == 4){
            cout<<cars[i]<<" is the best car"<<endl;
        }
    }
    int myNumber[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for(int j = 0 ; j<10 ; j++){
        cout<<myNumber[j]<<endl;
    }
}