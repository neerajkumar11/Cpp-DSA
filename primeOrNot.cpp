#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int n;
    cout<<"Enter a no. : ";
    cin>>n;

    bool prime = true;
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i == 0){
            cout<<"Not Prime";
            prime = false;
            break;
        }
    }
    if(prime){
        cout<<"Prime";
    }
}