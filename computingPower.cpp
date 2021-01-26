#include<iostream>
#include<cmath>
using namespace std;

// int power(int n, int e){
//     return pow(n,e);
// }

int power(int n, int e){
    int res = 1;
    if(e == 0){
        return 1;
    }
    int temp = power(n,e/2);
    temp = temp * temp;
    if(e % 2 == 0){
        return temp;
    } else {
        return n*temp;
    }
}

int main(){
    int n = 3;
    int e = 8;
    cout<<power(n,e);

    return 0;
}