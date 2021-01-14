#include <iostream>
using namespace std;

int getBit(int n, int p){
    // if ((n & 1<<(p-1)) == 0){
    //     return 0;
    // } else{
    //     return 1;
    // }
        // or

    if(((n >> (p-1)) & 1) == 0){
        return 0;
    } else {
        return 1;
    }
}

int main(){

    int n, p;
    cout<<"Enter number : ";
    cin>>n;
    cout<<"Enter posisition to get bit : ";
    cin>>p;
    cout<<"The bit at position "<<p<<" in "<<n<<" is "<<getBit(n,p)<<endl;


    return 0;
}