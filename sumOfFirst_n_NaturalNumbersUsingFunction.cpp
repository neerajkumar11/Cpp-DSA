#include<iostream>
using namespace std;

int sum(int num){
    return (num*(num+1))/2;
}

int main(){

    int n;
    cout<<"Enter no. : ";
    cin>>n;

    cout<<"The sum of first "<<n<<" natural number is "<<sum(n);

    return 0;
}