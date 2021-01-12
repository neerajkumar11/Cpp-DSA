#include <iostream>
#include<cmath>
using namespace std;

bool checkPrime(int num){
    for(int i = 2; i<=sqrt(num); i++){
        if((num%i) == 0){
            return false;
        }
    }
    return true;
}

int main(){

    int a, b;
    cout<<"Enter a number : ";
    cin>>a;
    cout<<"Enter another number : ";
    cin>>b;

    for(int i = a; i <= b; i++){
        if(checkPrime(i)){
            cout<<i<<endl;
        }
    }
    return 0;
}