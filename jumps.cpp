#include<iostream>
using namespace std;

int main(){

    // print numbers upto 100 whic are not divisible by 3
    // for( int i=1; i<=100; i++){
    //     if( i%3 == 0){
    //         continue;
    //     }
    //     cout<<i<<endl;
    // }

    // prime or not
    // int n;
    // cin>>n;
    // int p = 1;
    // for( int i=2; i<n; i++){
    //     if(n%i == 0){
    //         p=0;
    //         break;
    //     }
    // }
    // if(p == 1){
    //     cout<<"prime\n";
    // } else {
    //     cout<<"Not Prime\n";
    // }

    // print prime between two numbers
    // int a;
    // int b;
    // cin>>a>>b;
    // if(a>1 && b>1 && b>a){
    //     cout<<"Prime number between "<<a<<" and "<<b<<" are - \n";
    //     for(int i=a; i<=b; i++){
    //         int p = 1;
    //         for(int j=2; j<i; j++){
    //         if(i%j == 0){
    //             p=0;
    //             break;
    //         } 
    //         }
    //         if(p == 1){
    //             cout<<i<<endl;
    //         }
    //     }
    // } else {
    //     cout<<"Please enter valid no.";
    // }


    // odd no. till n

    int n;
    cout<<"Enter the range of odd no. : ";
    cin>>n;

    cout<<"Odd no. are - \n";

    for(int i = 1; i <= n; i++){
        if(i%2 == 0){
            continue;
        }
        cout<<i<<endl;
    }
    
    

    return 0;
}