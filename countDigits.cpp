#include<iostream>
#include<cmath>
using namespace std;

int countDigits1(int n){
    int count = 0;
    while(n > 0){
        n = n/10;
        count++;
    }   
    return count;
}

int countDigits2(int n){
    return floor(log10(n)+1);
}

int main(){

    int n = 789;
    cout<<countDigits1(n)<<endl;
    cout<<countDigits2(n);
    return 0;
}