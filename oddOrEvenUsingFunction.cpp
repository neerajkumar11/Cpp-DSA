#include<iostream>
using namespace std;

bool isEven(int num){
    if(num%2 == 0){
        return true;
    } else {
        return false;
    }

}

int main(){

    int n;
    cout<<"Enter the no. : ";
    cin>>n;

    if(isEven(n)){
        cout<<"Even";
    } else {
        cout<<"Odd";
    }

    return 0;
}