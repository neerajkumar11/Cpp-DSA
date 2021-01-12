#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int sumArr[n];

    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = 0; j <= i; j++){
            sum = sum + arr[j];
        }
        sumArr[i] = sum;
    }

    for(int i = 0; i < n; i++){
        cout<<sumArr[i]<<" ";
    }


    return 0;
}