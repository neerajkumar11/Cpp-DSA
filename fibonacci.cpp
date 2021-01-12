#include<iostream>
using namespace std;

int main(){

    int a = 0;
    int b = 1;

    int n;
    cout<<"Enter length of series : ";
    cin>>n;

    if( n <= 0 ){
        cout<<"Enter a no. greater than 0"<<endl;
    } else if(n==1) {
        cout<<a;
    } else if(n>=2) {
        cout<<a<<", "<<b;
    }

    for(int i = 3; i <= n; i++){
        cout<<", "<<a+b;
        int temp = b;
        b = a+b;
        a = temp;
    }



    return 0;
}