#include<iostream>
using namespace std;

int main(){

    int  n;
    cin>>n;

    int arr[n];

    for(int i = 0; i <n; i++){
        cin>>arr[i];
    }

    for(int i = 1; i < n; i++){
        int current = arr[i];
        int j = i-1;
        cout<<"i = "<<i<<endl;;
        while(arr[j]>current && j>=0){
            cout<<"j = "<<j<<endl;
            arr[j+1] = arr[j];
            j--;
            for(int k = 0; k < n; k++){
            cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
        arr[j+1] = current;
        cout<<" "<<endl;
        for(int k = 0; k < n; k++){
            cout<<arr[k]<<" ";
        }
        cout<<" "<<endl;
        cout<<" "<<endl;
    }

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}