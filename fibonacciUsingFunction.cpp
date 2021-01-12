#include<iostream>
using namespace std;


void fibo(int num){
    int a = 0;
    int b = 1;
    int c;

    for(int i = 1; i <= num; i++){
        cout<<a<<endl;
        c = a+b;
        a = b;
        b = c;
    }

    // if(num<=0){
    //     cout<<"Please enter a no. > 0"<<endl;
    // } else if(num==1){
    //     cout<<0<<endl;
    // } else {
    //     cout<<0;
    //     for(int i = 2; i <= num; i++){
    //         int c = a+b;
    //         cout<<", "<<c;
    //         a = b;
    //         b = c;
    //     }
    // } 
    return;  
}

int main(){

    int n;
    cout<<"Enter a no. ";
    cin>>n;

    fibo(n);

    return 0;
}