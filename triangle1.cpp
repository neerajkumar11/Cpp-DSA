#include<iostream>
using namespace std;

int main(){

    int size;
    cout<<"Enter size : ";
    cin>>size;
    cout<<endl;

    for(int i = 1; i <= size; i++){
        for(int j = 1; j <= i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;

    return 0;
}