#include <iostream>
using namespace std;

int main(){

    int n,m;
    cout<<"Enter the dimension of matrix : ";
    cin>>n>>m;
    cout<<"Enter elements of matrix : "<<endl;
    int arr[n][m];


    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin>>arr[i][j];
        }
    }

    int row_start = 0;
    int row_end = n-1;
    int col_start = 0;
    int col_end = m-1;

    while(row_start <=  row_end && col_start <= col_end){
        if(row_start <= row_end){
            for(int i = col_start; i <= col_end; i++){
                cout<<arr[row_start][i]<<" ";
            } 
            row_start += 1;
        }
        if(col_start <= col_end){
            for(int i = row_start; i <= row_end; i++){
                cout<<arr[i][col_end]<<" ";
            }
            col_end -= 1;
        }
        if(row_start <= row_end){
            for(int i = col_end; i >= col_start; i--){
                cout<<arr[row_end][i]<<" ";
            }
            row_end -= 1;
        }
        if(col_start <= col_end){
            for(int i = row_end; i >= row_start; i--){
                cout<<arr[i][col_start]<<" ";
            }
            col_start += 1;
        }
    }

    return 0;
}