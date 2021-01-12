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

    int n;
    cin>>n;

    cout<<fact(n)<<endl;;

    return 0;
}