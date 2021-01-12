#include<iostream>
using namespace std;

int sum(int a, int b){
    int res = 0;
    int carry = 0;
    int multiplier = 1;

    while(a>0 || b>0){
        if(a%10==0 && b%10==0){
            if(carry == 0){
                res = 0*multiplier + res;
                carry = 0;
            } else {
                res = 1*multiplier + res;
                carry = 0;
            }
        } else if((a%10 == 0 && b%10 == 1) || (a%10 == 1 && b%10 == 0)){
            if(carry == 0){
                res = 1*multiplier + res;
                carry = 0;
            } else {
                res = 0*multiplier +res;
                carry = 1;
            }
        } else {
            if(carry == 0){
                res = 0*multiplier + res;
                carry = 1;
            } else {
                res = 1*multiplier +res;
                carry = 1;
            }
        }

        a /= 10;
        b /= 10;
        multiplier *= 10;
    }

    if(carry == 1){
        res = 1*multiplier + res;
    }

    return res;
    
}

int main(){

    int n1, n2;
    cin>>n1>>n2;

    cout<<sum(n1, n2)<<endl;


    return 0;
}
