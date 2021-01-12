#include<iostream>
using namespace std;

int main(){

    char a;
    cout<<"Enter a alphabet : ";
    cin>>a;

    if((int(a) >= 65 && int(a) <=90) || (int(a) >= 97 && int(a) <= 122)){
       if(a == 'a' || a=='e' || a=='i' || a=='o' || a=='u' || a=='A' || a=='E' || a=='I' || a=='O' || a=='U'){
            cout<<a<<" is vowel";
        } else {
            cout<<a<<" is consonant";
        } 
    } else {
        cout<<"Please enter a English alphabet A-Z or a-z";
    }


    return 0;
}

