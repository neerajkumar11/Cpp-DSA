#include<iostream>
using namespace std;

int fact(int num){
    int res = 1;
    for(int i = 2; i <= num; i++){
        res*=i;
    }
    return res;
}

int main(){

    int n,r;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter r : ";
    cin>>r;

    int comb = fact(n)/(fact(n-r)*fact(r));
    cout<<"No. of Combination is "<<comb<<endl;

    return 0;
}