#include<iostream>
using namespace std;

bool palindrome(int n){

    int rev = 0;
    int temp = n;
    while(temp > 0){
        int rem = temp % 10;
        temp = temp*10 + rem;
        temp = temp/10;
    }
    
    if(n==rev){
        return true;
    } else {
        return false;
    }
}

int main(){

    int n = 7;
    cout<<palindrome(n);
    return 0;
}