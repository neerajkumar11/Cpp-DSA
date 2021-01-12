#include <iostream>
using namespace std;

int main(){

    int n,m;
    cout<<"Enter the dimension of matrix : ";
    cin>>n>>m;
    cout<<"Enter elements of matrix : ";
    int arr[n][m];


    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin>>arr[i][j];
        }
    }
    int num;
    cout<<"Enter no. to find position : ";
    cin>>num;
    bool isPresent = false;

    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < m; j++){
    //         if(arr[i][j] == num){
    //             cout<<num<<" is present at "<<i+1<<","<<j+1<<" position"<<endl;
    //             isPresent = true;
    //         }
    //     }
    // }

    // or in optimised way (for sorted matrix)
    //i.e. row and col value both inc. in asceding order

    int row = 0;
    int col = m-1;

    while(row < n && col >= 0)
    if(num == arr[row][col]){
        cout<<num<<" is present at "<<row+1<<","<<col+1<<" position"<<endl;
        isPresent = true;
        break;
    } else if( num > arr[row][col]){
        row = row + 1;
    } else {
        col = col -1;
    }

    if(!isPresent){
        cout<<num<<" is not present";
    }

    return 0;
}