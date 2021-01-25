#include<iostream>
using namespace std;

void printAllPrime(int n){
    for(int i = 2; i <= n; i++){
        bool isPrime = true;
        if( i == 2 || i == 3){
            isPrime = true;
        } else if( i % 2 == 0 || i % 3 == 0){
            isPrime = false;
        } else {
            for(int j = 5; j*j <= i; j = j + 6){
                if(i%j == 0 || i%(j+2)){
                    isPrime = false;
                }
            }
        }
        
        if(isPrime){
            cout<<i<<endl;
        }
    }
}

int main(){

    int n = 23;
    printAllPrime(n);

    return 0;
}