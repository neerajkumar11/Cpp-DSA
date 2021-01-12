#include <iostream>
using namespace std;

int main(){

    int N;
    cout<<"Enter the size of square matrix : ";
    cin>>N;
    cout<<"Enter elements of matrix : "<<endl;
    int arr[N][N];


    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;

    for(int i = 0; i < N; i++){
        for(int j = 0; j <= i; j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}