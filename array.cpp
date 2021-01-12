#include <iostream>
using namespace std;

int main(){

    // int array[4];
    // array[0] = 10;
    // array[1] = 20;
    // array[2] = 30;
    // array[3] = 40;

    // int array[4] = {10, 20, 30, 40};

    int n;
    cin>>n;
    int array[n];
    for(int i = 0; i < n; i++){
        cin>>array[i];
    }

    for(int i = 0; i < n; i++){
        cout<<array[i]<<" ";
    }


    return 0;

}