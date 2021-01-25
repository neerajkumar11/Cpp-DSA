#include<iostream>
#include<cmath>
using namespace std;

void printDivisor(int n){
    for(int i = 1; i*i < n; i++){
        if(n%i == 0){
            cout<<i<<" ";
        }
    }
    for(int i = sqrt(n); i >= 1; i--){
        if(n%i == 0){
            cout<<n/i<<" ";
        }
    }
}

int main(){
    int n = 6;
    printDivisor(n);

    return 0; 
}