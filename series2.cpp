#include <iostream>
using namespace std;

int main(){

    int size;
    cout<<"Enter size of series : ";
    cin>>size;

    if(size <= 0){
        cout<<"The size of series must be greater than 0";
    } else {
        int sum = 1;
        cout<<"Series : 1";
        for(int i = 2; i <= size; i++){
            if(i % 2 == 0){
                cout<<" - "<<i;
                sum = sum - i;
            } else {
                cout<<" + "<<i;
                sum = sum + i;
            }
        }
        cout<<endl<<"Sum of series : "<<sum;
    }
    


    return 0;
}