#include<iostream>
using namespace std;

// //Eucleiden Algorithm
// int gcd(int a, int b){
//     while(a != b){
//         if(a>b){
//             a = a-b;
//         } else {
//             b = b-a;
//         }
//     } 
//     return b;
// }

//Optimised Euclidean Algorithm
int gcd(int a, int b){
    while(a%b != 0){
        int temp = b;
        b = a%b;
        a = temp;
    }
    return b;
}

int main(){

    int a = 15;
    int b  = 35;
    cout<<gcd(a,b);

    return 0;
}