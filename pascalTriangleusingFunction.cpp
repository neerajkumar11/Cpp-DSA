#include<iostream>
using namespace std;

int fact(int num){
    int res = 1;
    for(int i = 2; i <= num; i++){
        res*=i;
    }
    return res;
}

int nCr(int a, int b){
    int comb = fact(a)/(fact(a-b)*fact(b));
    return comb;
}

int main(){
    int n;
    cout<<"Enter size : ";
    cin>>n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout<<nCr(i,j)<<" ";
        }
        cout<<endl;
    }
}