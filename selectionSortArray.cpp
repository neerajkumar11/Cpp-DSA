#include<iostream>
using namespace std;

// int minNum(int arr[], int n, int i){
//     int min = INT_MAX;
//     for(int j = i; j < n; i++){
//         if(arr[j] < min){
//             min = arr[j];
//         }
//     }
//     return min;
// }

int main(){

    int n;
    cin>>n;
    int arr[n];

    for( int i = 0; i < n; i++){
        cin>>arr[i];
    }

    for(int i = 0; i < n - 1; i++){
        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }


     for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    

    return 0;
}