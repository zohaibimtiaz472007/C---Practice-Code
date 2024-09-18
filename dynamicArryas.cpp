#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<string> cars = {"Zohaib", "Shahzad", "Huzaifa", "Sayam"};
    cars.push_back("Shakir");
    cout<<sizeof(cars)<<endl;
    for (string car : cars){
        cout << car << endl;
    }
}