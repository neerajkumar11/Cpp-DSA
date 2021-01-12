#include<iostream>
using namespace std;

bool isEligible(int a){
    if(a >= 18){
        return true;
    } else {
        return false;
    }
}

int main(){

    int age;
    cout<<"Enter your age : ";
    cin>>age;

    if(age <= 0){
        cout<<"First come in this world :)"<<endl;
    } else {
        if(isEligible(age)){
            cout<<"You can vote."<<endl;
        } else {
            cout<<"You can't vote."<<endl;
        }
    }

    return 0;
}