#include<iostream>
using namespace std;

bool isAlphabet(char a){
    if((int(a) >= 65 && int(a) <=90) || (int(a) >= 97 && int(a) <= 122)){
        return true;
    } else {
        return false;
    }
}

int main(){

    char a;
    cout<<"Enter a character : ";
    cin>>a;

    if(isAlphabet(a)){
        cout<<"Yes, a alphabet";
    } else {
        cout<<"No, not a alphabet";
    }

    return 0;
}