#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int n;
    cout<<"Enter a no. : ";
    cin>>n;

    int cubeSum = 0;
    int num = n;

    while(num > 0){
        int lastDigit = num%10;
        cubeSum += pow(lastDigit, 3);
        num = num/10;
    }

    if(cubeSum == n){
        cout<<"Armstrong"<<endl;
    } else {
        cout<<"Not Armstrong"<<endl;
    }

    return 0;
}